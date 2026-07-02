// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/DbwStatus.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/dbw_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__DbwStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x8b, 0xec, 0x74, 0xe8, 0xe3, 0xc9, 0x14,
      0x22, 0x47, 0x0e, 0x68, 0x9a, 0x9e, 0x90, 0x0d,
      0x30, 0xa5, 0x85, 0x4a, 0xe3, 0xde, 0x95, 0xc9,
      0x48, 0xf4, 0xc2, 0x31, 0x51, 0x0d, 0x4c, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__DbwStatus__TYPE_NAME[] = "abaja_interfaces/msg/DbwStatus";

// Define type names, field names, and default values
static char abaja_interfaces__msg__DbwStatus__FIELD_NAME__dbw_enabled[] = "dbw_enabled";
static char abaja_interfaces__msg__DbwStatus__FIELD_NAME__throttle_enabled[] = "throttle_enabled";
static char abaja_interfaces__msg__DbwStatus__FIELD_NAME__brake_enabled[] = "brake_enabled";
static char abaja_interfaces__msg__DbwStatus__FIELD_NAME__steering_enabled[] = "steering_enabled";
static char abaja_interfaces__msg__DbwStatus__FIELD_NAME__fault_detected[] = "fault_detected";
static char abaja_interfaces__msg__DbwStatus__FIELD_NAME__fault_reason[] = "fault_reason";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__DbwStatus__FIELDS[] = {
  {
    {abaja_interfaces__msg__DbwStatus__FIELD_NAME__dbw_enabled, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwStatus__FIELD_NAME__throttle_enabled, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwStatus__FIELD_NAME__brake_enabled, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwStatus__FIELD_NAME__steering_enabled, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwStatus__FIELD_NAME__fault_detected, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__DbwStatus__FIELD_NAME__fault_reason, 12, 12},
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
abaja_interfaces__msg__DbwStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__DbwStatus__TYPE_NAME, 30, 30},
      {abaja_interfaces__msg__DbwStatus__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool dbw_enabled\n"
  "bool throttle_enabled\n"
  "bool brake_enabled\n"
  "bool steering_enabled\n"
  "bool fault_detected\n"
  "string fault_reason";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__DbwStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__DbwStatus__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 120, 120},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__DbwStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__DbwStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
