// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shape_interface:srv/GetShape.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__STRUCT_H_
#define SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetShape in the package shape_interface.
typedef struct shape_interface__srv__GetShape_Request
{
  uint8_t structure_needs_at_least_one_member;
} shape_interface__srv__GetShape_Request;

// Struct for a sequence of shape_interface__srv__GetShape_Request.
typedef struct shape_interface__srv__GetShape_Request__Sequence
{
  shape_interface__srv__GetShape_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_interface__srv__GetShape_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'shape_name'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetShape in the package shape_interface.
typedef struct shape_interface__srv__GetShape_Response
{
  bool success;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String shape_name;
  rosidl_runtime_c__double__Sequence data;
} shape_interface__srv__GetShape_Response;

// Struct for a sequence of shape_interface__srv__GetShape_Response.
typedef struct shape_interface__srv__GetShape_Response__Sequence
{
  shape_interface__srv__GetShape_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_interface__srv__GetShape_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_INTERFACE__SRV__DETAIL__GET_SHAPE__STRUCT_H_
