// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from shape_interface:srv/GetShape.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__TRAITS_HPP_
#define SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "shape_interface/srv/detail/get_shape__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace shape_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetShape_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetShape_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetShape_Request & msg, bool use_flow_style = false)
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
  const shape_interface::srv::GetShape_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  shape_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shape_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const shape_interface::srv::GetShape_Request & msg)
{
  return shape_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<shape_interface::srv::GetShape_Request>()
{
  return "shape_interface::srv::GetShape_Request";
}

template<>
inline const char * name<shape_interface::srv::GetShape_Request>()
{
  return "shape_interface/srv/GetShape_Request";
}

template<>
struct has_fixed_size<shape_interface::srv::GetShape_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<shape_interface::srv::GetShape_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<shape_interface::srv::GetShape_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace shape_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetShape_Response & msg,
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
  const GetShape_Response & msg,
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

inline std::string to_yaml(const GetShape_Response & msg, bool use_flow_style = false)
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
  const shape_interface::srv::GetShape_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  shape_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use shape_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const shape_interface::srv::GetShape_Response & msg)
{
  return shape_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<shape_interface::srv::GetShape_Response>()
{
  return "shape_interface::srv::GetShape_Response";
}

template<>
inline const char * name<shape_interface::srv::GetShape_Response>()
{
  return "shape_interface/srv/GetShape_Response";
}

template<>
struct has_fixed_size<shape_interface::srv::GetShape_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<shape_interface::srv::GetShape_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<shape_interface::srv::GetShape_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<shape_interface::srv::GetShape>()
{
  return "shape_interface::srv::GetShape";
}

template<>
inline const char * name<shape_interface::srv::GetShape>()
{
  return "shape_interface/srv/GetShape";
}

template<>
struct has_fixed_size<shape_interface::srv::GetShape>
  : std::integral_constant<
    bool,
    has_fixed_size<shape_interface::srv::GetShape_Request>::value &&
    has_fixed_size<shape_interface::srv::GetShape_Response>::value
  >
{
};

template<>
struct has_bounded_size<shape_interface::srv::GetShape>
  : std::integral_constant<
    bool,
    has_bounded_size<shape_interface::srv::GetShape_Request>::value &&
    has_bounded_size<shape_interface::srv::GetShape_Response>::value
  >
{
};

template<>
struct is_service<shape_interface::srv::GetShape>
  : std::true_type
{
};

template<>
struct is_service_request<shape_interface::srv::GetShape_Request>
  : std::true_type
{
};

template<>
struct is_service_response<shape_interface::srv::GetShape_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__TRAITS_HPP_
