// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/AEBStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/aeb_status.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AEBStatus in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__AEBStatus
{
  bool aeb_active;
  bool warning_active;
  bool emergency_braking;
  float commanded_brake_percent;
  float commanded_throttle_percent;
  rosidl_runtime_c__String reason;
} abaja_interfaces__msg__AEBStatus;

// Struct for a sequence of abaja_interfaces__msg__AEBStatus.
typedef struct abaja_interfaces__msg__AEBStatus__Sequence
{
  abaja_interfaces__msg__AEBStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__AEBStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__STRUCT_H_
