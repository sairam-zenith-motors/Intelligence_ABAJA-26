// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/dbw_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__DbwCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb0, 0x01, 0xdd, 0x86, 0x49, 0xa5, 0x7b, 0x00,
      0x93, 0x42, 0xb4, 0x31, 0xe7, 0x92, 0x06, 0x9a,
      0x51, 0xa1, 0x09, 0xf8, 0xc6, 0x53, 0x2e, 0x77,
      0x56, 0xe8, 0x43, 0xb0, 0x9c, 0xd2, 0xc1, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__DbwCmd__TYPE_NAME[] = "abaja_interfaces/msg/DbwCmd";

// Define type names, field names, and default values
static char abaja_interfaces__msg__DbwCmd__FIELD_NAME__target_speed_mps[] = "target_speed_mps";
static char abaja_interfaces__msg__DbwCmd__FIELD_NAME__steering_angle_deg[] = "steering_angle_deg";
static char abaja_interfaces__msg__DbwCmd__FIELD_NAME__throttle_percent[] = "throttle_percent";
static char abaja_interfaces__msg__DbwCmd__FIELD_NAME__brake_percent[] = "brake_percent";
static char abaja_interfaces__msg__DbwCmd__FIELD_NAME__enable_throttle[] = "enable_throttle";
static char abaja_interfaces__msg__DbwCmd__FIELD_NAME__enable_brake[] = "enable_brake";
static char abaja_interfaces__msg__DbwCmd__FIELD_NAME__enable_steering[] = "enable_steering";
static char abaja_interfaces__msg__DbwCmd__FIELD_NAME__emergency_stop[] = "emergency_stop";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__DbwCmd__FIELDS[] = {
  {
    {abaja_interfaces__msg__DbwCmd__FIELD_NAME__target_speed_mps, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwCmd__FIELD_NAME__steering_angle_deg, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwCmd__FIELD_NAME__throttle_percent, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwCmd__FIELD_NAME__brake_percent, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwCmd__FIELD_NAME__enable_throttle, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwCmd__FIELD_NAME__enable_brake, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwCmd__FIELD_NAME__enable_steering, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwCmd__FIELD_NAME__emergency_stop, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
abaja_interfaces__msg__DbwCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__DbwCmd__TYPE_NAME, 27, 27},
      {abaja_interfaces__msg__DbwCmd__FIELDS, 8, 8},
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
  "bool enable_throttle\n"
  "bool enable_brake\n"
  "bool enable_steering\n"
  "bool emergency_stop";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__DbwCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__DbwCmd__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 179, 179},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__DbwCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__DbwCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
