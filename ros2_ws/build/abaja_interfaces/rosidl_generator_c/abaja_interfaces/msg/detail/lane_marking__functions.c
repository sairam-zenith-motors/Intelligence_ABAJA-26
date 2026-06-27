// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/LaneMarking.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/lane_marking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abaja_interfaces__msg__LaneMarking__init(abaja_interfaces__msg__LaneMarking * msg)
{
  if (!msg) {
    return false;
  }
  // left_lane_detected
  // right_lane_detected
  // left_lane_x
  // right_lane_x
  // lane_center_x
  // confidence
  return true;
}

void
abaja_interfaces__msg__LaneMarking__fini(abaja_interfaces__msg__LaneMarking * msg)
{
  if (!msg) {
    return;
  }
  // left_lane_detected
  // right_lane_detected
  // left_lane_x
  // right_lane_x
  // lane_center_x
  // confidence
}

bool
abaja_interfaces__msg__LaneMarking__are_equal(const abaja_interfaces__msg__LaneMarking * lhs, const abaja_interfaces__msg__LaneMarking * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_lane_detected
  if (lhs->left_lane_detected != rhs->left_lane_detected) {
    return false;
  }
  // right_lane_detected
  if (lhs->right_lane_detected != rhs->right_lane_detected) {
    return false;
  }
  // left_lane_x
  if (lhs->left_lane_x != rhs->left_lane_x) {
    return false;
  }
  // right_lane_x
  if (lhs->right_lane_x != rhs->right_lane_x) {
    return false;
  }
  // lane_center_x
  if (lhs->lane_center_x != rhs->lane_center_x) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__LaneMarking__copy(
  const abaja_interfaces__msg__LaneMarking * input,
  abaja_interfaces__msg__LaneMarking * output)
{
  if (!input || !output) {
    return false;
  }
  // left_lane_detected
  output->left_lane_detected = input->left_lane_detected;
  // right_lane_detected
  output->right_lane_detected = input->right_lane_detected;
  // left_lane_x
  output->left_lane_x = input->left_lane_x;
  // right_lane_x
  output->right_lane_x = input->right_lane_x;
  // lane_center_x
  output->lane_center_x = input->lane_center_x;
  // confidence
  output->confidence = input->confidence;
  return true;
}

abaja_interfaces__msg__LaneMarking *
abaja_interfaces__msg__LaneMarking__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__LaneMarking * msg = (abaja_interfaces__msg__LaneMarking *)allocator.allocate(sizeof(abaja_interfaces__msg__LaneMarking), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__LaneMarking));
  bool success = abaja_interfaces__msg__LaneMarking__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__LaneMarking__destroy(abaja_interfaces__msg__LaneMarking * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__LaneMarking__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__LaneMarking__Sequence__init(abaja_interfaces__msg__LaneMarking__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__LaneMarking * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__LaneMarking *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__LaneMarking), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__LaneMarking__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__LaneMarking__fini(&data[i - 1]);
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
abaja_interfaces__msg__LaneMarking__Sequence__fini(abaja_interfaces__msg__LaneMarking__Sequence * array)
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
      abaja_interfaces__msg__LaneMarking__fini(&array->data[i]);
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

abaja_interfaces__msg__LaneMarking__Sequence *
abaja_interfaces__msg__LaneMarking__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__LaneMarking__Sequence * array = (abaja_interfaces__msg__LaneMarking__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__LaneMarking__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__LaneMarking__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__LaneMarking__Sequence__destroy(abaja_interfaces__msg__LaneMarking__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__LaneMarking__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__LaneMarking__Sequence__are_equal(const abaja_interfaces__msg__LaneMarking__Sequence * lhs, const abaja_interfaces__msg__LaneMarking__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__LaneMarking__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__LaneMarking__Sequence__copy(
  const abaja_interfaces__msg__LaneMarking__Sequence * input,
  abaja_interfaces__msg__LaneMarking__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__LaneMarking);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__LaneMarking * data =
      (abaja_interfaces__msg__LaneMarking *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__LaneMarking__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__LaneMarking__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__LaneMarking__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
