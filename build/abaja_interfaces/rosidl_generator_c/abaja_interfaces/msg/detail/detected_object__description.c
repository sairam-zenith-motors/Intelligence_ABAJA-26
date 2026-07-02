// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/detected_object__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__DetectedObject__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xc5, 0x14, 0x4d, 0x84, 0x01, 0xb5, 0x6b,
      0x75, 0x5f, 0x5e, 0x9a, 0xcb, 0x53, 0xe0, 0xfd,
      0xad, 0xab, 0xd0, 0xde, 0xad, 0xfc, 0xd3, 0x7e,
      0x32, 0x88, 0x4f, 0x71, 0x3b, 0x82, 0xec, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__DetectedObject__TYPE_NAME[] = "abaja_interfaces/msg/DetectedObject";

// Define type names, field names, and default values
static char abaja_interfaces__msg__DetectedObject__FIELD_NAME__class_name[] = "class_name";
static char abaja_interfaces__msg__DetectedObject__FIELD_NAME__confidence[] = "confidence";
static char abaja_interfaces__msg__DetectedObject__FIELD_NAME__x_min[] = "x_min";
static char abaja_interfaces__msg__DetectedObject__FIELD_NAME__y_min[] = "y_min";
static char abaja_interfaces__msg__DetectedObject__FIELD_NAME__x_max[] = "x_max";
static char abaja_interfaces__msg__DetectedObject__FIELD_NAME__y_max[] = "y_max";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__DetectedObject__FIELDS[] = {
  {
    {abaja_interfaces__msg__DetectedObject__FIELD_NAME__class_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DetectedObject__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DetectedObject__FIELD_NAME__x_min, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DetectedObject__FIELD_NAME__y_min, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DetectedObject__FIELD_NAME__x_max, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DetectedObject__FIELD_NAME__y_max, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
abaja_interfaces__msg__DetectedObject__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__DetectedObject__TYPE_NAME, 35, 35},
      {abaja_interfaces__msg__DetectedObject__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string class_name\n"
  "float32 confidence\n"
  "int32 x_min\n"
  "int32 y_min\n"
  "int32 x_max\n"
  "int32 y_max";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__DetectedObject__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__DetectedObject__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__DetectedObject__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__DetectedObject__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
