// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/AEBStatus.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/aeb_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__AEBStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x6c, 0xff, 0x5e, 0x8a, 0x24, 0x5c, 0x23,
      0xa7, 0x0f, 0x1b, 0x50, 0xc1, 0x10, 0xe0, 0x91,
      0xb0, 0xc3, 0x79, 0x40, 0x32, 0x26, 0x33, 0x43,
      0x49, 0xba, 0xc8, 0xdc, 0xa4, 0xa3, 0x04, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__AEBStatus__TYPE_NAME[] = "abaja_interfaces/msg/AEBStatus";

// Define type names, field names, and default values
static char abaja_interfaces__msg__AEBStatus__FIELD_NAME__aeb_active[] = "aeb_active";
static char abaja_interfaces__msg__AEBStatus__FIELD_NAME__warning_active[] = "warning_active";
static char abaja_interfaces__msg__AEBStatus__FIELD_NAME__emergency_braking[] = "emergency_braking";
static char abaja_interfaces__msg__AEBStatus__FIELD_NAME__commanded_brake_percent[] = "commanded_brake_percent";
static char abaja_interfaces__msg__AEBStatus__FIELD_NAME__commanded_throttle_percent[] = "commanded_throttle_percent";
static char abaja_interfaces__msg__AEBStatus__FIELD_NAME__reason[] = "reason";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__AEBStatus__FIELDS[] = {
  {
    {abaja_interfaces__msg__AEBStatus__FIELD_NAME__aeb_active, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__AEBStatus__FIELD_NAME__warning_active, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__AEBStatus__FIELD_NAME__emergency_braking, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__AEBStatus__FIELD_NAME__commanded_brake_percent, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__AEBStatus__FIELD_NAME__commanded_throttle_percent, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__AEBStatus__FIELD_NAME__reason, 6, 6},
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
abaja_interfaces__msg__AEBStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__AEBStatus__TYPE_NAME, 30, 30},
      {abaja_interfaces__msg__AEBStatus__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool aeb_active\n"
  "bool warning_active\n"
  "bool emergency_braking\n"
  "float32 commanded_brake_percent\n"
  "float32 commanded_throttle_percent\n"
  "string reason";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__AEBStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__AEBStatus__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 140, 140},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__AEBStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__AEBStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
