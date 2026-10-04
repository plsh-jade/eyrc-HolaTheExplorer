// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_interface:srv/PixelToWorld.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__TRAITS_HPP_
#define SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shape_interface/srv/detail/pixel_to_world__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shape_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const PixelToWorld_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pixel_x
  {
    out << "pixel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_x, out);
    out << ", ";
  }

  // member: pixel_y
  {
    out << "pixel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PixelToWorld_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pixel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_x, out);
    out << "\n";
  }

  // member: pixel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pixel_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PixelToWorld_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace shape_interface

namespace rosidl_generator_traits
{

[[deprecated("use shape_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const shape_interface::srv::PixelToWorld_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  shape_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shape_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const shape_interface::srv::PixelToWorld_Request & msg)
{
  return shape_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<shape_interface::srv::PixelToWorld_Request>()
{
  return "shape_interface::srv::PixelToWorld_Request";
}

template<>
inline const char * name<shape_interface::srv::PixelToWorld_Request>()
{
  return "shape_interface/srv/PixelToWorld_Request";
}

template<>
struct has_fixed_size<shape_interface::srv::PixelToWorld_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shape_interface::srv::PixelToWorld_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shape_interface::srv::PixelToWorld_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace shape_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const PixelToWorld_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: world_x
  {
    out << "world_x: ";
    rosidl_generator_traits::value_to_yaml(msg.world_x, out);
    out << ", ";
  }

  // member: world_y
  {
    out << "world_y: ";
    rosidl_generator_traits::value_to_yaml(msg.world_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PixelToWorld_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: world_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_x: ";
    rosidl_generator_traits::value_to_yaml(msg.world_x, out);
    out << "\n";
  }

  // member: world_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_y: ";
    rosidl_generator_traits::value_to_yaml(msg.world_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PixelToWorld_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace shape_interface

namespace rosidl_generator_traits
{

[[deprecated("use shape_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const shape_interface::srv::PixelToWorld_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  shape_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shape_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const shape_interface::srv::PixelToWorld_Response & msg)
{
  return shape_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<shape_interface::srv::PixelToWorld_Response>()
{
  return "shape_interface::srv::PixelToWorld_Response";
}

template<>
inline const char * name<shape_interface::srv::PixelToWorld_Response>()
{
  return "shape_interface/srv/PixelToWorld_Response";
}

template<>
struct has_fixed_size<shape_interface::srv::PixelToWorld_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shape_interface::srv::PixelToWorld_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<shape_interface::srv::PixelToWorld_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<shape_interface::srv::PixelToWorld>()
{
  return "shape_interface::srv::PixelToWorld";
}

template<>
inline const char * name<shape_interface::srv::PixelToWorld>()
{
  return "shape_interface/srv/PixelToWorld";
}

template<>
struct has_fixed_size<shape_interface::srv::PixelToWorld>
  : std::integral_constant<
    bool,
    has_fixed_size<shape_interface::srv::PixelToWorld_Request>::value &&
    has_fixed_size<shape_interface::srv::PixelToWorld_Response>::value
  >
{
};

template<>
struct has_bounded_size<shape_interface::srv::PixelToWorld>
  : std::integral_constant<
    bool,
    has_bounded_size<shape_interface::srv::PixelToWorld_Request>::value &&
    has_bounded_size<shape_interface::srv::PixelToWorld_Response>::value
  >
{
};

template<>
struct is_service<shape_interface::srv::PixelToWorld>
  : std::true_type
{
};

template<>
struct is_service_request<shape_interface::srv::PixelToWorld_Request>
  : std::true_type
{
};

template<>
struct is_service_response<shape_interface::srv::PixelToWorld_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__TRAITS_HPP_
