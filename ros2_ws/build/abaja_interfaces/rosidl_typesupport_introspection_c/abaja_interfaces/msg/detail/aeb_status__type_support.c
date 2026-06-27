// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abaja_interfaces:msg/AEBStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abaja_interfaces/msg/detail/aeb_status__rosidl_typesupport_introspection_c.h"
#include "abaja_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abaja_interfaces/msg/detail/aeb_status__functions.h"
#include "abaja_interfaces/msg/detail/aeb_status__struct.h"


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abaja_interfaces__msg__AEBStatus__init(message_memory);
}

void abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_fini_function(void * message_memory)
{
  abaja_interfaces__msg__AEBStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_message_member_array[6] = {
  {
    "aeb_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__AEBStatus, aeb_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "warning_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__AEBStatus, warning_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_braking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__AEBStatus, emergency_braking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commanded_brake_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__AEBStatus, commanded_brake_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commanded_throttle_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__AEBStatus, commanded_throttle_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__AEBStatus, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_message_members = {
  "abaja_interfaces__msg",  // message namespace
  "AEBStatus",  // message name
  6,  // number of fields
  sizeof(abaja_interfaces__msg__AEBStatus),
  false,  // has_any_key_member_
  abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_message_member_array,  // message members
  abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_message_type_support_handle = {
  0,
  &abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_message_members,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__AEBStatus__get_type_hash,
  &abaja_interfaces__msg__AEBStatus__get_type_description,
  &abaja_interfaces__msg__AEBStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abaja_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abaja_interfaces, msg, AEBStatus)() {
  if (!abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_message_type_support_handle.typesupport_identifier) {
    abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abaja_interfaces__msg__AEBStatus__rosidl_typesupport_introspection_c__AEBStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
