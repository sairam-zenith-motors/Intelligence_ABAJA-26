// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/SteeringFeedback.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/steering_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abaja_interfaces__msg__SteeringFeedback__init(abaja_interfaces__msg__SteeringFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // target_angle_deg
  // actual_angle_deg
  // error_deg
  return true;
}

void
abaja_interfaces__msg__SteeringFeedback__fini(abaja_interfaces__msg__SteeringFeedback * msg)
{
  if (!msg) {
    return;
  }
  // target_angle_deg
  // actual_angle_deg
  // error_deg
}

bool
abaja_interfaces__msg__SteeringFeedback__are_equal(const abaja_interfaces__msg__SteeringFeedback * lhs, const abaja_interfaces__msg__SteeringFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_angle_deg
  if (lhs->target_angle_deg != rhs->target_angle_deg) {
    return false;
  }
  // actual_angle_deg
  if (lhs->actual_angle_deg != rhs->actual_angle_deg) {
    return false;
  }
  // error_deg
  if (lhs->error_deg != rhs->error_deg) {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__SteeringFeedback__copy(
  const abaja_interfaces__msg__SteeringFeedback * input,
  abaja_interfaces__msg__SteeringFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // target_angle_deg
  output->target_angle_deg = input->target_angle_deg;
  // actual_angle_deg
  output->actual_angle_deg = input->actual_angle_deg;
  // error_deg
  output->error_deg = input->error_deg;
  return true;
}

abaja_interfaces__msg__SteeringFeedback *
abaja_interfaces__msg__SteeringFeedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__SteeringFeedback * msg = (abaja_interfaces__msg__SteeringFeedback *)allocator.allocate(sizeof(abaja_interfaces__msg__SteeringFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__SteeringFeedback));
  bool success = abaja_interfaces__msg__SteeringFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__SteeringFeedback__destroy(abaja_interfaces__msg__SteeringFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__SteeringFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__SteeringFeedback__Sequence__init(abaja_interfaces__msg__SteeringFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__SteeringFeedback * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__SteeringFeedback *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__SteeringFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__SteeringFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__SteeringFeedback__fini(&data[i - 1]);
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
abaja_interfaces__msg__SteeringFeedback__Sequence__fini(abaja_interfaces__msg__SteeringFeedback__Sequence * array)
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
      abaja_interfaces__msg__SteeringFeedback__fini(&array->data[i]);
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

abaja_interfaces__msg__SteeringFeedback__Sequence *
abaja_interfaces__msg__SteeringFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__SteeringFeedback__Sequence * array = (abaja_interfaces__msg__SteeringFeedback__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__SteeringFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__SteeringFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__SteeringFeedback__Sequence__destroy(abaja_interfaces__msg__SteeringFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__SteeringFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__SteeringFeedback__Sequence__are_equal(const abaja_interfaces__msg__SteeringFeedback__Sequence * lhs, const abaja_interfaces__msg__SteeringFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__SteeringFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__SteeringFeedback__Sequence__copy(
  const abaja_interfaces__msg__SteeringFeedback__Sequence * input,
  abaja_interfaces__msg__SteeringFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__SteeringFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__SteeringFeedback * data =
      (abaja_interfaces__msg__SteeringFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__SteeringFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__SteeringFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__SteeringFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
