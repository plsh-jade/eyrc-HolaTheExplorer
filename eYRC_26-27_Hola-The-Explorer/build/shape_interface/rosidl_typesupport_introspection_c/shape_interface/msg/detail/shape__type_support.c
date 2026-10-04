// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from shape_interface:msg/Shape.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "shape_interface/msg/detail/shape__rosidl_typesupport_introspection_c.h"
#include "shape_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "shape_interface/msg/detail/shape__functions.h"
#include "shape_interface/msg/detail/shape__struct.h"


// Include directives for member types
// Member `shape_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  shape_interface__msg__Shape__init(message_memory);
}

void shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_fini_function(void * message_memory)
{
  shape_interface__msg__Shape__fini(message_memory);
}

size_t shape_interface__msg__Shape__rosidl_typesupport_introspection_c__size_function__Shape__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * shape_interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * shape_interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void shape_interface__msg__Shape__rosidl_typesupport_introspection_c__fetch_function__Shape__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    shape_interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__data(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void shape_interface__msg__Shape__rosidl_typesupport_introspection_c__assign_function__Shape__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    shape_interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__data(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool shape_interface__msg__Shape__rosidl_typesupport_introspection_c__resize_function__Shape__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_member_array[2] = {
  {
    "shape_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shape_interface__msg__Shape, shape_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(shape_interface__msg__Shape, data),  // bytes offset in struct
    NULL,  // default value
    shape_interface__msg__Shape__rosidl_typesupport_introspection_c__size_function__Shape__data,  // size() function pointer
    shape_interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__data,  // get_const(index) function pointer
    shape_interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__data,  // get(index) function pointer
    shape_interface__msg__Shape__rosidl_typesupport_introspection_c__fetch_function__Shape__data,  // fetch(index, &value) function pointer
    shape_interface__msg__Shape__rosidl_typesupport_introspection_c__assign_function__Shape__data,  // assign(index, value) function pointer
    shape_interface__msg__Shape__rosidl_typesupport_introspection_c__resize_function__Shape__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_members = {
  "shape_interface__msg",  // message namespace
  "Shape",  // message name
  2,  // number of fields
  sizeof(shape_interface__msg__Shape),
  shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_member_array,  // message members
  shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_init_function,  // function to initialize message memory (memory has to be allocated)
  shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle = {
  0,
  &shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shape_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_interface, msg, Shape)() {
  if (!shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle.typesupport_identifier) {
    shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &shape_interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
