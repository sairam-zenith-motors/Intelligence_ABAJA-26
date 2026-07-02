// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/ControlCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/control_cmd.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__CONTROL_CMD__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__CONTROL_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ControlCmd in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__ControlCmd
{
  float target_speed_mps;
  float steering_angle_deg;
  float throttle_percent;
  float brake_percent;
  bool emergency_stop;
  rosidl_runtime_c__String source;
} abaja_interfaces__msg__ControlCmd;

// Struct for a sequence of abaja_interfaces__msg__ControlCmd.
typedef struct abaja_interfaces__msg__ControlCmd__Sequence
{
  abaja_interfaces__msg__ControlCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__ControlCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__CONTROL_CMD__STRUCT_H_
