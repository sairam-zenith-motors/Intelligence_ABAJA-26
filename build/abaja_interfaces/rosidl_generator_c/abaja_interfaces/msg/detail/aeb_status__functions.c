// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/AEBStatus.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/aeb_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
abaja_interfaces__msg__AEBStatus__init(abaja_interfaces__msg__AEBStatus * msg)
{
  if (!msg) {
    return false;
  }
  // aeb_active
  // warning_active
  // emergency_braking
  // commanded_brake_percent
  // commanded_throttle_percent
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    abaja_interfaces__msg__AEBStatus__fini(msg);
    return false;
  }
  return true;
}

void
abaja_interfaces__msg__AEBStatus__fini(abaja_interfaces__msg__AEBStatus * msg)
{
  if (!msg) {
    return;
  }
  // aeb_active
  // warning_active
  // emergency_braking
  // commanded_brake_percent
  // commanded_throttle_percent
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
abaja_interfaces__msg__AEBStatus__are_equal(const abaja_interfaces__msg__AEBStatus * lhs, const abaja_interfaces__msg__AEBStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // aeb_active
  if (lhs->aeb_active != rhs->aeb_active) {
    return false;
  }
  // warning_active
  if (lhs->warning_active != rhs->warning_active) {
    return false;
  }
  // emergency_braking
  if (lhs->emergency_braking != rhs->emergency_braking) {
    return false;
  }
  // commanded_brake_percent
  if (lhs->commanded_brake_percent != rhs->commanded_brake_percent) {
    return false;
  }
  // commanded_throttle_percent
  if (lhs->commanded_throttle_percent != rhs->commanded_throttle_percent) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__AEBStatus__copy(
  const abaja_interfaces__msg__AEBStatus * input,
  abaja_interfaces__msg__AEBStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // aeb_active
  output->aeb_active = input->aeb_active;
  // warning_active
  output->warning_active = input->warning_active;
  // emergency_braking
  output->emergency_braking = input->emergency_braking;
  // commanded_brake_percent
  output->commanded_brake_percent = input->commanded_brake_percent;
  // commanded_throttle_percent
  output->commanded_throttle_percent = input->commanded_throttle_percent;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

abaja_interfaces__msg__AEBStatus *
abaja_interfaces__msg__AEBStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__AEBStatus * msg = (abaja_interfaces__msg__AEBStatus *)allocator.allocate(sizeof(abaja_interfaces__msg__AEBStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__AEBStatus));
  bool success = abaja_interfaces__msg__AEBStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__AEBStatus__destroy(abaja_interfaces__msg__AEBStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__AEBStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__AEBStatus__Sequence__init(abaja_interfaces__msg__AEBStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__AEBStatus * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__AEBStatus *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__AEBStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__AEBStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__AEBStatus__fini(&data[i - 1]);
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
abaja_interfaces__msg__AEBStatus__Sequence__fini(abaja_interfaces__msg__AEBStatus__Sequence * array)
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
      abaja_interfaces__msg__AEBStatus__fini(&array->data[i]);
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

abaja_interfaces__msg__AEBStatus__Sequence *
abaja_interfaces__msg__AEBStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__AEBStatus__Sequence * array = (abaja_interfaces__msg__AEBStatus__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__AEBStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__AEBStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__AEBStatus__Sequence__destroy(abaja_interfaces__msg__AEBStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__AEBStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__AEBStatus__Sequence__are_equal(const abaja_interfaces__msg__AEBStatus__Sequence * lhs, const abaja_interfaces__msg__AEBStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__AEBStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__AEBStatus__Sequence__copy(
  const abaja_interfaces__msg__AEBStatus__Sequence * input,
  abaja_interfaces__msg__AEBStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__AEBStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__AEBStatus * data =
      (abaja_interfaces__msg__AEBStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__AEBStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__AEBStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__AEBStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
