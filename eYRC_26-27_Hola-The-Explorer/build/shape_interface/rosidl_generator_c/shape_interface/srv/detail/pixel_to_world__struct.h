// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shape_interface:srv/PixelToWorld.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__STRUCT_H_
#define SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PixelToWorld in the package shape_interface.
typedef struct shape_interface__srv__PixelToWorld_Request
{
  /// Overhead-camera pixel -> arena coordinates, in the frame /odom is published in
  /// (origin at the arena's top-left corner, x right, y down, metres).
  double pixel_x;
  double pixel_y;
} shape_interface__srv__PixelToWorld_Request;

// Struct for a sequence of shape_interface__srv__PixelToWorld_Request.
typedef struct shape_interface__srv__PixelToWorld_Request__Sequence
{
  shape_interface__srv__PixelToWorld_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_interface__srv__PixelToWorld_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PixelToWorld in the package shape_interface.
typedef struct shape_interface__srv__PixelToWorld_Response
{
  bool success;
  rosidl_runtime_c__String message;
  double world_x;
  double world_y;
} shape_interface__srv__PixelToWorld_Response;

// Struct for a sequence of shape_interface__srv__PixelToWorld_Response.
typedef struct shape_interface__srv__PixelToWorld_Response__Sequence
{
  shape_interface__srv__PixelToWorld_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_interface__srv__PixelToWorld_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_INTERFACE__SRV__DETAIL__PIXEL_TO_WORLD__STRUCT_H_
