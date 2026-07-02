// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/battery_status.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/BatteryStatus in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__BatteryStatus
{
  float voltage;
  float current;
  float percentage;
  bool low_voltage_warning;
} abaja_interfaces__msg__BatteryStatus;

// Struct for a sequence of abaja_interfaces__msg__BatteryStatus.
typedef struct abaja_interfaces__msg__BatteryStatus__Sequence
{
  abaja_interfaces__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
