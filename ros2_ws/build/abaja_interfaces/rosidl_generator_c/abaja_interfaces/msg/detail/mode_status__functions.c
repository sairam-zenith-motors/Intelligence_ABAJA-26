// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/ModeStatus.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/mode_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abaja_interfaces__msg__ModeStatus__init(abaja_interfaces__msg__ModeStatus * msg)
{
  if (!msg) {
    return false;
  }
  // autonomous_switch
  // manual_switch
  // lateral_switch
  // longitudinal_switch
  // kill_switch
  // dbw_ready
  return true;
}

void
abaja_interfaces__msg__ModeStatus__fini(abaja_interfaces__msg__ModeStatus * msg)
{
  if (!msg) {
    return;
  }
  // autonomous_switch
  // manual_switch
  // lateral_switch
  // longitudinal_switch
  // kill_switch
  // dbw_ready
}

bool
abaja_interfaces__msg__ModeStatus__are_equal(const abaja_interfaces__msg__ModeStatus * lhs, const abaja_interfaces__msg__ModeStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // autonomous_switch
  if (lhs->autonomous_switch != rhs->autonomous_switch) {
    return false;
  }
  // manual_switch
  if (lhs->manual_switch != rhs->manual_switch) {
    return false;
  }
  // lateral_switch
  if (lhs->lateral_switch != rhs->lateral_switch) {
    return false;
  }
  // longitudinal_switch
  if (lhs->longitudinal_switch != rhs->longitudinal_switch) {
    return false;
  }
  // kill_switch
  if (lhs->kill_switch != rhs->kill_switch) {
    return false;
  }
  // dbw_ready
  if (lhs->dbw_ready != rhs->dbw_ready) {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__ModeStatus__copy(
  const abaja_interfaces__msg__ModeStatus * input,
  abaja_interfaces__msg__ModeStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // autonomous_switch
  output->autonomous_switch = input->autonomous_switch;
  // manual_switch
  output->manual_switch = input->manual_switch;
  // lateral_switch
  output->lateral_switch = input->lateral_switch;
  // longitudinal_switch
  output->longitudinal_switch = input->longitudinal_switch;
  // kill_switch
  output->kill_switch = input->kill_switch;
  // dbw_ready
  output->dbw_ready = input->dbw_ready;
  return true;
}

abaja_interfaces__msg__ModeStatus *
abaja_interfaces__msg__ModeStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ModeStatus * msg = (abaja_interfaces__msg__ModeStatus *)allocator.allocate(sizeof(abaja_interfaces__msg__ModeStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__ModeStatus));
  bool success = abaja_interfaces__msg__ModeStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__ModeStatus__destroy(abaja_interfaces__msg__ModeStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__ModeStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__ModeStatus__Sequence__init(abaja_interfaces__msg__ModeStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ModeStatus * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__ModeStatus *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__ModeStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__ModeStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__ModeStatus__fini(&data[i - 1]);
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
abaja_interfaces__msg__ModeStatus__Sequence__fini(abaja_interfaces__msg__ModeStatus__Sequence * array)
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
      abaja_interfaces__msg__ModeStatus__fini(&array->data[i]);
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

abaja_interfaces__msg__ModeStatus__Sequence *
abaja_interfaces__msg__ModeStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ModeStatus__Sequence * array = (abaja_interfaces__msg__ModeStatus__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__ModeStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__ModeStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__ModeStatus__Sequence__destroy(abaja_interfaces__msg__ModeStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__ModeStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__ModeStatus__Sequence__are_equal(const abaja_interfaces__msg__ModeStatus__Sequence * lhs, const abaja_interfaces__msg__ModeStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__ModeStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__ModeStatus__Sequence__copy(
  const abaja_interfaces__msg__ModeStatus__Sequence * input,
  abaja_interfaces__msg__ModeStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__ModeStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__ModeStatus * data =
      (abaja_interfaces__msg__ModeStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__ModeStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__ModeStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__ModeStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
