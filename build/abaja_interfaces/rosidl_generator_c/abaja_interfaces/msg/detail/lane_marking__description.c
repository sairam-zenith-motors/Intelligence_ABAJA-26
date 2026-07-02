// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/lane_marking__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__LaneMarking__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0xb2, 0x6a, 0x90, 0xa7, 0xcc, 0x2e, 0xe7,
      0x25, 0xf2, 0x2c, 0xfd, 0x74, 0x31, 0x0e, 0xfd,
      0x2e, 0x94, 0xed, 0x0d, 0x43, 0xe9, 0xf0, 0xea,
      0xb9, 0x4d, 0x88, 0x11, 0xea, 0xb7, 0x18, 0x3a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__LaneMarking__TYPE_NAME[] = "abaja_interfaces/msg/LaneMarking";

// Define type names, field names, and default values
static char abaja_interfaces__msg__LaneMarking__FIELD_NAME__left_lane_detected[] = "left_lane_detected";
static char abaja_interfaces__msg__LaneMarking__FIELD_NAME__right_lane_detected[] = "right_lane_detected";
static char abaja_interfaces__msg__LaneMarking__FIELD_NAME__left_lane_x[] = "left_lane_x";
static char abaja_interfaces__msg__LaneMarking__FIELD_NAME__right_lane_x[] = "right_lane_x";
static char abaja_interfaces__msg__LaneMarking__FIELD_NAME__lane_center_x[] = "lane_center_x";
static char abaja_interfaces__msg__LaneMarking__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__LaneMarking__FIELDS[] = {
  {
    {abaja_interfaces__msg__LaneMarking__FIELD_NAME__left_lane_detected, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__LaneMarking__FIELD_NAME__right_lane_detected, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__LaneMarking__FIELD_NAME__left_lane_x, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__LaneMarking__FIELD_NAME__right_lane_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__LaneMarking__FIELD_NAME__lane_center_x, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__LaneMarking__FIELD_NAME__confidence, 10, 10},
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
abaja_interfaces__msg__LaneMarking__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__LaneMarking__TYPE_NAME, 32, 32},
      {abaja_interfaces__msg__LaneMarking__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool left_lane_detected\n"
  "bool right_lane_detected\n"
  "float32 left_lane_x\n"
  "float32 right_lane_x\n"
  "float32 lane_center_x\n"
  "float32 confidence";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__LaneMarking__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__LaneMarking__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 131, 131},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__LaneMarking__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__LaneMarking__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
