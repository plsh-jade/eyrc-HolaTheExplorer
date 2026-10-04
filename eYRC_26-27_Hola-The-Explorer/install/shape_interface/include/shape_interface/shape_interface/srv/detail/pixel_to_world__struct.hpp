// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shape_interface:srv/PixelToWorld.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__STRUCT_HPP_
#define SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__shape_interface__srv__PixelToWorld_Request __attribute__((deprecated))
#else
# define DEPRECATED__shape_interface__srv__PixelToWorld_Request __declspec(deprecated)
#endif

namespace shape_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PixelToWorld_Request_
{
  using Type = PixelToWorld_Request_<ContainerAllocator>;

  explicit PixelToWorld_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pixel_x = 0.0;
      this->pixel_y = 0.0;
    }
  }

  explicit PixelToWorld_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pixel_x = 0.0;
      this->pixel_y = 0.0;
    }
  }

  // field types and members
  using _pixel_x_type =
    double;
  _pixel_x_type pixel_x;
  using _pixel_y_type =
    double;
  _pixel_y_type pixel_y;

  // setters for named parameter idiom
  Type & set__pixel_x(
    const double & _arg)
  {
    this->pixel_x = _arg;
    return *this;
  }
  Type & set__pixel_y(
    const double & _arg)
  {
    this->pixel_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shape_interface::srv::PixelToWorld_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const shape_interface::srv::PixelToWorld_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shape_interface::srv::PixelToWorld_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shape_interface::srv::PixelToWorld_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shape_interface::srv::PixelToWorld_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shape_interface::srv::PixelToWorld_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shape_interface::srv::PixelToWorld_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shape_interface::srv::PixelToWorld_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shape_interface::srv::PixelToWorld_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shape_interface::srv::PixelToWorld_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shape_interface__srv__PixelToWorld_Request
    std::shared_ptr<shape_interface::srv::PixelToWorld_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shape_interface__srv__PixelToWorld_Request
    std::shared_ptr<shape_interface::srv::PixelToWorld_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PixelToWorld_Request_ & other) const
  {
    if (this->pixel_x != other.pixel_x) {
      return false;
    }
    if (this->pixel_y != other.pixel_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const PixelToWorld_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PixelToWorld_Request_

// alias to use template instance with default allocator
using PixelToWorld_Request =
  shape_interface::srv::PixelToWorld_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace shape_interface


#ifndef _WIN32
# define DEPRECATED__shape_interface__srv__PixelToWorld_Response __attribute__((deprecated))
#else
# define DEPRECATED__shape_interface__srv__PixelToWorld_Response __declspec(deprecated)
#endif

namespace shape_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PixelToWorld_Response_
{
  using Type = PixelToWorld_Response_<ContainerAllocator>;

  explicit PixelToWorld_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->world_x = 0.0;
      this->world_y = 0.0;
    }
  }

  explicit PixelToWorld_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->world_x = 0.0;
      this->world_y = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _world_x_type =
    double;
  _world_x_type world_x;
  using _world_y_type =
    double;
  _world_y_type world_y;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__world_x(
    const double & _arg)
  {
    this->world_x = _arg;
    return *this;
  }
  Type & set__world_y(
    const double & _arg)
  {
    this->world_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shape_interface::srv::PixelToWorld_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const shape_interface::srv::PixelToWorld_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shape_interface::srv::PixelToWorld_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shape_interface::srv::PixelToWorld_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shape_interface::srv::PixelToWorld_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shape_interface::srv::PixelToWorld_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shape_interface::srv::PixelToWorld_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shape_interface::srv::PixelToWorld_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shape_interface::srv::PixelToWorld_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shape_interface::srv::PixelToWorld_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shape_interface__srv__PixelToWorld_Response
    std::shared_ptr<shape_interface::srv::PixelToWorld_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shape_interface__srv__PixelToWorld_Response
    std::shared_ptr<shape_interface::srv::PixelToWorld_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PixelToWorld_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->world_x != other.world_x) {
      return false;
    }
    if (this->world_y != other.world_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const PixelToWorld_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PixelToWorld_Response_

// alias to use template instance with default allocator
using PixelToWorld_Response =
  shape_interface::srv::PixelToWorld_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace shape_interface

namespace shape_interface
{

namespace srv
{

struct PixelToWorld
{
  using Request = shape_interface::srv::PixelToWorld_Request;
  using Response = shape_interface::srv::PixelToWorld_Response;
};

}  // namespace srv

}  // namespace shape_interface

#endif  // SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__STRUCT_HPP_
