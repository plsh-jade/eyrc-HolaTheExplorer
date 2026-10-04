#!/usr/bin/env python3
"""
Boilerplate controller for the HE bot.

Fetches a shape from the get_shape service and builds a list of waypoints
to trace it. Fill in the control loop to drive the robot through them.


"""

import argparse
import math

import numpy as np
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from std_msgs.msg import Float64MultiArray
from shape_interface.srv import GetShape

# ---------------------------------------------------------------------------
# Robot geometry (same values as Task 1B inverse_kinematics.py).
# ---------------------------------------------------------------------------
WHEEL_RADIUS_M = 0.0255
CHASSIS_RADIUS_M = 0.06412
WHEEL_ANGLES_RAD = np.radians([30.0, 150.0, 270.0])  # [left, right, back]

# Inverse kinematics: wheel speed = (vx*cos(phi) + vy*sin(phi) + R*wz) / r
# rows = wheels [left, right, back], cols = body [vx, vy, wz].
_BODY_TO_WHEEL = (np.column_stack((
    np.cos(WHEEL_ANGLES_RAD),
    np.sin(WHEEL_ANGLES_RAD),
    np.full(3, CHASSIS_RADIUS_M),
)) / WHEEL_RADIUS_M)

# Wheel <-> body-velocity mapping, columns are [left, right, back] wheel
# speed (rad/s); rows are body frame [vx, vy, wz] per unit wheel speed.
_WHEEL_TO_BODY = np.linalg.inv(_BODY_TO_WHEEL)
_CTRL_LIMIT = 30.0      # rad/s, matches lekiwi.xml actuator ctrlrange

#Tuning Constants(Helps us in tuning the PID controller)
WAYPOINT_TOLERANCE = 0.025   # metres (tighter, so corners are actually hit)
CIRCLE_SEGMENTS     = 36
# PID gains -- Kp decisive, small Kd damps overshoot, small Ki kills SSE.
POSITION_KP         = 2.2
POSITION_KI         = 0.08
POSITION_KD         = 0.5
POSITION_D_ALPHA    = 0.35  # low-pass on derivative (0..1, lower = smoother)
YAW_HOLD_KP         = 1.5
YAW_HOLD_KI         = 0.05
YAW_HOLD_KD         = 0.3
CONTROL_PERIOD      = 0.05
MAX_YAW_RATE        = 1.0   # rad/s clamp on heading correction
POS_INT_LIMIT       = 0.4   # anti-windup clamps
YAW_INT_LIMIT       = 0.8
SLOW_RADIUS         = 0.25  # m: begin ramping speed down inside this distance
MIN_CRUISE          = 0.05  # m/s floor while ramping (avoids stalling)
MAX_ACCEL           = 0.8   # m/s^2 slew limit on world-frame velocity cmds

def _wrap_angle(a):
    """Wrap angle to [-pi, pi]."""
    # so that for e.g. +179, -179 give 2 degrees error not 358 degrees
    return math.atan2(math.sin(a), math.cos(a))


def body_to_wheels(vx, vy, wz):
    """Body-frame (vx, vy, wz) -> wheel angular velocities [left, right, back]."""
    # Same inverse kinematics trusted from Task 1B.
    vec = np.array([vx, vy, wz], dtype=float)
    wheels = _BODY_TO_WHEEL @ vec
    wheels = np.clip(wheels, -_CTRL_LIMIT, _CTRL_LIMIT)
    return [float(w) for w in wheels]


def yaw_from_quat(w, x, y, z):
    # Standard yaw (rotation about Z) from quaternion.
    siny_cosp = 2.0 * (w * z + x * y)
    cosy_cosp = 1.0 - 2.0 * (y * y + z * z)
    return math.atan2(siny_cosp, cosy_cosp)


def _regular_polygon(cx, cy, n_sides, side_length, start_angle=math.pi / 2):
    """Vertices of a regular polygon centred on (cx, cy), closed back to the
    first vertex so the last waypoint returns the robot to where it started
    drawing."""
    r = side_length / (2 * math.sin(math.pi / n_sides))
    pts = [
        (cx + r * math.cos(start_angle + 2 * math.pi * i / n_sides),
         cy + r * math.sin(start_angle + 2 * math.pi * i / n_sides))
        for i in range(n_sides)
    ]
    return pts + [pts[0]]


def build_waypoints(shape_name, data):
    """World-frame waypoints for `shape_name`, as returned by the get_shape
    service: data[0:2] is the shape's centre (x, y); the remaining entries
    are its size parameters (see shape_service.cpp's shape_map)."""
    cx, cy = data[0], data[1]

    if shape_name == "Circle":
        radius = data[2]
        return [
            (cx + radius * math.cos(2 * math.pi * i / CIRCLE_SEGMENTS),
             cy + radius * math.sin(2 * math.pi * i / CIRCLE_SEGMENTS))
            for i in range(1, CIRCLE_SEGMENTS + 1)
        ]

    if shape_name == "Square":
        return _regular_polygon(cx, cy, 4, data[2], start_angle=math.pi / 4)

    if shape_name == "Triangle":
        return _regular_polygon(cx, cy, 3, data[2])

    if shape_name == "Pentagon":
        return _regular_polygon(cx, cy, 5, data[2])

    if shape_name == "Rectangle":
        w, h = data[2], data[3]
        corners = [
            (cx - w / 2, cy - h / 2),
            (cx + w / 2, cy - h / 2),
            (cx + w / 2, cy + h / 2),
            (cx - w / 2, cy + h / 2),
        ]
        return corners + [corners[0]]

    raise ValueError(f"unknown shape '{shape_name}'")


class ShapeController(Node):
    def __init__(self, speed):
        super().__init__("shape_controller")
        self.speed = speed

        self.pose = None        # (x, y, yaw), latest ground truth
        self.start_pose = None  # (x, y, yaw), recorded on first odom message
        self.wp_index = 0
        self.done = False
        # PID state, one set per axis (e_x, e_y, e_theta).
        self.int_x = 0.0
        self.int_y = 0.0
        self.int_th = 0.0
        self.prev_ex = 0.0
        self.prev_ey = 0.0
        self.prev_eth = 0.0
        self.filt_dex = 0.0  # low-passed derivative state per axis
        self.filt_dey = 0.0
        self.filt_deth = 0.0
        self.prev_vx_w = 0.0  # slew limiter state (world frame)
        self.prev_vy_w = 0.0
        self.first_step = True
        self.desired_yaw = None

        # Publisher / subscriber.
        self.cmd_pub = self.create_publisher(Float64MultiArray, "/wheel_commands", 10)
        self.odom_sub = self.create_subscription(Odometry, "/odom", self._odom_cb, 10)

        # Service client: call /get_shape once at startup, build waypoints.
        self.shape_name, self.waypoints = self._request_shape()
        self.get_logger().info(
            f"Got shape '{self.shape_name}' with {len(self.waypoints)} waypoints: "
            f"{self.waypoints}"
        )

        # Control loop timer.
        self.timer = self.create_timer(CONTROL_PERIOD, self._control_step)
    
    def _request_shape(self):
        '''Create client GetShape and wait for the service to be available. 
        Then call the service and wait for the response. 
        If the response is None or not successful, raise a RuntimeError. 
        Otherwise, return the shape name and waypoints.'''

        client = self.create_client(GetShape, "get_shape")
        while not client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info("Waiting for get_shape service...")

        future = client.call_async(GetShape.Request())
        rclpy.spin_until_future_complete(self, future)
        response = future.result()
        if response is None or not response.success:
            raise RuntimeError(
                f"get_shape service call failed: {response and response.message}"
            )

        return response.shape_name, build_waypoints(response.shape_name, list(response.data))

    def _odom_cb(self, msg):
        p = msg.pose.pose.position
        q = msg.pose.pose.orientation
        yaw = yaw_from_quat(q.w, q.x, q.y, q.z)
        self.pose = (float(p.x), float(p.y), float(yaw))
        if self.start_pose is None:
            self.start_pose = self.pose
            self.desired_yaw = yaw
            self.get_logger().info(
                f"Start pose: x={p.x:.3f} y={p.y:.3f} yaw={yaw:.3f}"
            )

    def _publish(self, wheels): # -> publish wheel speeds to /wheel_commands. expects exactly 3 [left, right, back]
        self.cmd_pub.publish(Float64MultiArray(data=wheels))

    def _pid_axis(self, err, integ, prev_err, filt_d, kp, ki, kd, dt, int_limit): # -> generic PID controller for one axis. returns (control, new_integral, new_filt_d)
        integ = integ + err * dt
        integ = max(-int_limit, min(int_limit, integ))  # anti-windup
        raw_deriv = 0.0 if self.first_step else (err - prev_err) / dt
        # First-order low-pass on the derivative: smoother, less jittery.
        filt_d = filt_d + POSITION_D_ALPHA * (raw_deriv - filt_d)
        return kp * err + ki * integ + kd * filt_d, integ, filt_d

    # The core loop runs at CONTROL_PERIOD, and is responsible for computing the wheel commands to drive the robot through the waypoints.
    def _control_step(self):
        if self.done or self.pose is None:
            return
        if not hasattr(self, "waypoints") or len(self.waypoints) == 0:
            return
        if self.wp_index >= len(self.waypoints):
            self.done = True
            self._publish([0.0, 0.0, 0.0])
            return

        x, y, yaw = self.pose
        # Reset integral terms if we just reached a waypoint, to avoid windup.
        gx, gy = self.waypoints[self.wp_index]
        if math.hypot(gx - x, gy - y) < WAYPOINT_TOLERANCE:
            self.get_logger().info(
                f"Reached wp {self.wp_index + 1}/{len(self.waypoints)}"
            )
            self.wp_index += 1
            self.int_x = self.int_y = self.int_th = 0.0
            self.filt_dex = self.filt_dey = self.filt_deth = 0.0
            self.prev_vx_w = 0.0  # brief settle so we turn smoothly into next leg
            self.prev_vy_w = 0.0
            self.first_step = True
            if self.wp_index >= len(self.waypoints):
                self.done = True
                self._publish([0.0, 0.0, 0.0])
                self.get_logger().info("Shape complete, stopping.")
                return
            gx, gy = self.waypoints[self.wp_index]
        #error computation
        dt = CONTROL_PERIOD if CONTROL_PERIOD > 0 else 0.05
        ex, ey = gx - x, gy - y
        des = self.desired_yaw if self.desired_yaw is not None else yaw
        eth = _wrap_angle(des - yaw)
        #PID control for each axis, with anti-windup and derivative term.
        vx_w, self.int_x, self.filt_dex = self._pid_axis(
            ex, self.int_x, self.prev_ex, self.filt_dex,
            POSITION_KP, POSITION_KI, POSITION_KD, dt, POS_INT_LIMIT)
        vy_w, self.int_y, self.filt_dey = self._pid_axis(
            ey, self.int_y, self.prev_ey, self.filt_dey,
            POSITION_KP, POSITION_KI, POSITION_KD, dt, POS_INT_LIMIT)
        wz, self.int_th, self.filt_deth = self._pid_axis(
            eth, self.int_th, self.prev_eth, self.filt_deth,
            YAW_HOLD_KP, YAW_HOLD_KI, YAW_HOLD_KD, dt, YAW_INT_LIMIT)
        self.prev_ex, self.prev_ey, self.prev_eth = ex, ey, eth
        self.first_step = False
        # Smooth waypoint approach: ramp the allowed speed down as we near
        # the goal so we arrive gently instead of braking hard at the edge.
        dist = math.hypot(ex, ey)
        allowed = self.speed
        if SLOW_RADIUS > 0:
            ramp = MIN_CRUISE + (self.speed - MIN_CRUISE) * min(1.0, dist / SLOW_RADIUS)
            allowed = min(allowed, max(MIN_CRUISE, ramp))
        # speed caping and direction presesrvation
        n = math.hypot(vx_w, vy_w)
        if n > allowed and n > 1e-9:
            s = allowed / n
            vx_w *= s
            vy_w *= s
        # Slew (accel) limit: caps how fast the velocity command can change
        # per step, killing jerky starts/stops at corners.
        max_dv = MAX_ACCEL * dt
        dvx, dvy = vx_w - self.prev_vx_w, vy_w - self.prev_vy_w
        dv = math.hypot(dvx, dvy)
        if dv > max_dv and dv > 1e-9:
            k = max_dv / dv
            vx_w = self.prev_vx_w + dvx * k
            vy_w = self.prev_vy_w + dvy * k
        self.prev_vx_w, self.prev_vy_w = vx_w, vy_w
        wz = max(-MAX_YAW_RATE, min(MAX_YAW_RATE, wz))

        # World -> body frame, then IK to wheel speeds.
        c, s_ = math.cos(yaw), math.sin(yaw)
        vx_b = c * vx_w + s_ * vy_w
        vy_b = -s_ * vx_w + c * vy_w
        self._publish(body_to_wheels(vx_b, vy_b, wz))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--speed", type=float, default=0.18,
                         help="max approach speed, m/s (lower = smoother, gentler tracing)")
    args, ros_args = parser.parse_known_args()

    rclpy.init(args=ros_args)
    node = ShapeController(args.speed)
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node._publish([0.0, 0.0, 0.0])
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
