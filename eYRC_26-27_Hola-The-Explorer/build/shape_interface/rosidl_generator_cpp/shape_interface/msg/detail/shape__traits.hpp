// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_interface:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__MSG__DETAIL__SHAPE__TRAITS_HPP_
#define SHAPE_INTERFACE__MSG__DETAIL__SHAPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shape_interface/msg/detail/shape__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shape_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Shape & msg,
  std::ostream & out)
{
  out << "{";
  // member: shape_name
  {
    out << "shape_name: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_name, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Shape & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: shape_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape_name: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_name, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Shape & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace shape_interface

namespace rosidl_generator_traits
{

[[deprecated("use shape_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const shape_interface::msg::Shape & msg,
  std::ostream & out, size_t indentation = 0)
{
  shape_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shape_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const shape_interface::msg::Shape & msg)
{
  return shape_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<shape_interface::msg::Shape>()
{
  return "shape_interface::msg::Shape";
}

template<>
inline const char * name<shape_interface::msg::Shape>()
{
  return "shape_interface/msg/Shape";
}

template<>
struct has_fixed_size<shape_interface::msg::Shape>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shape_interface::msg::Shape>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<shape_interface::msg::Shape>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_INTERFACE__MSG__DETAIL__SHAPE__TRAITS_HPP_
