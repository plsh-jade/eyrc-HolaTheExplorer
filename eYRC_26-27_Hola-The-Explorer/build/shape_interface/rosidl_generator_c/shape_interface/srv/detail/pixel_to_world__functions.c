// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from shape_interface:srv/PixelToWorld.idl
// generated code does not contain a copyright notice
#include "shape_interface/srv/detail/pixel_to_world__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
shape_interface__srv__PixelToWorld_Request__init(shape_interface__srv__PixelToWorld_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pixel_x
  // pixel_y
  return true;
}

void
shape_interface__srv__PixelToWorld_Request__fini(shape_interface__srv__PixelToWorld_Request * msg)
{
  if (!msg) {
    return;
  }
  // pixel_x
  // pixel_y
}

bool
shape_interface__srv__PixelToWorld_Request__are_equal(const shape_interface__srv__PixelToWorld_Request * lhs, const shape_interface__srv__PixelToWorld_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pixel_x
  if (lhs->pixel_x != rhs->pixel_x) {
    return false;
  }
  // pixel_y
  if (lhs->pixel_y != rhs->pixel_y) {
    return false;
  }
  return true;
}

bool
shape_interface__srv__PixelToWorld_Request__copy(
  const shape_interface__srv__PixelToWorld_Request * input,
  shape_interface__srv__PixelToWorld_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pixel_x
  output->pixel_x = input->pixel_x;
  // pixel_y
  output->pixel_y = input->pixel_y;
  return true;
}

shape_interface__srv__PixelToWorld_Request *
shape_interface__srv__PixelToWorld_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shape_interface__srv__PixelToWorld_Request * msg = (shape_interface__srv__PixelToWorld_Request *)allocator.allocate(sizeof(shape_interface__srv__PixelToWorld_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shape_interface__srv__PixelToWorld_Request));
  bool success = shape_interface__srv__PixelToWorld_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shape_interface__srv__PixelToWorld_Request__destroy(shape_interface__srv__PixelToWorld_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shape_interface__srv__PixelToWorld_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shape_interface__srv__PixelToWorld_Request__Sequence__init(shape_interface__srv__PixelToWorld_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shape_interface__srv__PixelToWorld_Request * data = NULL;

  if (size) {
    data = (shape_interface__srv__PixelToWorld_Request *)allocator.zero_allocate(size, sizeof(shape_interface__srv__PixelToWorld_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shape_interface__srv__PixelToWorld_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shape_interface__srv__PixelToWorld_Request__fini(&data[i - 1]);
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
shape_interface__srv__PixelToWorld_Request__Sequence__fini(shape_interface__srv__PixelToWorld_Request__Sequence * array)
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
      shape_interface__srv__PixelToWorld_Request__fini(&array->data[i]);
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

shape_interface__srv__PixelToWorld_Request__Sequence *
shape_interface__srv__PixelToWorld_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shape_interface__srv__PixelToWorld_Request__Sequence * array = (shape_interface__srv__PixelToWorld_Request__Sequence *)allocator.allocate(sizeof(shape_interface__srv__PixelToWorld_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shape_interface__srv__PixelToWorld_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shape_interface__srv__PixelToWorld_Request__Sequence__destroy(shape_interface__srv__PixelToWorld_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shape_interface__srv__PixelToWorld_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shape_interface__srv__PixelToWorld_Request__Sequence__are_equal(const shape_interface__srv__PixelToWorld_Request__Sequence * lhs, const shape_interface__srv__PixelToWorld_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shape_interface__srv__PixelToWorld_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shape_interface__srv__PixelToWorld_Request__Sequence__copy(
  const shape_interface__srv__PixelToWorld_Request__Sequence * input,
  shape_interface__srv__PixelToWorld_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shape_interface__srv__PixelToWorld_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shape_interface__srv__PixelToWorld_Request * data =
      (shape_interface__srv__PixelToWorld_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shape_interface__srv__PixelToWorld_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shape_interface__srv__PixelToWorld_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shape_interface__srv__PixelToWorld_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
shape_interface__srv__PixelToWorld_Response__init(shape_interface__srv__PixelToWorld_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    shape_interface__srv__PixelToWorld_Response__fini(msg);
    return false;
  }
  // world_x
  // world_y
  return true;
}

void
shape_interface__srv__PixelToWorld_Response__fini(shape_interface__srv__PixelToWorld_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // world_x
  // world_y
}

bool
shape_interface__srv__PixelToWorld_Response__are_equal(const shape_interface__srv__PixelToWorld_Response * lhs, const shape_interface__srv__PixelToWorld_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // world_x
  if (lhs->world_x != rhs->world_x) {
    return false;
  }
  // world_y
  if (lhs->world_y != rhs->world_y) {
    return false;
  }
  return true;
}

bool
shape_interface__srv__PixelToWorld_Response__copy(
  const shape_interface__srv__PixelToWorld_Response * input,
  shape_interface__srv__PixelToWorld_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // world_x
  output->world_x = input->world_x;
  // world_y
  output->world_y = input->world_y;
  return true;
}

shape_interface__srv__PixelToWorld_Response *
shape_interface__srv__PixelToWorld_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shape_interface__srv__PixelToWorld_Response * msg = (shape_interface__srv__PixelToWorld_Response *)allocator.allocate(sizeof(shape_interface__srv__PixelToWorld_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(shape_interface__srv__PixelToWorld_Response));
  bool success = shape_interface__srv__PixelToWorld_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
shape_interface__srv__PixelToWorld_Response__destroy(shape_interface__srv__PixelToWorld_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    shape_interface__srv__PixelToWorld_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
shape_interface__srv__PixelToWorld_Response__Sequence__init(shape_interface__srv__PixelToWorld_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shape_interface__srv__PixelToWorld_Response * data = NULL;

  if (size) {
    data = (shape_interface__srv__PixelToWorld_Response *)allocator.zero_allocate(size, sizeof(shape_interface__srv__PixelToWorld_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = shape_interface__srv__PixelToWorld_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        shape_interface__srv__PixelToWorld_Response__fini(&data[i - 1]);
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
shape_interface__srv__PixelToWorld_Response__Sequence__fini(shape_interface__srv__PixelToWorld_Response__Sequence * array)
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
      shape_interface__srv__PixelToWorld_Response__fini(&array->data[i]);
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

shape_interface__srv__PixelToWorld_Response__Sequence *
shape_interface__srv__PixelToWorld_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  shape_interface__srv__PixelToWorld_Response__Sequence * array = (shape_interface__srv__PixelToWorld_Response__Sequence *)allocator.allocate(sizeof(shape_interface__srv__PixelToWorld_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = shape_interface__srv__PixelToWorld_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
shape_interface__srv__PixelToWorld_Response__Sequence__destroy(shape_interface__srv__PixelToWorld_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    shape_interface__srv__PixelToWorld_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
shape_interface__srv__PixelToWorld_Response__Sequence__are_equal(const shape_interface__srv__PixelToWorld_Response__Sequence * lhs, const shape_interface__srv__PixelToWorld_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!shape_interface__srv__PixelToWorld_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
shape_interface__srv__PixelToWorld_Response__Sequence__copy(
  const shape_interface__srv__PixelToWorld_Response__Sequence * input,
  shape_interface__srv__PixelToWorld_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(shape_interface__srv__PixelToWorld_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    shape_interface__srv__PixelToWorld_Response * data =
      (shape_interface__srv__PixelToWorld_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!shape_interface__srv__PixelToWorld_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          shape_interface__srv__PixelToWorld_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!shape_interface__srv__PixelToWorld_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
