// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/LaneState.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/lane_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status_text`
#include "rosidl_runtime_c/string_functions.h"

bool
abaja_interfaces__msg__LaneState__init(abaja_interfaces__msg__LaneState * msg)
{
  if (!msg) {
    return false;
  }
  // lane_available
  // lateral_error_m
  // heading_error_deg
  // lane_confidence
  // status_text
  if (!rosidl_runtime_c__String__init(&msg->status_text)) {
    abaja_interfaces__msg__LaneState__fini(msg);
    return false;
  }
  return true;
}

void
abaja_interfaces__msg__LaneState__fini(abaja_interfaces__msg__LaneState * msg)
{
  if (!msg) {
    return;
  }
  // lane_available
  // lateral_error_m
  // heading_error_deg
  // lane_confidence
  // status_text
  rosidl_runtime_c__String__fini(&msg->status_text);
}

bool
abaja_interfaces__msg__LaneState__are_equal(const abaja_interfaces__msg__LaneState * lhs, const abaja_interfaces__msg__LaneState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_available
  if (lhs->lane_available != rhs->lane_available) {
    return false;
  }
  // lateral_error_m
  if (lhs->lateral_error_m != rhs->lateral_error_m) {
    return false;
  }
  // heading_error_deg
  if (lhs->heading_error_deg != rhs->heading_error_deg) {
    return false;
  }
  // lane_confidence
  if (lhs->lane_confidence != rhs->lane_confidence) {
    return false;
  }
  // status_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_text), &(rhs->status_text)))
  {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__LaneState__copy(
  const abaja_interfaces__msg__LaneState * input,
  abaja_interfaces__msg__LaneState * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_available
  output->lane_available = input->lane_available;
  // lateral_error_m
  output->lateral_error_m = input->lateral_error_m;
  // heading_error_deg
  output->heading_error_deg = input->heading_error_deg;
  // lane_confidence
  output->lane_confidence = input->lane_confidence;
  // status_text
  if (!rosidl_runtime_c__String__copy(
      &(input->status_text), &(output->status_text)))
  {
    return false;
  }
  return true;
}

abaja_interfaces__msg__LaneState *
abaja_interfaces__msg__LaneState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__LaneState * msg = (abaja_interfaces__msg__LaneState *)allocator.allocate(sizeof(abaja_interfaces__msg__LaneState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__LaneState));
  bool success = abaja_interfaces__msg__LaneState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__LaneState__destroy(abaja_interfaces__msg__LaneState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__LaneState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__LaneState__Sequence__init(abaja_interfaces__msg__LaneState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__LaneState * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__LaneState *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__LaneState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__LaneState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__LaneState__fini(&data[i - 1]);
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
abaja_interfaces__msg__LaneState__Sequence__fini(abaja_interfaces__msg__LaneState__Sequence * array)
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
      abaja_interfaces__msg__LaneState__fini(&array->data[i]);
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

abaja_interfaces__msg__LaneState__Sequence *
abaja_interfaces__msg__LaneState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__LaneState__Sequence * array = (abaja_interfaces__msg__LaneState__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__LaneState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__LaneState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__LaneState__Sequence__destroy(abaja_interfaces__msg__LaneState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__LaneState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__LaneState__Sequence__are_equal(const abaja_interfaces__msg__LaneState__Sequence * lhs, const abaja_interfaces__msg__LaneState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__LaneState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__LaneState__Sequence__copy(
  const abaja_interfaces__msg__LaneState__Sequence * input,
  abaja_interfaces__msg__LaneState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__LaneState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__LaneState * data =
      (abaja_interfaces__msg__LaneState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__LaneState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__LaneState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__LaneState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
