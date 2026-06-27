// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/SteeringFeedback.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/steering_feedback__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__SteeringFeedback__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0xad, 0xbf, 0xbc, 0x8b, 0x3f, 0x4e, 0xc8,
      0xc2, 0x7c, 0x8b, 0x9c, 0x3c, 0x40, 0x65, 0xe3,
      0xa6, 0x85, 0xa1, 0xcc, 0xd7, 0x16, 0x43, 0x41,
      0x0a, 0x40, 0x9d, 0x49, 0xe1, 0x89, 0xa9, 0xa7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__SteeringFeedback__TYPE_NAME[] = "abaja_interfaces/msg/SteeringFeedback";

// Define type names, field names, and default values
static char abaja_interfaces__msg__SteeringFeedback__FIELD_NAME__target_angle_deg[] = "target_angle_deg";
static char abaja_interfaces__msg__SteeringFeedback__FIELD_NAME__actual_angle_deg[] = "actual_angle_deg";
static char abaja_interfaces__msg__SteeringFeedback__FIELD_NAME__error_deg[] = "error_deg";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__SteeringFeedback__FIELDS[] = {
  {
    {abaja_interfaces__msg__SteeringFeedback__FIELD_NAME__target_angle_deg, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__SteeringFeedback__FIELD_NAME__actual_angle_deg, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__SteeringFeedback__FIELD_NAME__error_deg, 9, 9},
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
abaja_interfaces__msg__SteeringFeedback__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__SteeringFeedback__TYPE_NAME, 37, 37},
      {abaja_interfaces__msg__SteeringFeedback__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 target_angle_deg\n"
  "float32 actual_angle_deg\n"
  "float32 error_deg";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__SteeringFeedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__SteeringFeedback__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 68, 68},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__SteeringFeedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__SteeringFeedback__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
