// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/dbw_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abaja_interfaces__msg__DbwCmd__init(abaja_interfaces__msg__DbwCmd * msg)
{
  if (!msg) {
    return false;
  }
  // target_speed_mps
  // steering_angle_deg
  // throttle_percent
  // brake_percent
  // enable_throttle
  // enable_brake
  // enable_steering
  // emergency_stop
  return true;
}

void
abaja_interfaces__msg__DbwCmd__fini(abaja_interfaces__msg__DbwCmd * msg)
{
  if (!msg) {
    return;
  }
  // target_speed_mps
  // steering_angle_deg
  // throttle_percent
  // brake_percent
  // enable_throttle
  // enable_brake
  // enable_steering
  // emergency_stop
}

bool
abaja_interfaces__msg__DbwCmd__are_equal(const abaja_interfaces__msg__DbwCmd * lhs, const abaja_interfaces__msg__DbwCmd * rhs)
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
  // enable_throttle
  if (lhs->enable_throttle != rhs->enable_throttle) {
    return false;
  }
  // enable_brake
  if (lhs->enable_brake != rhs->enable_brake) {
    return false;
  }
  // enable_steering
  if (lhs->enable_steering != rhs->enable_steering) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__DbwCmd__copy(
  const abaja_interfaces__msg__DbwCmd * input,
  abaja_interfaces__msg__DbwCmd * output)
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
  // enable_throttle
  output->enable_throttle = input->enable_throttle;
  // enable_brake
  output->enable_brake = input->enable_brake;
  // enable_steering
  output->enable_steering = input->enable_steering;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  return true;
}

abaja_interfaces__msg__DbwCmd *
abaja_interfaces__msg__DbwCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__DbwCmd * msg = (abaja_interfaces__msg__DbwCmd *)allocator.allocate(sizeof(abaja_interfaces__msg__DbwCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__DbwCmd));
  bool success = abaja_interfaces__msg__DbwCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__DbwCmd__destroy(abaja_interfaces__msg__DbwCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__DbwCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__DbwCmd__Sequence__init(abaja_interfaces__msg__DbwCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__DbwCmd * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__DbwCmd *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__DbwCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__DbwCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__DbwCmd__fini(&data[i - 1]);
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
abaja_interfaces__msg__DbwCmd__Sequence__fini(abaja_interfaces__msg__DbwCmd__Sequence * array)
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
      abaja_interfaces__msg__DbwCmd__fini(&array->data[i]);
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

abaja_interfaces__msg__DbwCmd__Sequence *
abaja_interfaces__msg__DbwCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__DbwCmd__Sequence * array = (abaja_interfaces__msg__DbwCmd__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__DbwCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__DbwCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__DbwCmd__Sequence__destroy(abaja_interfaces__msg__DbwCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__DbwCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__DbwCmd__Sequence__are_equal(const abaja_interfaces__msg__DbwCmd__Sequence * lhs, const abaja_interfaces__msg__DbwCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__DbwCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__DbwCmd__Sequence__copy(
  const abaja_interfaces__msg__DbwCmd__Sequence * input,
  abaja_interfaces__msg__DbwCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__DbwCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__DbwCmd * data =
      (abaja_interfaces__msg__DbwCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__DbwCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__DbwCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__DbwCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
