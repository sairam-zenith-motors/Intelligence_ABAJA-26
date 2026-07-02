// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/ModeStatus.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/mode_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__ModeStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x56, 0x32, 0x32, 0xc5, 0x93, 0xc8, 0xd1,
      0x5d, 0x3f, 0x2c, 0xce, 0xec, 0x50, 0x79, 0xf6,
      0xa8, 0x0c, 0xb1, 0x2e, 0xcf, 0xba, 0x95, 0xf9,
      0xef, 0x22, 0xab, 0x79, 0x3c, 0x8c, 0x41, 0xf5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__ModeStatus__TYPE_NAME[] = "abaja_interfaces/msg/ModeStatus";

// Define type names, field names, and default values
static char abaja_interfaces__msg__ModeStatus__FIELD_NAME__autonomous_switch[] = "autonomous_switch";
static char abaja_interfaces__msg__ModeStatus__FIELD_NAME__manual_switch[] = "manual_switch";
static char abaja_interfaces__msg__ModeStatus__FIELD_NAME__lateral_switch[] = "lateral_switch";
static char abaja_interfaces__msg__ModeStatus__FIELD_NAME__longitudinal_switch[] = "longitudinal_switch";
static char abaja_interfaces__msg__ModeStatus__FIELD_NAME__kill_switch[] = "kill_switch";
static char abaja_interfaces__msg__ModeStatus__FIELD_NAME__dbw_ready[] = "dbw_ready";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__ModeStatus__FIELDS[] = {
  {
    {abaja_interfaces__msg__ModeStatus__FIELD_NAME__autonomous_switch, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ModeStatus__FIELD_NAME__manual_switch, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ModeStatus__FIELD_NAME__lateral_switch, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ModeStatus__FIELD_NAME__longitudinal_switch, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ModeStatus__FIELD_NAME__kill_switch, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__ModeStatus__FIELD_NAME__dbw_ready, 9, 9},
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
abaja_interfaces__msg__ModeStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__ModeStatus__TYPE_NAME, 31, 31},
      {abaja_interfaces__msg__ModeStatus__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool autonomous_switch\n"
  "bool manual_switch\n"
  "bool lateral_switch\n"
  "bool longitudinal_switch\n"
  "bool kill_switch\n"
  "bool dbw_ready";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__ModeStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__ModeStatus__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 119, 119},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__ModeStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__ModeStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
