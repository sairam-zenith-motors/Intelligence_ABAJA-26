// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abaja_interfaces:msg/ObjectDistanceArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/object_distance_array.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE_ARRAY__STRUCT_H_
#define ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objects'
#include "abaja_interfaces/msg/detail/object_distance__struct.h"

/// Struct defined in msg/ObjectDistanceArray in the package abaja_interfaces.
typedef struct abaja_interfaces__msg__ObjectDistanceArray
{
  std_msgs__msg__Header header;
  abaja_interfaces__msg__ObjectDistance__Sequence objects;
} abaja_interfaces__msg__ObjectDistanceArray;

// Struct for a sequence of abaja_interfaces__msg__ObjectDistanceArray.
typedef struct abaja_interfaces__msg__ObjectDistanceArray__Sequence
{
  abaja_interfaces__msg__ObjectDistanceArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abaja_interfaces__msg__ObjectDistanceArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE_ARRAY__STRUCT_H_
