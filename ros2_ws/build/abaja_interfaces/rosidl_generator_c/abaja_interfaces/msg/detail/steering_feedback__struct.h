// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/SteeringFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/steering_feedback.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SteeringFeedback in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__SteeringFeedback
{
  float target_angle_deg;
  float actual_angle_deg;
  float error_deg;
} abaja_interfaces__msg__SteeringFeedback;

// Struct for a sequence of abaja_interfaces__msg__SteeringFeedback.
typedef struct abaja_interfaces__msg__SteeringFeedback__Sequence
{
  abaja_interfaces__msg__SteeringFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__SteeringFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__STRUCT_H_
