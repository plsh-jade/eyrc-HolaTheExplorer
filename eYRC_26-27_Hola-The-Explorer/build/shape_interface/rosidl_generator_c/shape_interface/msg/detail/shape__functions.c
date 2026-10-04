// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shape_interface:msg/Shape.idl
// generated code does not contain a copyright notice
#include "shape_interface/msg/detail/shape__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `shape_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
shape_interface__msg__Shape__init(shape_interface__msg__Shape * msg)
{
  if (!msg) {
    return false;
  }
  // shape_name
  if (!rosidl_runtime_c__String__init(&msg->shape_name)) {
    shape_interface__msg__Shape__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    shape_interface__msg__Shape__fini(msg);
    return false;
  }
  return true;
}

void
shape_interface__msg__Shape__fini(shape_interface__msg__Shape * msg)
{
  if (!msg) {
    return;
  }
  // shape_name
  rosidl_runtime_c__String__fini(&msg->shape_name);
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
}

bool
shape_interface__msg__Shape__are_equal(const shape_interface__msg__Shape * lhs, const shape_interface__msg__Shape * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // shape_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->shape_name), &(rhs->shape_name)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
shape_interface__msg__Shape__copy(
  const shape_interface__msg__Shape * input,
  shape_interface__msg__Shape * output)
{
  if (!input || !output) {
    return false;
  }
  // shape_name
  if (!rosidl_runtime_c__String__copy(
      &(input->shape_name), &(output->shape_name)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

shape_interface__msg__Shape *
shape_interface__msg__Shape__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shape_interface__msg__Shape * msg = (shape_interface__msg__Shape *)allocator.allocate(sizeof(shape_interface__msg__Shape), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shape_interface__msg__Shape));
  bool success = shape_interface__msg__Shape__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shape_interface__msg__Shape__destroy(shape_interface__msg__Shape * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shape_interface__msg__Shape__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shape_interface__msg__Shape__Sequence__init(shape_interface__msg__Shape__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shape_interface__msg__Shape * data = NULL;

  if (size) {
    data = (shape_interface__msg__Shape *)allocator.zero_allocate(size, sizeof(shape_interface__msg__Shape), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shape_interface__msg__Shape__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shape_interface__msg__Shape__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
shape_interface__msg__Shape__Sequence__fini(shape_interface__msg__Shape__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      shape_interface__msg__Shape__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

shape_interface__msg__Shape__Sequence *
shape_interface__msg__Shape__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shape_interface__msg__Shape__Sequence * array = (shape_interface__msg__Shape__Sequence *)allocator.allocate(sizeof(shape_interface__msg__Shape__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shape_interface__msg__Shape__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shape_interface__msg__Shape__Sequence__destroy(shape_interface__msg__Shape__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shape_interface__msg__Shape__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shape_interface__msg__Shape__Sequence__are_equal(const shape_interface__msg__Shape__Sequence * lhs, const shape_interface__msg__Shape__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shape_interface__msg__Shape__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shape_interface__msg__Shape__Sequence__copy(
  const shape_interface__msg__Shape__Sequence * input,
  shape_interface__msg__Shape__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shape_interface__msg__Shape);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shape_interface__msg__Shape * data =
      (shape_interface__msg__Shape *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shape_interface__msg__Shape__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shape_interface__msg__Shape__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shape_interface__msg__Shape__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
