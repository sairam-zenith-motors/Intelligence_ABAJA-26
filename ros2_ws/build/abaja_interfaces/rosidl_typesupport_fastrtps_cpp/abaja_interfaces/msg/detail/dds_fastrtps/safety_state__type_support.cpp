// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abaja_interfaces:msg/SafetyState.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/safety_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abaja_interfaces/msg/detail/safety_state__functions.h"
#include "abaja_interfaces/msg/detail/safety_state__struct.hpp"

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
  const abaja_interfaces::msg::SafetyState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: safe_to_drive
  cdr << (ros_message.safe_to_drive ? true : false);

  // Member: emergency_stop
  cdr << (ros_message.emergency_stop ? true : false);

  // Member: dbw_allowed
  cdr << (ros_message.dbw_allowed ? true : false);

  // Member: perception_ok
  cdr << (ros_message.perception_ok ? true : false);

  // Member: lane_ok
  cdr << (ros_message.lane_ok ? true : false);

  // Member: aeb_ok
  cdr << (ros_message.aeb_ok ? true : false);

  // Member: reason
  cdr << ros_message.reason;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abaja_interfaces::msg::SafetyState & ros_message)
{
  // Member: safe_to_drive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.safe_to_drive = tmp ? true : false;
  }

  // Member: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_stop = tmp ? true : false;
  }

  // Member: dbw_allowed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dbw_allowed = tmp ? true : false;
  }

  // Member: perception_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.perception_ok = tmp ? true : false;
  }

  // Member: lane_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lane_ok = tmp ? true : false;
  }

  // Member: aeb_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aeb_ok = tmp ? true : false;
  }

  // Member: reason
  cdr >> ros_message.reason;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
get_serialized_size(
  const abaja_interfaces::msg::SafetyState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: safe_to_drive
  {
    size_t item_size = sizeof(ros_message.safe_to_drive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stop
  {
    size_t item_size = sizeof(ros_message.emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dbw_allowed
  {
    size_t item_size = sizeof(ros_message.dbw_allowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: perception_ok
  {
    size_t item_size = sizeof(ros_message.perception_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: lane_ok
  {
    size_t item_size = sizeof(ros_message.lane_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: aeb_ok
  {
    size_t item_size = sizeof(ros_message.aeb_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.reason.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
max_serialized_size_SafetyState(
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

  // Member: safe_to_drive
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dbw_allowed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: perception_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: lane_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: aeb_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: reason
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
    using DataType = abaja_interfaces::msg::SafetyState;
    is_plain =
      (
      offsetof(DataType, reason) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
cdr_serialize_key(
  const abaja_interfaces::msg::SafetyState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: safe_to_drive
  cdr << (ros_message.safe_to_drive ? true : false);

  // Member: emergency_stop
  cdr << (ros_message.emergency_stop ? true : false);

  // Member: dbw_allowed
  cdr << (ros_message.dbw_allowed ? true : false);

  // Member: perception_ok
  cdr << (ros_message.perception_ok ? true : false);

  // Member: lane_ok
  cdr << (ros_message.lane_ok ? true : false);

  // Member: aeb_ok
  cdr << (ros_message.aeb_ok ? true : false);

  // Member: reason
  cdr << ros_message.reason;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
get_serialized_size_key(
  const abaja_interfaces::msg::SafetyState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: safe_to_drive
  {
    size_t item_size = sizeof(ros_message.safe_to_drive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stop
  {
    size_t item_size = sizeof(ros_message.emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dbw_allowed
  {
    size_t item_size = sizeof(ros_message.dbw_allowed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: perception_ok
  {
    size_t item_size = sizeof(ros_message.perception_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: lane_ok
  {
    size_t item_size = sizeof(ros_message.lane_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: aeb_ok
  {
    size_t item_size = sizeof(ros_message.aeb_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.reason.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
max_serialized_size_key_SafetyState(
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

  // Member: safe_to_drive
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_stop
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dbw_allowed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: perception_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aeb_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reason
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
    using DataType = abaja_interfaces::msg::SafetyState;
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
  auto typed_message =
    static_cast<const abaja_interfaces::msg::SafetyState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SafetyState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abaja_interfaces::msg::SafetyState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SafetyState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abaja_interfaces::msg::SafetyState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SafetyState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SafetyState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SafetyState__callbacks = {
  "abaja_interfaces::msg",
  "SafetyState",
  _SafetyState__cdr_serialize,
  _SafetyState__cdr_deserialize,
  _SafetyState__get_serialized_size,
  _SafetyState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SafetyState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SafetyState__callbacks,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__SafetyState__get_type_hash,
  &abaja_interfaces__msg__SafetyState__get_type_description,
  &abaja_interfaces__msg__SafetyState__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abaja_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abaja_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<abaja_interfaces::msg::SafetyState>()
{
  return &abaja_interfaces::msg::typesupport_fastrtps_cpp::_SafetyState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abaja_interfaces, msg, SafetyState)() {
  return &abaja_interfaces::msg::typesupport_fastrtps_cpp::_SafetyState__handle;
}

#ifdef __cplusplus
}
#endif
