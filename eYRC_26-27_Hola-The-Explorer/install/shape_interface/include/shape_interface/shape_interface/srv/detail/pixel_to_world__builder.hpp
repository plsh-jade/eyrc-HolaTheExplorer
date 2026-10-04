// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shape_interface:srv/PixelToWorld.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__BUILDER_HPP_
#define SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shape_interface/srv/detail/pixel_to_world__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shape_interface
{

namespace srv
{

namespace builder
{

class Init_PixelToWorld_Request_pixel_y
{
public:
  explicit Init_PixelToWorld_Request_pixel_y(::shape_interface::srv::PixelToWorld_Request & msg)
  : msg_(msg)
  {}
  ::shape_interface::srv::PixelToWorld_Request pixel_y(::shape_interface::srv::PixelToWorld_Request::_pixel_y_type arg)
  {
    msg_.pixel_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shape_interface::srv::PixelToWorld_Request msg_;
};

class Init_PixelToWorld_Request_pixel_x
{
public:
  Init_PixelToWorld_Request_pixel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PixelToWorld_Request_pixel_y pixel_x(::shape_interface::srv::PixelToWorld_Request::_pixel_x_type arg)
  {
    msg_.pixel_x = std::move(arg);
    return Init_PixelToWorld_Request_pixel_y(msg_);
  }

private:
  ::shape_interface::srv::PixelToWorld_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shape_interface::srv::PixelToWorld_Request>()
{
  return shape_interface::srv::builder::Init_PixelToWorld_Request_pixel_x();
}

}  // namespace shape_interface


namespace shape_interface
{

namespace srv
{

namespace builder
{

class Init_PixelToWorld_Response_world_y
{
public:
  explicit Init_PixelToWorld_Response_world_y(::shape_interface::srv::PixelToWorld_Response & msg)
  : msg_(msg)
  {}
  ::shape_interface::srv::PixelToWorld_Response world_y(::shape_interface::srv::PixelToWorld_Response::_world_y_type arg)
  {
    msg_.world_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shape_interface::srv::PixelToWorld_Response msg_;
};

class Init_PixelToWorld_Response_world_x
{
public:
  explicit Init_PixelToWorld_Response_world_x(::shape_interface::srv::PixelToWorld_Response & msg)
  : msg_(msg)
  {}
  Init_PixelToWorld_Response_world_y world_x(::shape_interface::srv::PixelToWorld_Response::_world_x_type arg)
  {
    msg_.world_x = std::move(arg);
    return Init_PixelToWorld_Response_world_y(msg_);
  }

private:
  ::shape_interface::srv::PixelToWorld_Response msg_;
};

class Init_PixelToWorld_Response_message
{
public:
  explicit Init_PixelToWorld_Response_message(::shape_interface::srv::PixelToWorld_Response & msg)
  : msg_(msg)
  {}
  Init_PixelToWorld_Response_world_x message(::shape_interface::srv::PixelToWorld_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_PixelToWorld_Response_world_x(msg_);
  }

private:
  ::shape_interface::srv::PixelToWorld_Response msg_;
};

class Init_PixelToWorld_Response_success
{
public:
  Init_PixelToWorld_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PixelToWorld_Response_message success(::shape_interface::srv::PixelToWorld_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PixelToWorld_Response_message(msg_);
  }

private:
  ::shape_interface::srv::PixelToWorld_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shape_interface::srv::PixelToWorld_Response>()
{
  return shape_interface::srv::builder::Init_PixelToWorld_Response_success();
}

}  // namespace shape_interface

#endif  // SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__BUILDER_HPP_
