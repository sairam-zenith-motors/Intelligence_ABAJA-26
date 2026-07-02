// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/LaneMarking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/lane_marking.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LaneMarking in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__LaneMarking
{
  bool left_lane_detected;
  bool right_lane_detected;
  float left_lane_x;
  float right_lane_x;
  float lane_center_x;
  float confidence;
} abaja_interfaces__msg__LaneMarking;

// Struct for a sequence of abaja_interfaces__msg__LaneMarking.
typedef struct abaja_interfaces__msg__LaneMarking__Sequence
{
  abaja_interfaces__msg__LaneMarking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__LaneMarking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__STRUCT_H_
