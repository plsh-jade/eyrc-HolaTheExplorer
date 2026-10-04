// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shape_interface:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__MSG__DETAIL__SHAPE__STRUCT_HPP_
#define SHAPE_INTERFACE__MSG__DETAIL__SHAPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__shape_interface__msg__Shape __attribute__((deprecated))
#else
# define DEPRECATED__shape_interface__msg__Shape __declspec(deprecated)
#endif

namespace shape_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Shape_
{
  using Type = Shape_<ContainerAllocator>;

  explicit Shape_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shape_name = "";
    }
  }

  explicit Shape_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shape_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shape_name = "";
    }
  }

  // field types and members
  using _shape_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _shape_name_type shape_name;
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__shape_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->shape_name = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    shape_interface::msg::Shape_<ContainerAllocator> *;
  using ConstRawPtr =
    const shape_interface::msg::Shape_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shape_interface::msg::Shape_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shape_interface::msg::Shape_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shape_interface::msg::Shape_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shape_interface::msg::Shape_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shape_interface::msg::Shape_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shape_interface::msg::Shape_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shape_interface::msg::Shape_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shape_interface::msg::Shape_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shape_interface__msg__Shape
    std::shared_ptr<shape_interface::msg::Shape_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shape_interface__msg__Shape
    std::shared_ptr<shape_interface::msg::Shape_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shape_ & other) const
  {
    if (this->shape_name != other.shape_name) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shape_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shape_

// alias to use template instance with default allocator
using Shape =
  shape_interface::msg::Shape_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace shape_interface

#endif  // SHAPE_INTERFACE__MSG__DETAIL__SHAPE__STRUCT_HPP_
