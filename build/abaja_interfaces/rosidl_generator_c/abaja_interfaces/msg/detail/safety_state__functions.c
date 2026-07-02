// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/SafetyState.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/safety_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
abaja_interfaces__msg__SafetyState__init(abaja_interfaces__msg__SafetyState * msg)
{
  if (!msg) {
    return false;
  }
  // safe_to_drive
  // emergency_stop
  // dbw_allowed
  // perception_ok
  // lane_ok
  // aeb_ok
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    abaja_interfaces__msg__SafetyState__fini(msg);
    return false;
  }
  return true;
}

void
abaja_interfaces__msg__SafetyState__fini(abaja_interfaces__msg__SafetyState * msg)
{
  if (!msg) {
    return;
  }
  // safe_to_drive
  // emergency_stop
  // dbw_allowed
  // perception_ok
  // lane_ok
  // aeb_ok
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
abaja_interfaces__msg__SafetyState__are_equal(const abaja_interfaces__msg__SafetyState * lhs, const abaja_interfaces__msg__SafetyState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // safe_to_drive
  if (lhs->safe_to_drive != rhs->safe_to_drive) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
    return false;
  }
  // dbw_allowed
  if (lhs->dbw_allowed != rhs->dbw_allowed) {
    return false;
  }
  // perception_ok
  if (lhs->perception_ok != rhs->perception_ok) {
    return false;
  }
  // lane_ok
  if (lhs->lane_ok != rhs->lane_ok) {
    return false;
  }
  // aeb_ok
  if (lhs->aeb_ok != rhs->aeb_ok) {
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
abaja_interfaces__msg__SafetyState__copy(
  const abaja_interfaces__msg__SafetyState * input,
  abaja_interfaces__msg__SafetyState * output)
{
  if (!input || !output) {
    return false;
  }
  // safe_to_drive
  output->safe_to_drive = input->safe_to_drive;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // dbw_allowed
  output->dbw_allowed = input->dbw_allowed;
  // perception_ok
  output->perception_ok = input->perception_ok;
  // lane_ok
  output->lane_ok = input->lane_ok;
  // aeb_ok
  output->aeb_ok = input->aeb_ok;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

abaja_interfaces__msg__SafetyState *
abaja_interfaces__msg__SafetyState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__SafetyState * msg = (abaja_interfaces__msg__SafetyState *)allocator.allocate(sizeof(abaja_interfaces__msg__SafetyState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__SafetyState));
  bool success = abaja_interfaces__msg__SafetyState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__SafetyState__destroy(abaja_interfaces__msg__SafetyState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__SafetyState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__SafetyState__Sequence__init(abaja_interfaces__msg__SafetyState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__SafetyState * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__SafetyState *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__SafetyState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__SafetyState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__SafetyState__fini(&data[i - 1]);
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
abaja_interfaces__msg__SafetyState__Sequence__fini(abaja_interfaces__msg__SafetyState__Sequence * array)
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
      abaja_interfaces__msg__SafetyState__fini(&array->data[i]);
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

abaja_interfaces__msg__SafetyState__Sequence *
abaja_interfaces__msg__SafetyState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__SafetyState__Sequence * array = (abaja_interfaces__msg__SafetyState__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__SafetyState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__SafetyState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__SafetyState__Sequence__destroy(abaja_interfaces__msg__SafetyState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__SafetyState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__SafetyState__Sequence__are_equal(const abaja_interfaces__msg__SafetyState__Sequence * lhs, const abaja_interfaces__msg__SafetyState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__SafetyState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__SafetyState__Sequence__copy(
  const abaja_interfaces__msg__SafetyState__Sequence * input,
  abaja_interfaces__msg__SafetyState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__SafetyState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__SafetyState * data =
      (abaja_interfaces__msg__SafetyState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__SafetyState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__SafetyState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__SafetyState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
