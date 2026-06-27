// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/ObjectDistance.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/object_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
abaja_interfaces__msg__ObjectDistance__init(abaja_interfaces__msg__ObjectDistance * msg)
{
  if (!msg) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    abaja_interfaces__msg__ObjectDistance__fini(msg);
    return false;
  }
  // confidence
  // distance_m
  // x_min
  // y_min
  // x_max
  // y_max
  return true;
}

void
abaja_interfaces__msg__ObjectDistance__fini(abaja_interfaces__msg__ObjectDistance * msg)
{
  if (!msg) {
    return;
  }
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // confidence
  // distance_m
  // x_min
  // y_min
  // x_max
  // y_max
}

bool
abaja_interfaces__msg__ObjectDistance__are_equal(const abaja_interfaces__msg__ObjectDistance * lhs, const abaja_interfaces__msg__ObjectDistance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // distance_m
  if (lhs->distance_m != rhs->distance_m) {
    return false;
  }
  // x_min
  if (lhs->x_min != rhs->x_min) {
    return false;
  }
  // y_min
  if (lhs->y_min != rhs->y_min) {
    return false;
  }
  // x_max
  if (lhs->x_max != rhs->x_max) {
    return false;
  }
  // y_max
  if (lhs->y_max != rhs->y_max) {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__ObjectDistance__copy(
  const abaja_interfaces__msg__ObjectDistance * input,
  abaja_interfaces__msg__ObjectDistance * output)
{
  if (!input || !output) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // distance_m
  output->distance_m = input->distance_m;
  // x_min
  output->x_min = input->x_min;
  // y_min
  output->y_min = input->y_min;
  // x_max
  output->x_max = input->x_max;
  // y_max
  output->y_max = input->y_max;
  return true;
}

abaja_interfaces__msg__ObjectDistance *
abaja_interfaces__msg__ObjectDistance__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ObjectDistance * msg = (abaja_interfaces__msg__ObjectDistance *)allocator.allocate(sizeof(abaja_interfaces__msg__ObjectDistance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__ObjectDistance));
  bool success = abaja_interfaces__msg__ObjectDistance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__ObjectDistance__destroy(abaja_interfaces__msg__ObjectDistance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__ObjectDistance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__ObjectDistance__Sequence__init(abaja_interfaces__msg__ObjectDistance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ObjectDistance * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__ObjectDistance *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__ObjectDistance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__ObjectDistance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__ObjectDistance__fini(&data[i - 1]);
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
abaja_interfaces__msg__ObjectDistance__Sequence__fini(abaja_interfaces__msg__ObjectDistance__Sequence * array)
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
      abaja_interfaces__msg__ObjectDistance__fini(&array->data[i]);
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

abaja_interfaces__msg__ObjectDistance__Sequence *
abaja_interfaces__msg__ObjectDistance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ObjectDistance__Sequence * array = (abaja_interfaces__msg__ObjectDistance__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__ObjectDistance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__ObjectDistance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__ObjectDistance__Sequence__destroy(abaja_interfaces__msg__ObjectDistance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__ObjectDistance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__ObjectDistance__Sequence__are_equal(const abaja_interfaces__msg__ObjectDistance__Sequence * lhs, const abaja_interfaces__msg__ObjectDistance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__ObjectDistance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__ObjectDistance__Sequence__copy(
  const abaja_interfaces__msg__ObjectDistance__Sequence * input,
  abaja_interfaces__msg__ObjectDistance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__ObjectDistance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__ObjectDistance * data =
      (abaja_interfaces__msg__ObjectDistance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__ObjectDistance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__ObjectDistance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__ObjectDistance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
