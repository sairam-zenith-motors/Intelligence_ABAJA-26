// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abaja_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status_text`
#include "rosidl_runtime_c/string_functions.h"

bool
abaja_interfaces__msg__VehicleState__init(abaja_interfaces__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // speed_mps
  // steering_angle_deg
  // brake_position
  // throttle_position
  // battery_voltage
  // autonomous_mode
  // manual_mode
  // lateral_enabled
  // longitudinal_enabled
  // emergency_stop
  // status_text
  if (!rosidl_runtime_c__String__init(&msg->status_text)) {
    abaja_interfaces__msg__VehicleState__fini(msg);
    return false;
  }
  return true;
}

void
abaja_interfaces__msg__VehicleState__fini(abaja_interfaces__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // speed_mps
  // steering_angle_deg
  // brake_position
  // throttle_position
  // battery_voltage
  // autonomous_mode
  // manual_mode
  // lateral_enabled
  // longitudinal_enabled
  // emergency_stop
  // status_text
  rosidl_runtime_c__String__fini(&msg->status_text);
}

bool
abaja_interfaces__msg__VehicleState__are_equal(const abaja_interfaces__msg__VehicleState * lhs, const abaja_interfaces__msg__VehicleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed_mps
  if (lhs->speed_mps != rhs->speed_mps) {
    return false;
  }
  // steering_angle_deg
  if (lhs->steering_angle_deg != rhs->steering_angle_deg) {
    return false;
  }
  // brake_position
  if (lhs->brake_position != rhs->brake_position) {
    return false;
  }
  // throttle_position
  if (lhs->throttle_position != rhs->throttle_position) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // autonomous_mode
  if (lhs->autonomous_mode != rhs->autonomous_mode) {
    return false;
  }
  // manual_mode
  if (lhs->manual_mode != rhs->manual_mode) {
    return false;
  }
  // lateral_enabled
  if (lhs->lateral_enabled != rhs->lateral_enabled) {
    return false;
  }
  // longitudinal_enabled
  if (lhs->longitudinal_enabled != rhs->longitudinal_enabled) {
    return false;
  }
  // emergency_stop
  if (lhs->emergency_stop != rhs->emergency_stop) {
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
abaja_interfaces__msg__VehicleState__copy(
  const abaja_interfaces__msg__VehicleState * input,
  abaja_interfaces__msg__VehicleState * output)
{
  if (!input || !output) {
    return false;
  }
  // speed_mps
  output->speed_mps = input->speed_mps;
  // steering_angle_deg
  output->steering_angle_deg = input->steering_angle_deg;
  // brake_position
  output->brake_position = input->brake_position;
  // throttle_position
  output->throttle_position = input->throttle_position;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // autonomous_mode
  output->autonomous_mode = input->autonomous_mode;
  // manual_mode
  output->manual_mode = input->manual_mode;
  // lateral_enabled
  output->lateral_enabled = input->lateral_enabled;
  // longitudinal_enabled
  output->longitudinal_enabled = input->longitudinal_enabled;
  // emergency_stop
  output->emergency_stop = input->emergency_stop;
  // status_text
  if (!rosidl_runtime_c__String__copy(
      &(input->status_text), &(output->status_text)))
  {
    return false;
  }
  return true;
}

abaja_interfaces__msg__VehicleState *
abaja_interfaces__msg__VehicleState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__VehicleState * msg = (abaja_interfaces__msg__VehicleState *)allocator.allocate(sizeof(abaja_interfaces__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abaja_interfaces__msg__VehicleState));
  bool success = abaja_interfaces__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abaja_interfaces__msg__VehicleState__destroy(abaja_interfaces__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abaja_interfaces__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abaja_interfaces__msg__VehicleState__Sequence__init(abaja_interfaces__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__VehicleState * data = NULL;

  if (size) {
    data = (abaja_interfaces__msg__VehicleState *)allocator.zero_allocate(size, sizeof(abaja_interfaces__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abaja_interfaces__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abaja_interfaces__msg__VehicleState__fini(&data[i - 1]);
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
abaja_interfaces__msg__VehicleState__Sequence__fini(abaja_interfaces__msg__VehicleState__Sequence * array)
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
      abaja_interfaces__msg__VehicleState__fini(&array->data[i]);
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

abaja_interfaces__msg__VehicleState__Sequence *
abaja_interfaces__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abaja_interfaces__msg__VehicleState__Sequence * array = (abaja_interfaces__msg__VehicleState__Sequence *)allocator.allocate(sizeof(abaja_interfaces__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abaja_interfaces__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abaja_interfaces__msg__VehicleState__Sequence__destroy(abaja_interfaces__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abaja_interfaces__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abaja_interfaces__msg__VehicleState__Sequence__are_equal(const abaja_interfaces__msg__VehicleState__Sequence * lhs, const abaja_interfaces__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abaja_interfaces__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abaja_interfaces__msg__VehicleState__Sequence__copy(
  const abaja_interfaces__msg__VehicleState__Sequence * input,
  abaja_interfaces__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abaja_interfaces__msg__VehicleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abaja_interfaces__msg__VehicleState * data =
      (abaja_interfaces__msg__VehicleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abaja_interfaces__msg__VehicleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abaja_interfaces__msg__VehicleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abaja_interfaces__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
