// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/dbw_cmd.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DbwCmd in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__DbwCmd
{
  float target_speed_mps;
  float steering_angle_deg;
  float throttle_percent;
  float brake_percent;
  bool enable_throttle;
  bool enable_brake;
  bool enable_steering;
  bool emergency_stop;
} abaja_interfaces__msg__DbwCmd;

// Struct for a sequence of abaja_interfaces__msg__DbwCmd.
typedef struct abaja_interfaces__msg__DbwCmd__Sequence
{
  abaja_interfaces__msg__DbwCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__DbwCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__STRUCT_H_
