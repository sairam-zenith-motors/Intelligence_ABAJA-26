// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/wheel_speed.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__WHEEL_SPEED__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__WHEEL_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/WheelSpeed in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__WheelSpeed
{
  float front_left;
  float front_right;
  float rear_left;
  float rear_right;
  float average_speed;
} abaja_interfaces__msg__WheelSpeed;

// Struct for a sequence of abaja_interfaces__msg__WheelSpeed.
typedef struct abaja_interfaces__msg__WheelSpeed__Sequence
{
  abaja_interfaces__msg__WheelSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__WheelSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__WHEEL_SPEED__STRUCT_H_
