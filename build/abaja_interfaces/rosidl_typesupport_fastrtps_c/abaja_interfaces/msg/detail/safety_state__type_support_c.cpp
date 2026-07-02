// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abaja_interfaces:msg/SafetyState.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/safety_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abaja_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abaja_interfaces/msg/detail/safety_state__struct.h"
#include "abaja_interfaces/msg/detail/safety_state__functions.h"
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

#include "rosidl_runtime_c/string.h"  // reason
#include "rosidl_runtime_c/string_functions.h"  // reason

// forward declare type support functions


using _SafetyState__ros_msg_type = abaja_interfaces__msg__SafetyState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_serialize_abaja_interfaces__msg__SafetyState(
  const abaja_interfaces__msg__SafetyState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: safe_to_drive
  {
    cdr << (ros_message->safe_to_drive ? true : false);
  }

  // Field name: emergency_stop
  {
    cdr << (ros_message->emergency_stop ? true : false);
  }

  // Field name: dbw_allowed
  {
    cdr << (ros_message->dbw_allowed ? true : false);
  }

  // Field name: perception_ok
  {
    cdr << (ros_message->perception_ok ? true : false);
  }

  // Field name: lane_ok
  {
    cdr << (ros_message->lane_ok ? true : false);
  }

  // Field name: aeb_ok
  {
    cdr << (ros_message->aeb_ok ? true : false);
  }

  // Field name: reason
  {
    const rosidl_runtime_c__String * str = &ros_message->reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_deserialize_abaja_interfaces__msg__SafetyState(
  eprosima::fastcdr::Cdr & cdr,
  abaja_interfaces__msg__SafetyState * ros_message)
{
  // Field name: safe_to_drive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->safe_to_drive = tmp ? true : false;
  }

  // Field name: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stop = tmp ? true : false;
  }

  // Field name: dbw_allowed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dbw_allowed = tmp ? true : false;
  }

  // Field name: perception_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->perception_ok = tmp ? true : false;
  }

  // Field name: lane_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lane_ok = tmp ? true : false;
  }

  // Field name: aeb_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aeb_ok = tmp ? true : false;
  }

  // Field name: reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reason.data) {
      rosidl_runtime_c__String__init(&ros_message->reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reason'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t get_serialized_size_abaja_interfaces__msg__SafetyState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SafetyState__ros_msg_type * ros_message = static_cast<const _SafetyState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: safe_to_drive
  {
    size_t item_size = sizeof(ros_message->safe_to_drive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stop
  {
    size_t item_size = sizeof(ros_message->emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dbw_allowed
  {
    size_t item_size = sizeof(ros_message->dbw_allowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: perception_ok
  {
    size_t item_size = sizeof(ros_message->perception_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lane_ok
  {
    size_t item_size = sizeof(ros_message->lane_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aeb_ok
  {
    size_t item_size = sizeof(ros_message->aeb_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reason.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t max_serialized_size_abaja_interfaces__msg__SafetyState(
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

  // Field name: safe_to_drive
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dbw_allowed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: perception_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: lane_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aeb_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reason
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abaja_interfaces__msg__SafetyState;
    is_plain =
      (
      offsetof(DataType, reason) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_serialize_key_abaja_interfaces__msg__SafetyState(
  const abaja_interfaces__msg__SafetyState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: safe_to_drive
  {
    cdr << (ros_message->safe_to_drive ? true : false);
  }

  // Field name: emergency_stop
  {
    cdr << (ros_message->emergency_stop ? true : false);
  }

  // Field name: dbw_allowed
  {
    cdr << (ros_message->dbw_allowed ? true : false);
  }

  // Field name: perception_ok
  {
    cdr << (ros_message->perception_ok ? true : false);
  }

  // Field name: lane_ok
  {
    cdr << (ros_message->lane_ok ? true : false);
  }

  // Field name: aeb_ok
  {
    cdr << (ros_message->aeb_ok ? true : false);
  }

  // Field name: reason
  {
    const rosidl_runtime_c__String * str = &ros_message->reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t get_serialized_size_key_abaja_interfaces__msg__SafetyState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SafetyState__ros_msg_type * ros_message = static_cast<const _SafetyState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: safe_to_drive
  {
    size_t item_size = sizeof(ros_message->safe_to_drive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stop
  {
    size_t item_size = sizeof(ros_message->emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dbw_allowed
  {
    size_t item_size = sizeof(ros_message->dbw_allowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: perception_ok
  {
    size_t item_size = sizeof(ros_message->perception_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lane_ok
  {
    size_t item_size = sizeof(ros_message->lane_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aeb_ok
  {
    size_t item_size = sizeof(ros_message->aeb_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reason.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t max_serialized_size_key_abaja_interfaces__msg__SafetyState(
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
  // Field name: safe_to_drive
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dbw_allowed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: perception_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: lane_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aeb_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reason
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abaja_interfaces__msg__SafetyState;
    is_plain =
      (
      offsetof(DataType, reason) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SafetyState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const abaja_interfaces__msg__SafetyState * ros_message = static_cast<const abaja_interfaces__msg__SafetyState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_abaja_interfaces__msg__SafetyState(ros_message, cdr);
}

static bool _SafetyState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  abaja_interfaces__msg__SafetyState * ros_message = static_cast<abaja_interfaces__msg__SafetyState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_abaja_interfaces__msg__SafetyState(cdr, ros_message);
}

static uint32_t _SafetyState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abaja_interfaces__msg__SafetyState(
      untyped_ros_message, 0));
}

static size_t _SafetyState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abaja_interfaces__msg__SafetyState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SafetyState = {
  "abaja_interfaces::msg",
  "SafetyState",
  _SafetyState__cdr_serialize,
  _SafetyState__cdr_deserialize,
  _SafetyState__get_serialized_size,
  _SafetyState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SafetyState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SafetyState,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__SafetyState__get_type_hash,
  &abaja_interfaces__msg__SafetyState__get_type_description,
  &abaja_interfaces__msg__SafetyState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abaja_interfaces, msg, SafetyState)() {
  return &_SafetyState__type_support;
}

#if defined(__cplusplus)
}
#endif
