// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/TTCStatus.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/ttc_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__TTCStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0xb5, 0xf5, 0x5d, 0x6d, 0xe8, 0xd1, 0x2a,
      0x20, 0x8f, 0xb4, 0x21, 0xab, 0x68, 0x51, 0xd4,
      0xbb, 0x9f, 0x71, 0x57, 0xa7, 0xf5, 0x65, 0x5f,
      0x28, 0x9b, 0xd9, 0x99, 0xa1, 0x2f, 0xa6, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__TTCStatus__TYPE_NAME[] = "abaja_interfaces/msg/TTCStatus";

// Define type names, field names, and default values
static char abaja_interfaces__msg__TTCStatus__FIELD_NAME__obstacle_detected[] = "obstacle_detected";
static char abaja_interfaces__msg__TTCStatus__FIELD_NAME__object_class[] = "object_class";
static char abaja_interfaces__msg__TTCStatus__FIELD_NAME__distance_m[] = "distance_m";
static char abaja_interfaces__msg__TTCStatus__FIELD_NAME__ego_speed_mps[] = "ego_speed_mps";
static char abaja_interfaces__msg__TTCStatus__FIELD_NAME__ttc_seconds[] = "ttc_seconds";
static char abaja_interfaces__msg__TTCStatus__FIELD_NAME__risk_level[] = "risk_level";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__TTCStatus__FIELDS[] = {
  {
    {abaja_interfaces__msg__TTCStatus__FIELD_NAME__obstacle_detected, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__TTCStatus__FIELD_NAME__object_class, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__TTCStatus__FIELD_NAME__distance_m, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__TTCStatus__FIELD_NAME__ego_speed_mps, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__TTCStatus__FIELD_NAME__ttc_seconds, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__TTCStatus__FIELD_NAME__risk_level, 10, 10},
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
abaja_interfaces__msg__TTCStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__TTCStatus__TYPE_NAME, 30, 30},
      {abaja_interfaces__msg__TTCStatus__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool obstacle_detected\n"
  "string object_class\n"
  "float32 distance_m\n"
  "float32 ego_speed_mps\n"
  "float32 ttc_seconds\n"
  "string risk_level";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__TTCStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__TTCStatus__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 122, 122},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__TTCStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__TTCStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
