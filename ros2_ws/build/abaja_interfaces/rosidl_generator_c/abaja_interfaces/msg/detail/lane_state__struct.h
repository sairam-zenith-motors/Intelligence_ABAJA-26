// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/LaneState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/lane_state.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'status_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LaneState in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__LaneState
{
  bool lane_available;
  float lateral_error_m;
  float heading_error_deg;
  float lane_confidence;
  rosidl_runtime_c__String status_text;
} abaja_interfaces__msg__LaneState;

// Struct for a sequence of abaja_interfaces__msg__LaneState.
typedef struct abaja_interfaces__msg__LaneState__Sequence
{
  abaja_interfaces__msg__LaneState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__LaneState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__STRUCT_H_
