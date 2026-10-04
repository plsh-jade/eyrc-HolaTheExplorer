// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shape_interface:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_INTERFACE__MSG__DETAIL__SHAPE__STRUCT_H_
#define SHAPE_INTERFACE__MSG__DETAIL__SHAPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'shape_name'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Shape in the package shape_interface.
/**
  * Copyright (c) 2026 e-Yantra, IIT Bombay. All rights reserved.
  * These simulation files and source code are the intellectual property of e-Yantra,
  * IIT Bombay, provided solely for eYRC 2026-27 (Theme: Hola The Explorer).
  * Sharing or redistribution of this material, in whole or in part, is not permitted.
 */
typedef struct shape_interface__msg__Shape
{
  rosidl_runtime_c__String shape_name;
  rosidl_runtime_c__double__Sequence data;
} shape_interface__msg__Shape;

// Struct for a sequence of shape_interface__msg__Shape.
typedef struct shape_interface__msg__Shape__Sequence
{
  shape_interface__msg__Shape * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_interface__msg__Shape__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_INTERFACE__MSG__DETAIL__SHAPE__STRUCT_H_
