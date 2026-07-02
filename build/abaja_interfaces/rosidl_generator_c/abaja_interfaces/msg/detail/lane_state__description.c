// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/LaneState.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/lane_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__LaneState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0xa9, 0xb8, 0x31, 0x77, 0x48, 0x8d, 0x57,
      0xe2, 0x95, 0xc4, 0x48, 0x2d, 0x75, 0x12, 0xc5,
      0x9d, 0x8f, 0xbd, 0xd4, 0x8a, 0x1c, 0xb6, 0xe6,
      0x7c, 0xcc, 0x77, 0x10, 0x3a, 0xc8, 0x07, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__LaneState__TYPE_NAME[] = "abaja_interfaces/msg/LaneState";

// Define type names, field names, and default values
static char abaja_interfaces__msg__LaneState__FIELD_NAME__lane_available[] = "lane_available";
static char abaja_interfaces__msg__LaneState__FIELD_NAME__lateral_error_m[] = "lateral_error_m";
static char abaja_interfaces__msg__LaneState__FIELD_NAME__heading_error_deg[] = "heading_error_deg";
static char abaja_interfaces__msg__LaneState__FIELD_NAME__lane_confidence[] = "lane_confidence";
static char abaja_interfaces__msg__LaneState__FIELD_NAME__status_text[] = "status_text";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__LaneState__FIELDS[] = {
  {
    {abaja_interfaces__msg__LaneState__FIELD_NAME__lane_available, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__LaneState__FIELD_NAME__lateral_error_m, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__LaneState__FIELD_NAME__heading_error_deg, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__LaneState__FIELD_NAME__lane_confidence, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__LaneState__FIELD_NAME__status_text, 11, 11},
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
abaja_interfaces__msg__LaneState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__LaneState__TYPE_NAME, 30, 30},
      {abaja_interfaces__msg__LaneState__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool lane_available\n"
  "float32 lateral_error_m\n"
  "float32 heading_error_deg\n"
  "float32 lane_confidence\n"
  "string status_text";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__LaneState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__LaneState__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 113, 113},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__LaneState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__LaneState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
