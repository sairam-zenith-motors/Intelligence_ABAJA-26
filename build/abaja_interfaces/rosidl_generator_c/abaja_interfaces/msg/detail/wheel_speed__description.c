// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/wheel_speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__WheelSpeed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0x4d, 0xa1, 0xf5, 0xbc, 0x90, 0xc3, 0xa3,
      0x82, 0xcb, 0x71, 0x9c, 0x06, 0x46, 0x1f, 0x43,
      0xf9, 0x28, 0x2d, 0x26, 0xb5, 0x66, 0x92, 0x40,
      0x95, 0x07, 0xb6, 0xb7, 0x0c, 0xea, 0x28, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__WheelSpeed__TYPE_NAME[] = "abaja_interfaces/msg/WheelSpeed";

// Define type names, field names, and default values
static char abaja_interfaces__msg__WheelSpeed__FIELD_NAME__front_left[] = "front_left";
static char abaja_interfaces__msg__WheelSpeed__FIELD_NAME__front_right[] = "front_right";
static char abaja_interfaces__msg__WheelSpeed__FIELD_NAME__rear_left[] = "rear_left";
static char abaja_interfaces__msg__WheelSpeed__FIELD_NAME__rear_right[] = "rear_right";
static char abaja_interfaces__msg__WheelSpeed__FIELD_NAME__average_speed[] = "average_speed";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__WheelSpeed__FIELDS[] = {
  {
    {abaja_interfaces__msg__WheelSpeed__FIELD_NAME__front_left, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__WheelSpeed__FIELD_NAME__front_right, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__WheelSpeed__FIELD_NAME__rear_left, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__WheelSpeed__FIELD_NAME__rear_right, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__WheelSpeed__FIELD_NAME__average_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
abaja_interfaces__msg__WheelSpeed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__WheelSpeed__TYPE_NAME, 31, 31},
      {abaja_interfaces__msg__WheelSpeed__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 front_left\n"
  "float32 front_right\n"
  "float32 rear_left\n"
  "float32 rear_right\n"
  "float32 average_speed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__WheelSpeed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__WheelSpeed__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__WheelSpeed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__WheelSpeed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
