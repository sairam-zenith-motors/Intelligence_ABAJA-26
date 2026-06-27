// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/object_distance.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ObjectDistance in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__ObjectDistance
{
  rosidl_runtime_c__String class_name;
  float confidence;
  float distance_m;
  int32_t x_min;
  int32_t y_min;
  int32_t x_max;
  int32_t y_max;
} abaja_interfaces__msg__ObjectDistance;

// Struct for a sequence of abaja_interfaces__msg__ObjectDistance.
typedef struct abaja_interfaces__msg__ObjectDistance__Sequence
{
  abaja_interfaces__msg__ObjectDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__ObjectDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_H_
