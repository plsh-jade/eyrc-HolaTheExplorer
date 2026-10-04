// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from shape_interface:srv/GetShape.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__STRUCT_HPP_
#define SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__shape_interface__srv__GetShape_Request __attribute__((deprecated))
#else
# define DEPRECATED__shape_interface__srv__GetShape_Request __declspec(deprecated)
#endif

namespace shape_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetShape_Request_
{
  using Type = GetShape_Request_<ContainerAllocator>;

  explicit GetShape_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetShape_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    shape_interface::srv::GetShape_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const shape_interface::srv::GetShape_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shape_interface::srv::GetShape_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shape_interface::srv::GetShape_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shape_interface::srv::GetShape_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shape_interface::srv::GetShape_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shape_interface::srv::GetShape_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shape_interface::srv::GetShape_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shape_interface::srv::GetShape_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shape_interface::srv::GetShape_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shape_interface__srv__GetShape_Request
    std::shared_ptr<shape_interface::srv::GetShape_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shape_interface__srv__GetShape_Request
    std::shared_ptr<shape_interface::srv::GetShape_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetShape_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetShape_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetShape_Request_

// alias to use template instance with default allocator
using GetShape_Request =
  shape_interface::srv::GetShape_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace shape_interface


#ifndef _WIN32
# define DEPRECATED__shape_interface__srv__GetShape_Response __attribute__((deprecated))
#else
# define DEPRECATED__shape_interface__srv__GetShape_Response __declspec(deprecated)
#endif

namespace shape_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetShape_Response_
{
  using Type = GetShape_Response_<ContainerAllocator>;

  explicit GetShape_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->shape_name = "";
    }
  }

  explicit GetShape_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    shape_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->shape_name = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _shape_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _shape_name_type shape_name;
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

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
    shape_interface::srv::GetShape_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const shape_interface::srv::GetShape_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<shape_interface::srv::GetShape_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<shape_interface::srv::GetShape_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      shape_interface::srv::GetShape_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<shape_interface::srv::GetShape_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      shape_interface::srv::GetShape_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<shape_interface::srv::GetShape_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<shape_interface::srv::GetShape_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<shape_interface::srv::GetShape_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__shape_interface__srv__GetShape_Response
    std::shared_ptr<shape_interface::srv::GetShape_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__shape_interface__srv__GetShape_Response
    std::shared_ptr<shape_interface::srv::GetShape_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetShape_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->shape_name != other.shape_name) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetShape_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetShape_Response_

// alias to use template instance with default allocator
using GetShape_Response =
  shape_interface::srv::GetShape_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace shape_interface

namespace shape_interface
{

namespace srv
{

struct GetShape
{
  using Request = shape_interface::srv::GetShape_Request;
  using Response = shape_interface::srv::GetShape_Response;
};

}  // namespace srv

}  // namespace shape_interface

#endif  // SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__STRUCT_HPP_
