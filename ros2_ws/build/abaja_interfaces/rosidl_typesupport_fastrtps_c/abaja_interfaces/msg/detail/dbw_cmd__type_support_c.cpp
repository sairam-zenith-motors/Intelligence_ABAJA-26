// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/dbw_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abaja_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abaja_interfaces/msg/detail/dbw_cmd__struct.h"
#include "abaja_interfaces/msg/detail/dbw_cmd__functions.h"
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


using _DbwCmd__ros_msg_type = abaja_interfaces__msg__DbwCmd;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_serialize_abaja_interfaces__msg__DbwCmd(
  const abaja_interfaces__msg__DbwCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_speed_mps
  {
    cdr << ros_message->target_speed_mps;
  }

  // Field name: steering_angle_deg
  {
    cdr << ros_message->steering_angle_deg;
  }

  // Field name: throttle_percent
  {
    cdr << ros_message->throttle_percent;
  }

  // Field name: brake_percent
  {
    cdr << ros_message->brake_percent;
  }

  // Field name: enable_throttle
  {
    cdr << (ros_message->enable_throttle ? true : false);
  }

  // Field name: enable_brake
  {
    cdr << (ros_message->enable_brake ? true : false);
  }

  // Field name: enable_steering
  {
    cdr << (ros_message->enable_steering ? true : false);
  }

  // Field name: emergency_stop
  {
    cdr << (ros_message->emergency_stop ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_deserialize_abaja_interfaces__msg__DbwCmd(
  eprosima::fastcdr::Cdr & cdr,
  abaja_interfaces__msg__DbwCmd * ros_message)
{
  // Field name: target_speed_mps
  {
    cdr >> ros_message->target_speed_mps;
  }

  // Field name: steering_angle_deg
  {
    cdr >> ros_message->steering_angle_deg;
  }

  // Field name: throttle_percent
  {
    cdr >> ros_message->throttle_percent;
  }

  // Field name: brake_percent
  {
    cdr >> ros_message->brake_percent;
  }

  // Field name: enable_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_throttle = tmp ? true : false;
  }

  // Field name: enable_brake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_brake = tmp ? true : false;
  }

  // Field name: enable_steering
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_steering = tmp ? true : false;
  }

  // Field name: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stop = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t get_serialized_size_abaja_interfaces__msg__DbwCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DbwCmd__ros_msg_type * ros_message = static_cast<const _DbwCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_speed_mps
  {
    size_t item_size = sizeof(ros_message->target_speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: steering_angle_deg
  {
    size_t item_size = sizeof(ros_message->steering_angle_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle_percent
  {
    size_t item_size = sizeof(ros_message->throttle_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: brake_percent
  {
    size_t item_size = sizeof(ros_message->brake_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enable_throttle
  {
    size_t item_size = sizeof(ros_message->enable_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enable_brake
  {
    size_t item_size = sizeof(ros_message->enable_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enable_steering
  {
    size_t item_size = sizeof(ros_message->enable_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stop
  {
    size_t item_size = sizeof(ros_message->emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t max_serialized_size_abaja_interfaces__msg__DbwCmd(
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

  // Field name: target_speed_mps
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: steering_angle_deg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: brake_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: enable_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: enable_brake
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: enable_steering
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abaja_interfaces__msg__DbwCmd;
    is_plain =
      (
      offsetof(DataType, emergency_stop) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_serialize_key_abaja_interfaces__msg__DbwCmd(
  const abaja_interfaces__msg__DbwCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: target_speed_mps
  {
    cdr << ros_message->target_speed_mps;
  }

  // Field name: steering_angle_deg
  {
    cdr << ros_message->steering_angle_deg;
  }

  // Field name: throttle_percent
  {
    cdr << ros_message->throttle_percent;
  }

  // Field name: brake_percent
  {
    cdr << ros_message->brake_percent;
  }

  // Field name: enable_throttle
  {
    cdr << (ros_message->enable_throttle ? true : false);
  }

  // Field name: enable_brake
  {
    cdr << (ros_message->enable_brake ? true : false);
  }

  // Field name: enable_steering
  {
    cdr << (ros_message->enable_steering ? true : false);
  }

  // Field name: emergency_stop
  {
    cdr << (ros_message->emergency_stop ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t get_serialized_size_key_abaja_interfaces__msg__DbwCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DbwCmd__ros_msg_type * ros_message = static_cast<const _DbwCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: target_speed_mps
  {
    size_t item_size = sizeof(ros_message->target_speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: steering_angle_deg
  {
    size_t item_size = sizeof(ros_message->steering_angle_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: throttle_percent
  {
    size_t item_size = sizeof(ros_message->throttle_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: brake_percent
  {
    size_t item_size = sizeof(ros_message->brake_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enable_throttle
  {
    size_t item_size = sizeof(ros_message->enable_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enable_brake
  {
    size_t item_size = sizeof(ros_message->enable_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: enable_steering
  {
    size_t item_size = sizeof(ros_message->enable_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: emergency_stop
  {
    size_t item_size = sizeof(ros_message->emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t max_serialized_size_key_abaja_interfaces__msg__DbwCmd(
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
  // Field name: target_speed_mps
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: steering_angle_deg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: throttle_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: brake_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: enable_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: enable_brake
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: enable_steering
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abaja_interfaces__msg__DbwCmd;
    is_plain =
      (
      offsetof(DataType, emergency_stop) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DbwCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const abaja_interfaces__msg__DbwCmd * ros_message = static_cast<const abaja_interfaces__msg__DbwCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_abaja_interfaces__msg__DbwCmd(ros_message, cdr);
}

static bool _DbwCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  abaja_interfaces__msg__DbwCmd * ros_message = static_cast<abaja_interfaces__msg__DbwCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_abaja_interfaces__msg__DbwCmd(cdr, ros_message);
}

static uint32_t _DbwCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abaja_interfaces__msg__DbwCmd(
      untyped_ros_message, 0));
}

static size_t _DbwCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abaja_interfaces__msg__DbwCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DbwCmd = {
  "abaja_interfaces::msg",
  "DbwCmd",
  _DbwCmd__cdr_serialize,
  _DbwCmd__cdr_deserialize,
  _DbwCmd__get_serialized_size,
  _DbwCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DbwCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DbwCmd,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__DbwCmd__get_type_hash,
  &abaja_interfaces__msg__DbwCmd__get_type_description,
  &abaja_interfaces__msg__DbwCmd__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abaja_interfaces, msg, DbwCmd)() {
  return &_DbwCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
