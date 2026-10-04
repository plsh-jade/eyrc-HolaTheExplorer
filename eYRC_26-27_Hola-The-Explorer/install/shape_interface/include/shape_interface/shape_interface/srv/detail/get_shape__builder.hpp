// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shape_interface:srv/GetShape.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__BUILDER_HPP_
#define SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shape_interface/srv/detail/get_shape__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shape_interface
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shape_interface::srv::GetShape_Request>()
{
  return ::shape_interface::srv::GetShape_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace shape_interface


namespace shape_interface
{

namespace srv
{

namespace builder
{

class Init_GetShape_Response_data
{
public:
  explicit Init_GetShape_Response_data(::shape_interface::srv::GetShape_Response & msg)
  : msg_(msg)
  {}
  ::shape_interface::srv::GetShape_Response data(::shape_interface::srv::GetShape_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shape_interface::srv::GetShape_Response msg_;
};

class Init_GetShape_Response_shape_name
{
public:
  explicit Init_GetShape_Response_shape_name(::shape_interface::srv::GetShape_Response & msg)
  : msg_(msg)
  {}
  Init_GetShape_Response_data shape_name(::shape_interface::srv::GetShape_Response::_shape_name_type arg)
  {
    msg_.shape_name = std::move(arg);
    return Init_GetShape_Response_data(msg_);
  }

private:
  ::shape_interface::srv::GetShape_Response msg_;
};

class Init_GetShape_Response_message
{
public:
  explicit Init_GetShape_Response_message(::shape_interface::srv::GetShape_Response & msg)
  : msg_(msg)
  {}
  Init_GetShape_Response_shape_name message(::shape_interface::srv::GetShape_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GetShape_Response_shape_name(msg_);
  }

private:
  ::shape_interface::srv::GetShape_Response msg_;
};

class Init_GetShape_Response_success
{
public:
  Init_GetShape_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetShape_Response_message success(::shape_interface::srv::GetShape_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetShape_Response_message(msg_);
  }

private:
  ::shape_interface::srv::GetShape_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::shape_interface::srv::GetShape_Response>()
{
  return shape_interface::srv::builder::Init_GetShape_Response_success();
}

}  // namespace shape_interface

#endif  // SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__BUILDER_HPP_
