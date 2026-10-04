// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from shape_interface:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__MSG__DETAIL__SHAPE__BUILDER_HPP_
#define SHAPE_INTERFACE__MSG__DETAIL__SHAPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "shape_interface/msg/detail/shape__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace shape_interface
{

namespace msg
{

namespace builder
{

class Init_Shape_data
{
public:
  explicit Init_Shape_data(::shape_interface::msg::Shape & msg)
  : msg_(msg)
  {}
  ::shape_interface::msg::Shape data(::shape_interface::msg::Shape::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::shape_interface::msg::Shape msg_;
};

class Init_Shape_shape_name
{
public:
  Init_Shape_shape_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shape_data shape_name(::shape_interface::msg::Shape::_shape_name_type arg)
  {
    msg_.shape_name = std::move(arg);
    return Init_Shape_data(msg_);
  }

private:
  ::shape_interface::msg::Shape msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::shape_interface::msg::Shape>()
{
  return shape_interface::msg::builder::Init_Shape_shape_name();
}

}  // namespace shape_interface

#endif  // SHAPE_INTERFACE__MSG__DETAIL__SHAPE__BUILDER_HPP_
