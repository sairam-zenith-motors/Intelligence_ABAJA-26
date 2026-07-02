// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/SafetyState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/safety_state.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__STRUCT_H_

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

/// Struct defined in msg/SafetyState in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__SafetyState
{
  bool safe_to_drive;
  bool emergency_stop;
  bool dbw_allowed;
  bool perception_ok;
  bool lane_ok;
  bool aeb_ok;
  rosidl_runtime_c__String reason;
} abaja_interfaces__msg__SafetyState;

// Struct for a sequence of abaja_interfaces__msg__SafetyState.
typedef struct abaja_interfaces__msg__SafetyState__Sequence
{
  abaja_interfaces__msg__SafetyState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__SafetyState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__STRUCT_H_
