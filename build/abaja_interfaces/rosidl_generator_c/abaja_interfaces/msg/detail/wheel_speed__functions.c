// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/WheelSpeed.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/wheel_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abaja_interfaces__msg__WheelSpeed__init(abaja_interfaces__msg__WheelSpeed * msg)
{
  if (!msg) {
    return false;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
  // average_speed
  return true;
}

void
abaja_interfaces__msg__WheelSpeed__fini(abaja_interfaces__msg__WheelSpeed * msg)
{
  if (!msg) {
    return;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
  // average_speed
}

bool
abaja_interfaces__msg__WheelSpeed__are_equal(const abaja_interfaces__msg__WheelSpeed * lhs, const abaja_interfaces__msg__WheelSpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_left
  if (lhs->front_left != rhs->front_left) {
    return false;
  }
  // front_right
  if (lhs->front_right != rhs->front_right) {
    return false;
  }
  // rear_left
  if (lhs->rear_left != rhs->rear_left) {
    return false;
  }
  // rear_right
  if (lhs->rear_right != rhs->rear_right) {
    return false;
  }
  // average_speed
  if (lhs->average_speed != rhs->average_speed) {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__WheelSpeed__copy(
  const abaja_interfaces__msg__WheelSpeed * input,
  abaja_interfaces__msg__WheelSpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // front_left
  output->front_left = input->front_left;
  // front_right
  output->front_right = input->front_right;
  // rear_left
  output->rear_left = input->rear_left;
  // rear_right
  output->rear_right = input->rear_right;
  // average_speed
  output->average_speed = input->average_speed;
  return true;
}

abaja_interfaces__msg__WheelSpeed *
abaja_interfaces__msg__WheelSpeed__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__WheelSpeed * msg = (abaja_interfaces__msg__WheelSpeed *)allocator.allocate(sizeof(abaja_interfaces__msg__WheelSpeed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__WheelSpeed));
  bool success = abaja_interfaces__msg__WheelSpeed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__WheelSpeed__destroy(abaja_interfaces__msg__WheelSpeed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__WheelSpeed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__WheelSpeed__Sequence__init(abaja_interfaces__msg__WheelSpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__WheelSpeed * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__WheelSpeed *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__WheelSpeed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__WheelSpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__WheelSpeed__fini(&data[i - 1]);
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
abaja_interfaces__msg__WheelSpeed__Sequence__fini(abaja_interfaces__msg__WheelSpeed__Sequence * array)
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
      abaja_interfaces__msg__WheelSpeed__fini(&array->data[i]);
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

abaja_interfaces__msg__WheelSpeed__Sequence *
abaja_interfaces__msg__WheelSpeed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__WheelSpeed__Sequence * array = (abaja_interfaces__msg__WheelSpeed__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__WheelSpeed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__WheelSpeed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__WheelSpeed__Sequence__destroy(abaja_interfaces__msg__WheelSpeed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__WheelSpeed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__WheelSpeed__Sequence__are_equal(const abaja_interfaces__msg__WheelSpeed__Sequence * lhs, const abaja_interfaces__msg__WheelSpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__WheelSpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__WheelSpeed__Sequence__copy(
  const abaja_interfaces__msg__WheelSpeed__Sequence * input,
  abaja_interfaces__msg__WheelSpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__WheelSpeed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__WheelSpeed * data =
      (abaja_interfaces__msg__WheelSpeed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__WheelSpeed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__WheelSpeed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__WheelSpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
