// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abaja_interfaces:msg/ObjectDistanceArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abaja_interfaces/msg/detail/object_distance_array__rosidl_typesupport_introspection_c.h"
#include "abaja_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abaja_interfaces/msg/detail/object_distance_array__functions.h"
#include "abaja_interfaces/msg/detail/object_distance_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "abaja_interfaces/msg/object_distance.h"
// Member `objects`
#include "abaja_interfaces/msg/detail/object_distance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abaja_interfaces__msg__ObjectDistanceArray__init(message_memory);
}

void abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_fini_function(void * message_memory)
{
  abaja_interfaces__msg__ObjectDistanceArray__fini(message_memory);
}

size_t abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__size_function__ObjectDistanceArray__objects(
  const void * untyped_member)
{
  const abaja_interfaces__msg__ObjectDistance__Sequence * member =
    (const abaja_interfaces__msg__ObjectDistance__Sequence *)(untyped_member);
  return member->size;
}

const void * abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__get_const_function__ObjectDistanceArray__objects(
  const void * untyped_member, size_t index)
{
  const abaja_interfaces__msg__ObjectDistance__Sequence * member =
    (const abaja_interfaces__msg__ObjectDistance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__get_function__ObjectDistanceArray__objects(
  void * untyped_member, size_t index)
{
  abaja_interfaces__msg__ObjectDistance__Sequence * member =
    (abaja_interfaces__msg__ObjectDistance__Sequence *)(untyped_member);
  return &member->data[index];
}

void abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__fetch_function__ObjectDistanceArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const abaja_interfaces__msg__ObjectDistance * item =
    ((const abaja_interfaces__msg__ObjectDistance *)
    abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__get_const_function__ObjectDistanceArray__objects(untyped_member, index));
  abaja_interfaces__msg__ObjectDistance * value =
    (abaja_interfaces__msg__ObjectDistance *)(untyped_value);
  *value = *item;
}

void abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__assign_function__ObjectDistanceArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  abaja_interfaces__msg__ObjectDistance * item =
    ((abaja_interfaces__msg__ObjectDistance *)
    abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__get_function__ObjectDistanceArray__objects(untyped_member, index));
  const abaja_interfaces__msg__ObjectDistance * value =
    (const abaja_interfaces__msg__ObjectDistance *)(untyped_value);
  *item = *value;
}

bool abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__resize_function__ObjectDistanceArray__objects(
  void * untyped_member, size_t size)
{
  abaja_interfaces__msg__ObjectDistance__Sequence * member =
    (abaja_interfaces__msg__ObjectDistance__Sequence *)(untyped_member);
  abaja_interfaces__msg__ObjectDistance__Sequence__fini(member);
  return abaja_interfaces__msg__ObjectDistance__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__ObjectDistanceArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abaja_interfaces__msg__ObjectDistanceArray, objects),  // bytes offset in struct
    NULL,  // default value
    abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__size_function__ObjectDistanceArray__objects,  // size() function pointer
    abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__get_const_function__ObjectDistanceArray__objects,  // get_const(index) function pointer
    abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__get_function__ObjectDistanceArray__objects,  // get(index) function pointer
    abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__fetch_function__ObjectDistanceArray__objects,  // fetch(index, &value) function pointer
    abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__assign_function__ObjectDistanceArray__objects,  // assign(index, value) function pointer
    abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__resize_function__ObjectDistanceArray__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_members = {
  "abaja_interfaces__msg",  // message namespace
  "ObjectDistanceArray",  // message name
  2,  // number of fields
  sizeof(abaja_interfaces__msg__ObjectDistanceArray),
  false,  // has_any_key_member_
  abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_member_array,  // message members
  abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_init_function,  // function to initialize message memory (memory has to be allocated)
  abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_type_support_handle = {
  0,
  &abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_members,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__ObjectDistanceArray__get_type_hash,
  &abaja_interfaces__msg__ObjectDistanceArray__get_type_description,
  &abaja_interfaces__msg__ObjectDistanceArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abaja_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abaja_interfaces, msg, ObjectDistanceArray)() {
  abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abaja_interfaces, msg, ObjectDistance)();
  if (!abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_type_support_handle.typesupport_identifier) {
    abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abaja_interfaces__msg__ObjectDistanceArray__rosidl_typesupport_introspection_c__ObjectDistanceArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
