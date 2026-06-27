// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/vehicle_state.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

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

/// Struct defined in msg/VehicleState in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__VehicleState
{
  float speed_mps;
  float steering_angle_deg;
  float brake_position;
  float throttle_position;
  float battery_voltage;
  bool autonomous_mode;
  bool manual_mode;
  bool lateral_enabled;
  bool longitudinal_enabled;
  bool emergency_stop;
  rosidl_runtime_c__String status_text;
} abaja_interfaces__msg__VehicleState;

// Struct for a sequence of abaja_interfaces__msg__VehicleState.
typedef struct abaja_interfaces__msg__VehicleState__Sequence
{
  abaja_interfaces__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
