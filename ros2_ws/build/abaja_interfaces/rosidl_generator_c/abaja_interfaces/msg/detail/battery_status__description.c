// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from abaja_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#include "abaja_interfaces/msg/detail/battery_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__BatteryStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x26, 0xac, 0x8e, 0x5a, 0x6c, 0x77, 0x1c,
      0x6c, 0x87, 0x0e, 0x54, 0x13, 0xa6, 0x95, 0x49,
      0xa0, 0xb9, 0x21, 0xa8, 0x20, 0x6c, 0xfb, 0x1e,
      0xea, 0xa4, 0x9c, 0xda, 0x87, 0x18, 0xac, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char abaja_interfaces__msg__BatteryStatus__TYPE_NAME[] = "abaja_interfaces/msg/BatteryStatus";

// Define type names, field names, and default values
static char abaja_interfaces__msg__BatteryStatus__FIELD_NAME__voltage[] = "voltage";
static char abaja_interfaces__msg__BatteryStatus__FIELD_NAME__current[] = "current";
static char abaja_interfaces__msg__BatteryStatus__FIELD_NAME__percentage[] = "percentage";
static char abaja_interfaces__msg__BatteryStatus__FIELD_NAME__low_voltage_warning[] = "low_voltage_warning";

static rosidl_runtime_c__type_description__Field abaja_interfaces__msg__BatteryStatus__FIELDS[] = {
  {
    {abaja_interfaces__msg__BatteryStatus__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__BatteryStatus__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__BatteryStatus__FIELD_NAME__percentage, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {abaja_interfaces__msg__BatteryStatus__FIELD_NAME__low_voltage_warning, 19, 19},
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
abaja_interfaces__msg__BatteryStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {abaja_interfaces__msg__BatteryStatus__TYPE_NAME, 34, 34},
      {abaja_interfaces__msg__BatteryStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 voltage\n"
  "float32 current\n"
  "float32 percentage\n"
  "bool low_voltage_warning";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__BatteryStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {abaja_interfaces__msg__BatteryStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 76, 76},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__BatteryStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *abaja_interfaces__msg__BatteryStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
