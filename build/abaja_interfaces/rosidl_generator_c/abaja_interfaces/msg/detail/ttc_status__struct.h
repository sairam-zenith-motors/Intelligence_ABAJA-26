// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/TTCStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/ttc_status.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'object_class'
// Member 'risk_level'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TTCStatus in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__TTCStatus
{
  bool obstacle_detected;
  rosidl_runtime_c__String object_class;
  float distance_m;
  float ego_speed_mps;
  float ttc_seconds;
  rosidl_runtime_c__String risk_level;
} abaja_interfaces__msg__TTCStatus;

// Struct for a sequence of abaja_interfaces__msg__TTCStatus.
typedef struct abaja_interfaces__msg__TTCStatus__Sequence
{
  abaja_interfaces__msg__TTCStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__TTCStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__STRUCT_H_
