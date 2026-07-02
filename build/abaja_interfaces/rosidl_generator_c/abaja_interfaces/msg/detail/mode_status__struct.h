// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/ModeStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/mode_status.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ModeStatus in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__ModeStatus
{
  bool autonomous_switch;
  bool manual_switch;
  bool lateral_switch;
  bool longitudinal_switch;
  bool kill_switch;
  bool dbw_ready;
} abaja_interfaces__msg__ModeStatus;

// Struct for a sequence of abaja_interfaces__msg__ModeStatus.
typedef struct abaja_interfaces__msg__ModeStatus__Sequence
{
  abaja_interfaces__msg__ModeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__ModeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__STRUCT_H_
