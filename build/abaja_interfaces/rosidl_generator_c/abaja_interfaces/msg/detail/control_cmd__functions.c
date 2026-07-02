// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/ControlCmd.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/control_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

bool
abaja_interfaces__msg__ControlCmd__init(abaja_interfaces__msg__ControlCmd * msg)
{
  if (!msg) {
    return false;
  }
  // target_speed_mps
  // steering_angle_deg
  // throttle_percent
  // brake_percent
  // emergency_stop
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    abaja_interfaces__msg__ControlCmd__fini(msg);
    return false;
  }
  return true;
}

void
abaja_interfaces__msg__ControlCmd__fini(abaja_interfaces__msg__ControlCmd * msg)
{
  if (!msg) {
    return;
  }
  // target_speed_mps
  // steering_angle_deg
  // throttle_percent
  // brake_percent
  // emergency_stop
  // source
  rosidl_runtime_c__String__fini(&msg->source);
}

bool
abaja_interfaces__msg__ControlCmd__are_equal(const abaja_interfaces__msg__ControlCmd * lhs, const abaja_interfaces__msg__ControlCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_speed_mps
  if (lhs->target_speed_mps != rhs->target_speed_mps) {
    return false;
  }
  // steering_angle_deg
  if (lhs->steering_angle_deg != rhs->steering_angle_deg) {
    return false;
  }
  // throttle_percent
  if (lhs->throttle_percent != rhs->throttle_percent) {
    return false;
  }
  // brake_percent
  if (lhs->brake_percent != rhs->brake_percent) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__ControlCmd__copy(
  const abaja_interfaces__msg__ControlCmd * input,
  abaja_interfaces__msg__ControlCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // target_speed_mps
  output->target_speed_mps = input->target_speed_mps;
  // steering_angle_deg
  output->steering_angle_deg = input->steering_angle_deg;
  // throttle_percent
  output->throttle_percent = input->throttle_percent;
  // brake_percent
  output->brake_percent = input->brake_percent;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  return true;
}

abaja_interfaces__msg__ControlCmd *
abaja_interfaces__msg__ControlCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ControlCmd * msg = (abaja_interfaces__msg__ControlCmd *)allocator.allocate(sizeof(abaja_interfaces__msg__ControlCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__ControlCmd));
  bool success = abaja_interfaces__msg__ControlCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__ControlCmd__destroy(abaja_interfaces__msg__ControlCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__ControlCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__ControlCmd__Sequence__init(abaja_interfaces__msg__ControlCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ControlCmd * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__ControlCmd *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__ControlCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__ControlCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__ControlCmd__fini(&data[i - 1]);
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
abaja_interfaces__msg__ControlCmd__Sequence__fini(abaja_interfaces__msg__ControlCmd__Sequence * array)
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
      abaja_interfaces__msg__ControlCmd__fini(&array->data[i]);
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

abaja_interfaces__msg__ControlCmd__Sequence *
abaja_interfaces__msg__ControlCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ControlCmd__Sequence * array = (abaja_interfaces__msg__ControlCmd__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__ControlCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__ControlCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__ControlCmd__Sequence__destroy(abaja_interfaces__msg__ControlCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__ControlCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__ControlCmd__Sequence__are_equal(const abaja_interfaces__msg__ControlCmd__Sequence * lhs, const abaja_interfaces__msg__ControlCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__ControlCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__ControlCmd__Sequence__copy(
  const abaja_interfaces__msg__ControlCmd__Sequence * input,
  abaja_interfaces__msg__ControlCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__ControlCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__ControlCmd * data =
      (abaja_interfaces__msg__ControlCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__ControlCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__ControlCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__ControlCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
