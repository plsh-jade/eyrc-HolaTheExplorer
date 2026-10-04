#!/usr/bin/env python3
# Copyright (c) 2026 e-Yantra, IIT Bombay. All rights reserved.
# These simulation files and source code are the intellectual property of e-Yantra,
# IIT Bombay, provided solely for eYRC 2026-27 (Theme: Hola The Explorer).
# Sharing or redistribution of this material, in whole or in part, is not permitted.

#!/usr/bin/env python3
'''
*****************************************************************************************
*
*        =============================================
*           Hola The Explorer (HE) Theme (eYRC 2025-26)
*        =============================================
*
*  This script is to implement Task 1A of Hola The Explorer (HE) Theme (eYRC 2025-26).
*
*****************************************************************************************
'''

# Team ID:          [ Team-ID ]
# Author List:      [ Names of team members who worked on this file, separated by comma ]
# Filename:         camera_detection.py
# Functions:        centre_of_quad(), find_trapezoids(), main()
#                   [ Add every extra helper function you write to this list ]
# Global variables: STREAM_URL, WINDOW, BINARY_WINDOW, FPS_WINDOW, ARENA_*, SAND_DISTANCE,
#                   HOUGH_*, MIN_TRAPEZOID_AREA, PARALLEL_TOLERANCE_DEG, REPORT_PERIOD_SEC
#                   [ Add every extra global variable you declare to this list ]
# Service Clients:  pixel_to_world  ->  shape_interface/srv/PixelToWorld


import math
import time
from collections import deque

import cv2
import numpy as np
import rclpy
from rclpy.node import Node
from shape_interface.srv import PixelToWorld

###############################################################

################# ADD EXTRA IMPORTS / GLOBALS HERE ############



###############################################################


############################ WHAT YOU HAVE TO DO ##############################
#
#  The overhead camera publishes an MJPEG stream of the arena. Three "station
#  funnels" are painted on the arena floor -- each one is a TRAPEZOID (exactly
#  ONE pair of parallel sides). Your job:
#
#   1. Detect the three trapezoids in every frame.
#   2. Show a second window in which ONLY the trapezoid borders are white and
#      everything else is black.
#   3. Find each trapezoid's centre in pixels, and call the `pixel_to_world`
#      ROS service to convert that pixel to arena coordinates in metres.
#
#  Other things on the floor WILL try to fool you: the arena wall, the central
#  hexagon, circular markers and the rectangular "safe" that sits next to every
#  funnel. Your filters have to reject all of them.
#
#  Run order:
#      ros2 launch hb_description task1a.launch.py     # terminal 1 (simulation)
#      ros2 run task_1a camera_feed                    # terminal 2 (this file)
#
#  The launch file already starts pixel_to_world_service for you. If you launch
#  with enable_pixel_service:=false, start it yourself in its own terminal with
#      ros2 run task_1a pixel_to_world_service
#
###############################################################################


##################### TUNABLE CONSTANTS #######################
## These are STARTING values, not final answers. Keep the    ##
## binary window open and tune them until only the three     ##
## funnel borders survive.                                   ##
###############################################################

STREAM_URL = "http://127.0.0.1:8080/stream"
WINDOW = "camera_feed"
BINARY_WINDOW = "trapezoid_borders"
FPS_WINDOW = 30                 # number of frames averaged for the FPS readout

# Arena floor in image pixels, at the default 1280x720 stream. Everything
# outside this rectangle is terrain -- the SAME sandy rock as the floor, so if
# you do not crop it away it floods your mask. Re-measure these if you change
# the camera or the stream resolution (open one frame in an image viewer and
# read off the corners of the floor).
ARENA_X0, ARENA_Y0, ARENA_X1, ARENA_Y1 = 304, 24, 975, 695

# How far a pixel's colour must be from the floor's OWN colour before you call
# it "a drawn feature". The floor texture is very uniform, so a modest
# threshold separates cleanly. Raise it if noise leaks in, lower it if the pale
# cyan funnel disappears.
SAND_DISTANCE = 18

# Line-detection parameters. The funnel borders are thin outlines only a few
# pixels wide: a large enough minimum length keeps small icon detail out, and a
# generous maximum gap bridges the break where a safe overlaps a border.
HOUGH_THRESHOLD = 40
HOUGH_MIN_LENGTH = 35
HOUGH_MAX_GAP = 25

MIN_TRAPEZOID_AREA = 1200       # px^2, throws away small enclosed blobs
PARALLEL_TOLERANCE_DEG = 7      # two sides count as parallel within this angle

# Converting and printing at the full frame rate would be unreadable and would
# put ~90 service calls a second on the wire for no benefit.
REPORT_PERIOD_SEC = 0.5

###############################################################


##############################################################
def centre_of_quad(corners):
    """
    Purpose:
    ---
    Find the centre of a quadrilateral given its four corners.

    NOTE: the mean of the four corners is NOT the answer. A trapezoid's two
    parallel sides have different lengths, so the corner mean is pulled towards
    the shorter side and sits off the true centre of the shape. You want the
    AREA centroid of the polygon instead -- look up image moments in OpenCV
    (`cv2.moments` works on a contour, and the centroid is m10/m00, m01/m00).
    Remember to handle the degenerate case where m00 is (nearly) zero.

    Input Arguments:
    ---
    `corners` :  [ numpy array of shape (4, 2), dtype float ]
        the four corners of the quadrilateral, in pixel coordinates

    Returns:
    ---
    `cx` :  [ float ]  x coordinate of the centre, in pixels
    `cy` :  [ float ]  y coordinate of the centre, in pixels

    Example call:
    ---
    cx, cy = centre_of_quad(corners)
    """

    cx, cy = 0.0, 0.0

    contour = corners.astype(np.float32).reshape((-1, 1, 2))

    M = cv2.moments(contour)

    if abs(M["m00"]) > 1e-6:
        cx = M["m10"] / M["m00"]
        cy = M["m01"] / M["m00"]

    return cx, cy


##############################################################
def find_trapezoids(frame):
    """
    Locate the three station funnels (trapezoids) in one camera frame.

    Returns:
        binary:
            Full-frame 1280x720 binary image containing only the
            accepted trapezoid borders in white.

        trapezoids:
            List of:
                (centre_x, centre_y, corners)
            where corners are in full-frame coordinates.
    """


    binary = np.zeros(frame.shape[:2], np.uint8)
    trapezoids = []

    
    crop = frame[
        ARENA_Y0:ARENA_Y1 + 1,
        ARENA_X0:ARENA_X1 + 1
    ]

    if crop.size == 0:
        return binary, trapezoids

    lab = cv2.cvtColor(crop, cv2.COLOR_BGR2LAB)

    # Find the most common value in each LAB channel.
    # This represents the sandy floor colour.
    floor_colour = []

    for channel in cv2.split(lab):
        hist = np.bincount(
            channel.ravel(),
            minlength=256
        )

        floor_colour.append(np.argmax(hist))

    floor_colour = np.array(
        floor_colour,
        dtype=np.float32
    )

    
    diff = lab.astype(np.float32) - floor_colour

    distance = np.sqrt(
        np.sum(diff ** 2, axis=2)
    )

    
    mask = np.zeros(
        distance.shape,
        dtype=np.uint8
    )

    mask[distance > SAND_DISTANCE] = 255

    
    close_kernel = np.ones(
        (3, 3),
        dtype=np.uint8
    )

    mask = cv2.morphologyEx(
        mask,
        cv2.MORPH_CLOSE,
        close_kernel,
        iterations=1
    )

   
    edges = cv2.Canny(
        mask,
        50,
        150
    )

    
    lines = cv2.HoughLinesP(
        edges,
        rho=1,
        theta=np.pi / 180,
        threshold=HOUGH_THRESHOLD,
        minLineLength=HOUGH_MIN_LENGTH,
        maxLineGap=HOUGH_MAX_GAP
    )

    if lines is None:
        return binary, trapezoids

   
    scratch = np.zeros(
        mask.shape,
        dtype=np.uint8
    )

    for line in lines:

        x1, y1, x2, y2 = line[0]

        cv2.line(
            scratch,
            (x1, y1),
            (x2, y2),
            255,
            3
        )

    
    scratch_kernel = np.ones(
        (5, 5),
        dtype=np.uint8
    )

    scratch = cv2.morphologyEx(
        scratch,
        cv2.MORPH_CLOSE,
        scratch_kernel,
        iterations=1
    )

    contours, hierarchy = cv2.findContours(
        scratch,
        cv2.RETR_CCOMP,
        cv2.CHAIN_APPROX_SIMPLE
    )

    if hierarchy is None:
        return binary, trapezoids

    hierarchy = hierarchy[0]

    def angle_difference(a, b):
        """
        Return the smallest difference between two angles.
        Handles the 0/180 degree wrap-around.
        """

        diff = abs(a - b)

        while diff >= 180:
            diff -= 180

        if diff > 90:
            diff = 180 - diff

        return diff

    
    def side_angle(p1, p2):

        dx = float(p2[0] - p1[0])
        dy = float(p2[1] - p1[1])

        angle = math.degrees(
            math.atan2(dy, dx)
        )

        # Treat lines as undirected.
        # Convert to [0, 180).
        if angle < 0:
            angle += 180

        return angle

  
    def is_trapezoid(poly):

        if len(poly) != 4:
            return False

        # Four points
        pts = poly.reshape(4, 2)

        # Check convexity
        if not cv2.isContourConvex(poly):
            return False

        # Calculate four side angles
        angles = []

        for i in range(4):

            p1 = pts[i]
            p2 = pts[(i + 1) % 4]

            angles.append(
                side_angle(p1, p2)
            )

        # Opposite side pairs:
        #
        # side 0 and side 2
        # side 1 and side 3
        #
        # A trapezoid has exactly ONE pair
        # of opposite sides approximately parallel.

        pair_1 = angle_difference(
            angles[0],
            angles[2]
        )

        pair_2 = angle_difference(
            angles[1],
            angles[3]
        )

        parallel_1 = (
            pair_1 <= PARALLEL_TOLERANCE_DEG
        )

        parallel_2 = (
            pair_2 <= PARALLEL_TOLERANCE_DEG
        )

       
        return parallel_1 != parallel_2

    
    candidates = []

    for i, contour in enumerate(contours):

        
        parent = hierarchy[i][3]

        if parent < 0:
            continue

        # Area filtering
        area = cv2.contourArea(contour)

        if area < MIN_TRAPEZOID_AREA:
            continue

        # Polygon approximation
        perimeter = cv2.arcLength(
            contour,
            True
        )

        epsilon = 0.03 * perimeter

        poly = cv2.approxPolyDP(
            contour,
            epsilon,
            True
        )

        # Must have exactly four corners
        if len(poly) != 4:
            continue

        # Must be convex
        if not cv2.isContourConvex(poly):
            continue

        # Must actually be a trapezoid
        if not is_trapezoid(poly):
            continue

        candidates.append(
            (area, poly)
        )

   
    selected = []

    for area, poly in sorted(
        candidates,
        key=lambda item: item[0],
        reverse=True
    ):

        pts = poly.reshape(4, 2)

        cx_local, cy_local = centre_of_quad(pts)

        duplicate = False

        for _, _, existing_corners in selected:

            existing_local = (
                existing_corners -
                np.array(
                    [ARENA_X0, ARENA_Y0],
                    dtype=np.float32
                )
            )

            ex, ey = centre_of_quad(
                existing_local
            )

            distance_between = math.hypot(
                cx_local - ex,
                cy_local - ey
            )

            if distance_between < 40:
                duplicate = True
                break

        if not duplicate:
            selected.append(
                (
                    area,
                    (cx_local, cy_local),
                    pts
                )
            )

   
    for area, centre, local_corners in selected:

        corners = (
            local_corners.astype(np.float32)
            + np.array(
                [ARENA_X0, ARENA_Y0],
                dtype=np.float32
            )
        )

        cx, cy = centre_of_quad(
            corners
        )

        trapezoids.append(
            (
                cx,
                cy,
                corners
            )
        )

   
    if len(trapezoids) > 3:

        trapezoids = sorted(
            trapezoids,
            key=lambda t: cv2.contourArea(
                t[2].astype(np.float32).reshape(
                    (-1, 1, 2)
                )
            ),
            reverse=True
        )[:3]

   
    for cx, cy, corners in trapezoids:

        pts = np.round(
            corners
        ).astype(np.int32)

        cv2.polylines(
            binary,
            [pts],
            True,
            255,
            2,
            cv2.LINE_8
        )

    
    binary[
        binary > 0
    ] = 255

    return binary, trapezoids

##############################################################
def main():
    """
    Purpose:
    ---
    Open the camera stream, run find_trapezoids() on every frame, display the
    result, and periodically convert each trapezoid centre to world
    coordinates through the `pixel_to_world` service.

    Most of this function is written for you. Only the marked block is yours.

    Input Arguments:
    ---
    None

    Returns:
    ---
    None

    Example call:
    ---
    Called automatically by the Python interpreter.
    """

    rclpy.init()
    node = Node("camera_feed")
    client = node.create_client(PixelToWorld, "pixel_to_world")

    node.get_logger().info("waiting for the pixel_to_world service ...")
    if not client.wait_for_service(timeout_sec=10.0):
        node.get_logger().error(
            "pixel_to_world is not up. Start it first: ros2 run task_1a pixel_to_world_service")
        rclpy.shutdown()
        return

    cap = cv2.VideoCapture(STREAM_URL)
    if not cap.isOpened():
        node.get_logger().error(f"could not open {STREAM_URL}")
        node.get_logger().error(
            "start the simulation first: ros2 launch hb_description task1a.launch.py")
        rclpy.shutdown()
        return

    stamps = deque(maxlen=FPS_WINDOW)
    fps = 0.0
    last_report = 0.0

    while rclpy.ok():
        ok, frame = cap.read()
        if not ok:
            break

        # rolling frame rate over the last FPS_WINDOW frames
        stamps.append(time.monotonic())
        if len(stamps) >= 2:
            span = stamps[-1] - stamps[0]
            fps = (len(stamps) - 1) / span if span > 0 else 0.0

        binary, trapezoids = find_trapezoids(frame)
        
        cv2.imwrite("HE_2324_binary.png", binary)
        
        # overlay: red outline + yellow centre dot for every detection
        for cx, cy, corners in trapezoids:
            cv2.polylines(frame, [np.round(corners).astype(np.int32)], True, (0, 0, 255), 2)
            cv2.circle(frame, (int(round(cx)), int(round(cy))), 6, (0, 255, 255), -1)

        cv2.putText(frame, f"{fps:5.1f} FPS", (12, 34), cv2.FONT_HERSHEY_SIMPLEX,
                    1.0, (0, 255, 0), 2, cv2.LINE_AA)
        cv2.putText(frame, f"{len(trapezoids)} trapezoids", (12, 68),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 255, 0), 2, cv2.LINE_AA)
        cv2.imshow(WINDOW, frame)
        cv2.imshow(BINARY_WINDOW, binary)

        now = time.monotonic()
        if trapezoids and now - last_report >= REPORT_PERIOD_SEC:
            last_report = now
            print(f"\n{len(trapezoids)} trapezoid(s):")

            # sorted top-to-bottom, then left-to-right, so the printed order is
            # stable from frame to frame
            for cx, cy, _ in sorted(trapezoids, key=lambda t: (t[1], t[0])):

                ##############  ADD YOUR CODE HERE  ##############
                #
                # Convert this one pixel centre to world coordinates:
                #
                #   a. Build a PixelToWorld.Request() and fill in its
                #      `pixel_x` and `pixel_y` fields (they are float64 --
                #      cast, or the service call will reject them).
                #   b. Send it with the ASYNCHRONOUS client call, then wait for
                #      the answer with a spin-until-complete helper and a
                #      timeout of about 1 second. Never use the blocking call
                #      here -- it deadlocks when you are already spinning.
                #   c. Read the result. Three cases to print, all of them:
                #        - result is None                 -> the call timed out
                #        - result.success is False        -> print .message
                #        - otherwise                      -> print .world_x and
                #                                            .world_y, in metres
                #
                # Suggested output format:
                #   print(f"  pixel ({cx:7.2f}, {cy:7.2f})  ->  "
                #         f"world ({wx:6.3f}, {wy:6.3f}) m")
                #
                # The service definition is in
                #   src/shape_interface/srv/PixelToWorld.srv
                # Read it -- it tells you the exact field names.

                pass

                ##################################################

        if (cv2.waitKey(1) & 0xFF) == ord('q'):
            break

    cap.release()
    cv2.destroyAllWindows()
    node.destroy_node()
    rclpy.shutdown()


##############################################################
if __name__ == "__main__":
    main()