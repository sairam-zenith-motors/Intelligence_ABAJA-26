// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/SafetyState.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/safety_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__SafetyState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0xa9, 0xdf, 0x2d, 0x90, 0x02, 0x9c, 0xf0,
      0xc9, 0x45, 0xb1, 0xe0, 0x9f, 0x2e, 0x7a, 0x23,
      0xbf, 0xfd, 0x3e, 0x3b, 0x3a, 0x50, 0xc3, 0x51,
      0xd9, 0x7f, 0xdc, 0x73, 0xea, 0x81, 0x0a, 0x81,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__SafetyState__TYPE_NAME[] = "abaja_interfaces/msg/SafetyState";

// Define type names, field names, and default values
static char abaja_interfaces__msg__SafetyState__FIELD_NAME__safe_to_drive[] = "safe_to_drive";
static char abaja_interfaces__msg__SafetyState__FIELD_NAME__emergency_stop[] = "emergency_stop";
static char abaja_interfaces__msg__SafetyState__FIELD_NAME__dbw_allowed[] = "dbw_allowed";
static char abaja_interfaces__msg__SafetyState__FIELD_NAME__perception_ok[] = "perception_ok";
static char abaja_interfaces__msg__SafetyState__FIELD_NAME__lane_ok[] = "lane_ok";
static char abaja_interfaces__msg__SafetyState__FIELD_NAME__aeb_ok[] = "aeb_ok";
static char abaja_interfaces__msg__SafetyState__FIELD_NAME__reason[] = "reason";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__SafetyState__FIELDS[] = {
  {
    {abaja_interfaces__msg__SafetyState__FIELD_NAME__safe_to_drive, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__SafetyState__FIELD_NAME__emergency_stop, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__SafetyState__FIELD_NAME__dbw_allowed, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__SafetyState__FIELD_NAME__perception_ok, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__SafetyState__FIELD_NAME__lane_ok, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__SafetyState__FIELD_NAME__aeb_ok, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__SafetyState__FIELD_NAME__reason, 6, 6},
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
abaja_interfaces__msg__SafetyState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__SafetyState__TYPE_NAME, 32, 32},
      {abaja_interfaces__msg__SafetyState__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool safe_to_drive\n"
  "bool emergency_stop\n"
  "bool dbw_allowed\n"
  "bool perception_ok\n"
  "bool lane_ok\n"
  "bool aeb_ok\n"
  "string reason";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__SafetyState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__SafetyState__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 114, 114},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__SafetyState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__SafetyState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
