// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/ObjectDistanceArray.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/object_distance_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "abaja_interfaces/msg/detail/object_distance__functions.h"

bool
abaja_interfaces__msg__ObjectDistanceArray__init(abaja_interfaces__msg__ObjectDistanceArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    abaja_interfaces__msg__ObjectDistanceArray__fini(msg);
    return false;
  }
  // objects
  if (!abaja_interfaces__msg__ObjectDistance__Sequence__init(&msg->objects, 0)) {
    abaja_interfaces__msg__ObjectDistanceArray__fini(msg);
    return false;
  }
  return true;
}

void
abaja_interfaces__msg__ObjectDistanceArray__fini(abaja_interfaces__msg__ObjectDistanceArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  abaja_interfaces__msg__ObjectDistance__Sequence__fini(&msg->objects);
}

bool
abaja_interfaces__msg__ObjectDistanceArray__are_equal(const abaja_interfaces__msg__ObjectDistanceArray * lhs, const abaja_interfaces__msg__ObjectDistanceArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // objects
  if (!abaja_interfaces__msg__ObjectDistance__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
abaja_interfaces__msg__ObjectDistanceArray__copy(
  const abaja_interfaces__msg__ObjectDistanceArray * input,
  abaja_interfaces__msg__ObjectDistanceArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // objects
  if (!abaja_interfaces__msg__ObjectDistance__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

abaja_interfaces__msg__ObjectDistanceArray *
abaja_interfaces__msg__ObjectDistanceArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ObjectDistanceArray * msg = (abaja_interfaces__msg__ObjectDistanceArray *)allocator.allocate(sizeof(abaja_interfaces__msg__ObjectDistanceArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__ObjectDistanceArray));
  bool success = abaja_interfaces__msg__ObjectDistanceArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__ObjectDistanceArray__destroy(abaja_interfaces__msg__ObjectDistanceArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__ObjectDistanceArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__ObjectDistanceArray__Sequence__init(abaja_interfaces__msg__ObjectDistanceArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ObjectDistanceArray * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__ObjectDistanceArray *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__ObjectDistanceArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__ObjectDistanceArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__ObjectDistanceArray__fini(&data[i - 1]);
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
abaja_interfaces__msg__ObjectDistanceArray__Sequence__fini(abaja_interfaces__msg__ObjectDistanceArray__Sequence * array)
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
      abaja_interfaces__msg__ObjectDistanceArray__fini(&array->data[i]);
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

abaja_interfaces__msg__ObjectDistanceArray__Sequence *
abaja_interfaces__msg__ObjectDistanceArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__ObjectDistanceArray__Sequence * array = (abaja_interfaces__msg__ObjectDistanceArray__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__ObjectDistanceArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__ObjectDistanceArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__ObjectDistanceArray__Sequence__destroy(abaja_interfaces__msg__ObjectDistanceArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__ObjectDistanceArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__ObjectDistanceArray__Sequence__are_equal(const abaja_interfaces__msg__ObjectDistanceArray__Sequence * lhs, const abaja_interfaces__msg__ObjectDistanceArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__ObjectDistanceArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__ObjectDistanceArray__Sequence__copy(
  const abaja_interfaces__msg__ObjectDistanceArray__Sequence * input,
  abaja_interfaces__msg__ObjectDistanceArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__ObjectDistanceArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__ObjectDistanceArray * data =
      (abaja_interfaces__msg__ObjectDistanceArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__ObjectDistanceArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__ObjectDistanceArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__ObjectDistanceArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
