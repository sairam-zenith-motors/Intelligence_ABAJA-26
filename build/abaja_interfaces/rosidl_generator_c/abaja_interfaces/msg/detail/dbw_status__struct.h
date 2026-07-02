// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/DbwStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/dbw_status.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'fault_reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DbwStatus in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__DbwStatus
{
  bool dbw_enabled;
  bool throttle_enabled;
  bool brake_enabled;
  bool steering_enabled;
  bool fault_detected;
  rosidl_runtime_c__String fault_reason;
} abaja_interfaces__msg__DbwStatus;

// Struct for a sequence of abaja_interfaces__msg__DbwStatus.
typedef struct abaja_interfaces__msg__DbwStatus__Sequence
{
  abaja_interfaces__msg__DbwStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__DbwStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__STRUCT_H_
