// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abaja_interfaces:msg/ModeStatus.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/mode_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abaja_interfaces/msg/detail/mode_status__functions.h"
#include "abaja_interfaces/msg/detail/mode_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace abaja_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
cdr_serialize(
  const abaja_interfaces::msg::ModeStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: autonomous_switch
  cdr << (ros_message.autonomous_switch ? true : false);

  // Member: manual_switch
  cdr << (ros_message.manual_switch ? true : false);

  // Member: lateral_switch
  cdr << (ros_message.lateral_switch ? true : false);

  // Member: longitudinal_switch
  cdr << (ros_message.longitudinal_switch ? true : false);

  // Member: kill_switch
  cdr << (ros_message.kill_switch ? true : false);

  // Member: dbw_ready
  cdr << (ros_message.dbw_ready ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abaja_interfaces::msg::ModeStatus & ros_message)
{
  // Member: autonomous_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.autonomous_switch = tmp ? true : false;
  }

  // Member: manual_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.manual_switch = tmp ? true : false;
  }

  // Member: lateral_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lateral_switch = tmp ? true : false;
  }

  // Member: longitudinal_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.longitudinal_switch = tmp ? true : false;
  }

  // Member: kill_switch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.kill_switch = tmp ? true : false;
  }

  // Member: dbw_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dbw_ready = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
get_serialized_size(
  const abaja_interfaces::msg::ModeStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: autonomous_switch
  {
    size_t item_size = sizeof(ros_message.autonomous_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: manual_switch
  {
    size_t item_size = sizeof(ros_message.manual_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: lateral_switch
  {
    size_t item_size = sizeof(ros_message.lateral_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: longitudinal_switch
  {
    size_t item_size = sizeof(ros_message.longitudinal_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: kill_switch
  {
    size_t item_size = sizeof(ros_message.kill_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dbw_ready
  {
    size_t item_size = sizeof(ros_message.dbw_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
max_serialized_size_ModeStatus(
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

  // Member: autonomous_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: manual_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: lateral_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: longitudinal_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: kill_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dbw_ready
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
    using DataType = abaja_interfaces::msg::ModeStatus;
    is_plain =
      (
      offsetof(DataType, dbw_ready) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
cdr_serialize_key(
  const abaja_interfaces::msg::ModeStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: autonomous_switch
  cdr << (ros_message.autonomous_switch ? true : false);

  // Member: manual_switch
  cdr << (ros_message.manual_switch ? true : false);

  // Member: lateral_switch
  cdr << (ros_message.lateral_switch ? true : false);

  // Member: longitudinal_switch
  cdr << (ros_message.longitudinal_switch ? true : false);

  // Member: kill_switch
  cdr << (ros_message.kill_switch ? true : false);

  // Member: dbw_ready
  cdr << (ros_message.dbw_ready ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
get_serialized_size_key(
  const abaja_interfaces::msg::ModeStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: autonomous_switch
  {
    size_t item_size = sizeof(ros_message.autonomous_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: manual_switch
  {
    size_t item_size = sizeof(ros_message.manual_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: lateral_switch
  {
    size_t item_size = sizeof(ros_message.lateral_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: longitudinal_switch
  {
    size_t item_size = sizeof(ros_message.longitudinal_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: kill_switch
  {
    size_t item_size = sizeof(ros_message.kill_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dbw_ready
  {
    size_t item_size = sizeof(ros_message.dbw_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
max_serialized_size_key_ModeStatus(
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

  // Member: autonomous_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: manual_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lateral_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: longitudinal_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: kill_switch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dbw_ready
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
    using DataType = abaja_interfaces::msg::ModeStatus;
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
  auto typed_message =
    static_cast<const abaja_interfaces::msg::ModeStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ModeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abaja_interfaces::msg::ModeStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ModeStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abaja_interfaces::msg::ModeStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ModeStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ModeStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ModeStatus__callbacks = {
  "abaja_interfaces::msg",
  "ModeStatus",
  _ModeStatus__cdr_serialize,
  _ModeStatus__cdr_deserialize,
  _ModeStatus__get_serialized_size,
  _ModeStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ModeStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ModeStatus__callbacks,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__ModeStatus__get_type_hash,
  &abaja_interfaces__msg__ModeStatus__get_type_description,
  &abaja_interfaces__msg__ModeStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abaja_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abaja_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<abaja_interfaces::msg::ModeStatus>()
{
  return &abaja_interfaces::msg::typesupport_fastrtps_cpp::_ModeStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abaja_interfaces, msg, ModeStatus)() {
  return &abaja_interfaces::msg::typesupport_fastrtps_cpp::_ModeStatus__handle;
}

#ifdef __cplusplus
}
#endif
