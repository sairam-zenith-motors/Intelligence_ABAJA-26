// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/vehicle_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__VehicleState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0x4b, 0x98, 0x9e, 0x9b, 0x8a, 0x8f, 0xc4,
      0x5e, 0xc2, 0xf2, 0x1f, 0x64, 0xde, 0xfa, 0x9d,
      0x24, 0x34, 0x72, 0xfc, 0x4c, 0x4c, 0xa7, 0x73,
      0x93, 0x6d, 0x74, 0xbe, 0xe8, 0x8f, 0x03, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__VehicleState__TYPE_NAME[] = "abaja_interfaces/msg/VehicleState";

// Define type names, field names, and default values
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__speed_mps[] = "speed_mps";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__steering_angle_deg[] = "steering_angle_deg";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__brake_position[] = "brake_position";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__throttle_position[] = "throttle_position";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__battery_voltage[] = "battery_voltage";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__autonomous_mode[] = "autonomous_mode";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__manual_mode[] = "manual_mode";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__lateral_enabled[] = "lateral_enabled";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__longitudinal_enabled[] = "longitudinal_enabled";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__emergency_stop[] = "emergency_stop";
static char abaja_interfaces__msg__VehicleState__FIELD_NAME__status_text[] = "status_text";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__VehicleState__FIELDS[] = {
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__speed_mps, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__steering_angle_deg, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__brake_position, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__throttle_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__battery_voltage, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__autonomous_mode, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__manual_mode, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__lateral_enabled, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__longitudinal_enabled, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__emergency_stop, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__VehicleState__FIELD_NAME__status_text, 11, 11},
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
abaja_interfaces__msg__VehicleState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__VehicleState__TYPE_NAME, 33, 33},
      {abaja_interfaces__msg__VehicleState__FIELDS, 11, 11},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 speed_mps\n"
  "float32 steering_angle_deg\n"
  "float32 brake_position\n"
  "float32 throttle_position\n"
  "float32 battery_voltage\n"
  "bool autonomous_mode\n"
  "bool manual_mode\n"
  "bool lateral_enabled\n"
  "bool longitudinal_enabled\n"
  "bool emergency_stop\n"
  "string status_text";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__VehicleState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__VehicleState__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 242, 242},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__VehicleState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__VehicleState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
