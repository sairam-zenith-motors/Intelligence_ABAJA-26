// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/DbwStatus.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/dbw_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fault_reason`
#include "rosidl_runtime_c/string_functions.h"

bool
abaja_interfaces__msg__DbwStatus__init(abaja_interfaces__msg__DbwStatus * msg)
{
  if (!msg) {
    return false;
  }
  // dbw_enabled
  // throttle_enabled
  // brake_enabled
  // steering_enabled
  // fault_detected
  // fault_reason
  if (!rosidl_runtime_c__String__init(&msg->fault_reason)) {
    abaja_interfaces__msg__DbwStatus__fini(msg);
    return false;
  }
  return true;
}

void
abaja_interfaces__msg__DbwStatus__fini(abaja_interfaces__msg__DbwStatus * msg)
{
  if (!msg) {
    return;
  }
  // dbw_enabled
  // throttle_enabled
  // brake_enabled
  // steering_enabled
  // fault_detected
  // fault_reason
  rosidl_runtime_c__String__fini(&msg->fault_reason);
}

bool
abaja_interfaces__msg__DbwStatus__are_equal(const abaja_interfaces__msg__DbwStatus * lhs, const abaja_interfaces__msg__DbwStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dbw_enabled
  if (lhs->dbw_enabled != rhs->dbw_enabled) {
    return false;
  }
  // throttle_enabled
  if (lhs->throttle_enabled != rhs->throttle_enabled) {
    return false;
  }
  // brake_enabled
  if (lhs->brake_enabled != rhs->brake_enabled) {
    return false;
  }
  // steering_enabled
  if (lhs->steering_enabled != rhs->steering_enabled) {
    return false;
  }
  // fault_detected
  if (lhs->fault_detected != rhs->fault_detected) {
    return false;
  }
  // fault_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fault_reason), &(rhs->fault_reason)))
  {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__DbwStatus__copy(
  const abaja_interfaces__msg__DbwStatus * input,
  abaja_interfaces__msg__DbwStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // dbw_enabled
  output->dbw_enabled = input->dbw_enabled;
  // throttle_enabled
  output->throttle_enabled = input->throttle_enabled;
  // brake_enabled
  output->brake_enabled = input->brake_enabled;
  // steering_enabled
  output->steering_enabled = input->steering_enabled;
  // fault_detected
  output->fault_detected = input->fault_detected;
  // fault_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->fault_reason), &(output->fault_reason)))
  {
    return false;
  }
  return true;
}

abaja_interfaces__msg__DbwStatus *
abaja_interfaces__msg__DbwStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__DbwStatus * msg = (abaja_interfaces__msg__DbwStatus *)allocator.allocate(sizeof(abaja_interfaces__msg__DbwStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__DbwStatus));
  bool success = abaja_interfaces__msg__DbwStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__DbwStatus__destroy(abaja_interfaces__msg__DbwStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__DbwStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__DbwStatus__Sequence__init(abaja_interfaces__msg__DbwStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__DbwStatus * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__DbwStatus *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__DbwStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__DbwStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__DbwStatus__fini(&data[i - 1]);
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
abaja_interfaces__msg__DbwStatus__Sequence__fini(abaja_interfaces__msg__DbwStatus__Sequence * array)
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
      abaja_interfaces__msg__DbwStatus__fini(&array->data[i]);
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

abaja_interfaces__msg__DbwStatus__Sequence *
abaja_interfaces__msg__DbwStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__DbwStatus__Sequence * array = (abaja_interfaces__msg__DbwStatus__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__DbwStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__DbwStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__DbwStatus__Sequence__destroy(abaja_interfaces__msg__DbwStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__DbwStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__DbwStatus__Sequence__are_equal(const abaja_interfaces__msg__DbwStatus__Sequence * lhs, const abaja_interfaces__msg__DbwStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__DbwStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__DbwStatus__Sequence__copy(
  const abaja_interfaces__msg__DbwStatus__Sequence * input,
  abaja_interfaces__msg__DbwStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__DbwStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__DbwStatus * data =
      (abaja_interfaces__msg__DbwStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__DbwStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__DbwStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__DbwStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
