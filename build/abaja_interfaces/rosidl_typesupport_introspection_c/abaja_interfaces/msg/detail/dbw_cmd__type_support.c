// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abaja_interfaces/msg/detail/dbw_cmd__rosidl_typesupport_introspection_c.h"
#include "abaja_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abaja_interfaces/msg/detail/dbw_cmd__functions.h"
#include "abaja_interfaces/msg/detail/dbw_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abaja_interfaces__msg__DbwCmd__init(message_memory);
}

void abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_fini_function(void * message_memory)
{
  abaja_interfaces__msg__DbwCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_message_member_array[8] = {
  {
    "target_speed_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__DbwCmd, target_speed_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_angle_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__DbwCmd, steering_angle_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "throttle_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__DbwCmd, throttle_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__DbwCmd, brake_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__DbwCmd, enable_throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__DbwCmd, enable_brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enable_steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__DbwCmd, enable_steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__DbwCmd, emergency_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_message_members = {
  "abaja_interfaces__msg",  // message namespace
  "DbwCmd",  // message name
  8,  // number of fields
  sizeof(abaja_interfaces__msg__DbwCmd),
  false,  // has_any_key_member_
  abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_message_member_array,  // message members
  abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_message_type_support_handle = {
  0,
  &abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_message_members,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__DbwCmd__get_type_hash,
  &abaja_interfaces__msg__DbwCmd__get_type_description,
  &abaja_interfaces__msg__DbwCmd__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abaja_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abaja_interfaces, msg, DbwCmd)() {
  if (!abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_message_type_support_handle.typesupport_identifier) {
    abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abaja_interfaces__msg__DbwCmd__rosidl_typesupport_introspection_c__DbwCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
