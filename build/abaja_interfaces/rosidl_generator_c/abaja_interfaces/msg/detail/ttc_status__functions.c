// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/TTCStatus.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/ttc_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_class`
// Member `risk_level`
#include "rosidl_runtime_c/string_functions.h"

bool
abaja_interfaces__msg__TTCStatus__init(abaja_interfaces__msg__TTCStatus * msg)
{
  if (!msg) {
    return false;
  }
  // obstacle_detected
  // object_class
  if (!rosidl_runtime_c__String__init(&msg->object_class)) {
    abaja_interfaces__msg__TTCStatus__fini(msg);
    return false;
  }
  // distance_m
  // ego_speed_mps
  // ttc_seconds
  // risk_level
  if (!rosidl_runtime_c__String__init(&msg->risk_level)) {
    abaja_interfaces__msg__TTCStatus__fini(msg);
    return false;
  }
  return true;
}

void
abaja_interfaces__msg__TTCStatus__fini(abaja_interfaces__msg__TTCStatus * msg)
{
  if (!msg) {
    return;
  }
  // obstacle_detected
  // object_class
  rosidl_runtime_c__String__fini(&msg->object_class);
  // distance_m
  // ego_speed_mps
  // ttc_seconds
  // risk_level
  rosidl_runtime_c__String__fini(&msg->risk_level);
}

bool
abaja_interfaces__msg__TTCStatus__are_equal(const abaja_interfaces__msg__TTCStatus * lhs, const abaja_interfaces__msg__TTCStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obstacle_detected
  if (lhs->obstacle_detected != rhs->obstacle_detected) {
    return false;
  }
  // object_class
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_class), &(rhs->object_class)))
  {
    return false;
  }
  // distance_m
  if (lhs->distance_m != rhs->distance_m) {
    return false;
  }
  // ego_speed_mps
  if (lhs->ego_speed_mps != rhs->ego_speed_mps) {
    return false;
  }
  // ttc_seconds
  if (lhs->ttc_seconds != rhs->ttc_seconds) {
    return false;
  }
  // risk_level
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->risk_level), &(rhs->risk_level)))
  {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__TTCStatus__copy(
  const abaja_interfaces__msg__TTCStatus * input,
  abaja_interfaces__msg__TTCStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // obstacle_detected
  output->obstacle_detected = input->obstacle_detected;
  // object_class
  if (!rosidl_runtime_c__String__copy(
      &(input->object_class), &(output->object_class)))
  {
    return false;
  }
  // distance_m
  output->distance_m = input->distance_m;
  // ego_speed_mps
  output->ego_speed_mps = input->ego_speed_mps;
  // ttc_seconds
  output->ttc_seconds = input->ttc_seconds;
  // risk_level
  if (!rosidl_runtime_c__String__copy(
      &(input->risk_level), &(output->risk_level)))
  {
    return false;
  }
  return true;
}

abaja_interfaces__msg__TTCStatus *
abaja_interfaces__msg__TTCStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__TTCStatus * msg = (abaja_interfaces__msg__TTCStatus *)allocator.allocate(sizeof(abaja_interfaces__msg__TTCStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__TTCStatus));
  bool success = abaja_interfaces__msg__TTCStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__TTCStatus__destroy(abaja_interfaces__msg__TTCStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__TTCStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__TTCStatus__Sequence__init(abaja_interfaces__msg__TTCStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__TTCStatus * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__TTCStatus *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__TTCStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__TTCStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__TTCStatus__fini(&data[i - 1]);
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
abaja_interfaces__msg__TTCStatus__Sequence__fini(abaja_interfaces__msg__TTCStatus__Sequence * array)
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
      abaja_interfaces__msg__TTCStatus__fini(&array->data[i]);
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

abaja_interfaces__msg__TTCStatus__Sequence *
abaja_interfaces__msg__TTCStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__TTCStatus__Sequence * array = (abaja_interfaces__msg__TTCStatus__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__TTCStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__TTCStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__TTCStatus__Sequence__destroy(abaja_interfaces__msg__TTCStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__TTCStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__TTCStatus__Sequence__are_equal(const abaja_interfaces__msg__TTCStatus__Sequence * lhs, const abaja_interfaces__msg__TTCStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__TTCStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__TTCStatus__Sequence__copy(
  const abaja_interfaces__msg__TTCStatus__Sequence * input,
  abaja_interfaces__msg__TTCStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__TTCStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__TTCStatus * data =
      (abaja_interfaces__msg__TTCStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__TTCStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__TTCStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__TTCStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
