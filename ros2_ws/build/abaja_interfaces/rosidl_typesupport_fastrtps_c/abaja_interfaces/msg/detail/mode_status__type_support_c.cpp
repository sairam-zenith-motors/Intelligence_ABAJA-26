// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abaja_interfaces:msg/ModeStatus.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/mode_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abaja_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abaja_interfaces/msg/detail/mode_status__struct.h"
#include "abaja_interfaces/msg/detail/mode_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ModeStatus__ros_msg_type = abaja_interfaces__msg__ModeStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_serialize_abaja_interfaces__msg__ModeStatus(
  const abaja_interfaces__msg__ModeStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: autonomous_switch
  {
    cdr << (ros_message->autonomous_switch ? true : false);
  }

  // Field name: manual_switch
  {
    cdr << (ros_message->manual_switch ? true : false);
  }

  // Field name: lateral_switch
  {
    cdr << (ros_message->lateral_switch ? true : false);
  }

  // Field name: longitudinal_switch
  {
    cdr << (ros_message->longitudinal_switch ? true : false);
  }

  // Field name: kill_switch
  {
    cdr << (ros_message->kill_switch ? true : false);
  }

  // Field name: dbw_ready
  {
    cdr << (ros_message->dbw_ready ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_deserialize_abaja_interfaces__msg__ModeStatus(
  eprosima::fastcdr::Cdr & cdr,
  abaja_interfaces__msg__ModeStatus * ros_message)
{
  // Field name: autonomous_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->autonomous_switch = tmp ? true : false;
  }

  // Field name: manual_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->manual_switch = tmp ? true : false;
  }

  // Field name: lateral_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lateral_switch = tmp ? true : false;
  }

  // Field name: longitudinal_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->longitudinal_switch = tmp ? true : false;
  }

  // Field name: kill_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->kill_switch = tmp ? true : false;
  }

  // Field name: dbw_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dbw_ready = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t get_serialized_size_abaja_interfaces__msg__ModeStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ModeStatus__ros_msg_type * ros_message = static_cast<const _ModeStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: autonomous_switch
  {
    size_t item_size = sizeof(ros_message->autonomous_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: manual_switch
  {
    size_t item_size = sizeof(ros_message->manual_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lateral_switch
  {
    size_t item_size = sizeof(ros_message->lateral_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitudinal_switch
  {
    size_t item_size = sizeof(ros_message->longitudinal_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kill_switch
  {
    size_t item_size = sizeof(ros_message->kill_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dbw_ready
  {
    size_t item_size = sizeof(ros_message->dbw_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t max_serialized_size_abaja_interfaces__msg__ModeStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: autonomous_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: manual_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: lateral_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: longitudinal_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: kill_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dbw_ready
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abaja_interfaces__msg__ModeStatus;
    is_plain =
      (
      offsetof(DataType, dbw_ready) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_serialize_key_abaja_interfaces__msg__ModeStatus(
  const abaja_interfaces__msg__ModeStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: autonomous_switch
  {
    cdr << (ros_message->autonomous_switch ? true : false);
  }

  // Field name: manual_switch
  {
    cdr << (ros_message->manual_switch ? true : false);
  }

  // Field name: lateral_switch
  {
    cdr << (ros_message->lateral_switch ? true : false);
  }

  // Field name: longitudinal_switch
  {
    cdr << (ros_message->longitudinal_switch ? true : false);
  }

  // Field name: kill_switch
  {
    cdr << (ros_message->kill_switch ? true : false);
  }

  // Field name: dbw_ready
  {
    cdr << (ros_message->dbw_ready ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t get_serialized_size_key_abaja_interfaces__msg__ModeStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ModeStatus__ros_msg_type * ros_message = static_cast<const _ModeStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: autonomous_switch
  {
    size_t item_size = sizeof(ros_message->autonomous_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: manual_switch
  {
    size_t item_size = sizeof(ros_message->manual_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lateral_switch
  {
    size_t item_size = sizeof(ros_message->lateral_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitudinal_switch
  {
    size_t item_size = sizeof(ros_message->longitudinal_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: kill_switch
  {
    size_t item_size = sizeof(ros_message->kill_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dbw_ready
  {
    size_t item_size = sizeof(ros_message->dbw_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t max_serialized_size_key_abaja_interfaces__msg__ModeStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: autonomous_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: manual_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: lateral_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: longitudinal_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: kill_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dbw_ready
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abaja_interfaces__msg__ModeStatus;
    is_plain =
      (
      offsetof(DataType, dbw_ready) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ModeStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const abaja_interfaces__msg__ModeStatus * ros_message = static_cast<const abaja_interfaces__msg__ModeStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_abaja_interfaces__msg__ModeStatus(ros_message, cdr);
}

static bool _ModeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  abaja_interfaces__msg__ModeStatus * ros_message = static_cast<abaja_interfaces__msg__ModeStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_abaja_interfaces__msg__ModeStatus(cdr, ros_message);
}

static uint32_t _ModeStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abaja_interfaces__msg__ModeStatus(
      untyped_ros_message, 0));
}

static size_t _ModeStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abaja_interfaces__msg__ModeStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ModeStatus = {
  "abaja_interfaces::msg",
  "ModeStatus",
  _ModeStatus__cdr_serialize,
  _ModeStatus__cdr_deserialize,
  _ModeStatus__get_serialized_size,
  _ModeStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ModeStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ModeStatus,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__ModeStatus__get_type_hash,
  &abaja_interfaces__msg__ModeStatus__get_type_description,
  &abaja_interfaces__msg__ModeStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abaja_interfaces, msg, ModeStatus)() {
  return &_ModeStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
