// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/ControlCmd.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/control_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__ControlCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0x39, 0x80, 0xa8, 0xe3, 0x38, 0xa1, 0x67,
      0x6c, 0x6d, 0x11, 0x59, 0xb5, 0x4c, 0xac, 0x61,
      0xdb, 0xaf, 0x83, 0x15, 0xfa, 0x17, 0x8d, 0x07,
      0x9e, 0x04, 0x26, 0xbc, 0xb9, 0x33, 0xf4, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__ControlCmd__TYPE_NAME[] = "abaja_interfaces/msg/ControlCmd";

// Define type names, field names, and default values
static char abaja_interfaces__msg__ControlCmd__FIELD_NAME__target_speed_mps[] = "target_speed_mps";
static char abaja_interfaces__msg__ControlCmd__FIELD_NAME__steering_angle_deg[] = "steering_angle_deg";
static char abaja_interfaces__msg__ControlCmd__FIELD_NAME__throttle_percent[] = "throttle_percent";
static char abaja_interfaces__msg__ControlCmd__FIELD_NAME__brake_percent[] = "brake_percent";
static char abaja_interfaces__msg__ControlCmd__FIELD_NAME__emergency_stop[] = "emergency_stop";
static char abaja_interfaces__msg__ControlCmd__FIELD_NAME__source[] = "source";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__ControlCmd__FIELDS[] = {
  {
    {abaja_interfaces__msg__ControlCmd__FIELD_NAME__target_speed_mps, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ControlCmd__FIELD_NAME__steering_angle_deg, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ControlCmd__FIELD_NAME__throttle_percent, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ControlCmd__FIELD_NAME__brake_percent, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ControlCmd__FIELD_NAME__emergency_stop, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ControlCmd__FIELD_NAME__source, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
abaja_interfaces__msg__ControlCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__ControlCmd__TYPE_NAME, 31, 31},
      {abaja_interfaces__msg__ControlCmd__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 target_speed_mps\n"
  "float32 steering_angle_deg\n"
  "float32 throttle_percent\n"
  "float32 brake_percent\n"
  "bool emergency_stop\n"
  "string source";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__ControlCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__ControlCmd__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 133, 133},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__ControlCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__ControlCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
