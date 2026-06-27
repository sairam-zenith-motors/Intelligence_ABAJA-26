// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abaja_interfaces:msg/AEBStatus.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/aeb_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abaja_interfaces/msg/detail/aeb_status__functions.h"
#include "abaja_interfaces/msg/detail/aeb_status__struct.hpp"

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
  const abaja_interfaces::msg::AEBStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: aeb_active
  cdr << (ros_message.aeb_active ? true : false);

  // Member: warning_active
  cdr << (ros_message.warning_active ? true : false);

  // Member: emergency_braking
  cdr << (ros_message.emergency_braking ? true : false);

  // Member: commanded_brake_percent
  cdr << ros_message.commanded_brake_percent;

  // Member: commanded_throttle_percent
  cdr << ros_message.commanded_throttle_percent;

  // Member: reason
  cdr << ros_message.reason;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abaja_interfaces::msg::AEBStatus & ros_message)
{
  // Member: aeb_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aeb_active = tmp ? true : false;
  }

  // Member: warning_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.warning_active = tmp ? true : false;
  }

  // Member: emergency_braking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_braking = tmp ? true : false;
  }

  // Member: commanded_brake_percent
  cdr >> ros_message.commanded_brake_percent;

  // Member: commanded_throttle_percent
  cdr >> ros_message.commanded_throttle_percent;

  // Member: reason
  cdr >> ros_message.reason;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
get_serialized_size(
  const abaja_interfaces::msg::AEBStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: aeb_active
  {
    size_t item_size = sizeof(ros_message.aeb_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: warning_active
  {
    size_t item_size = sizeof(ros_message.warning_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_braking
  {
    size_t item_size = sizeof(ros_message.emergency_braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: commanded_brake_percent
  {
    size_t item_size = sizeof(ros_message.commanded_brake_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: commanded_throttle_percent
  {
    size_t item_size = sizeof(ros_message.commanded_throttle_percent);
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
max_serialized_size_AEBStatus(
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

  // Member: aeb_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: warning_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: emergency_braking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: commanded_brake_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: commanded_throttle_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
    using DataType = abaja_interfaces::msg::AEBStatus;
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
  const abaja_interfaces::msg::AEBStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: aeb_active
  cdr << (ros_message.aeb_active ? true : false);

  // Member: warning_active
  cdr << (ros_message.warning_active ? true : false);

  // Member: emergency_braking
  cdr << (ros_message.emergency_braking ? true : false);

  // Member: commanded_brake_percent
  cdr << ros_message.commanded_brake_percent;

  // Member: commanded_throttle_percent
  cdr << ros_message.commanded_throttle_percent;

  // Member: reason
  cdr << ros_message.reason;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
get_serialized_size_key(
  const abaja_interfaces::msg::AEBStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: aeb_active
  {
    size_t item_size = sizeof(ros_message.aeb_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: warning_active
  {
    size_t item_size = sizeof(ros_message.warning_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_braking
  {
    size_t item_size = sizeof(ros_message.emergency_braking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: commanded_brake_percent
  {
    size_t item_size = sizeof(ros_message.commanded_brake_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: commanded_throttle_percent
  {
    size_t item_size = sizeof(ros_message.commanded_throttle_percent);
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
max_serialized_size_key_AEBStatus(
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

  // Member: aeb_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: warning_active
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_braking
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: commanded_brake_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: commanded_throttle_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
    using DataType = abaja_interfaces::msg::AEBStatus;
    is_plain =
      (
      offsetof(DataType, reason) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _AEBStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abaja_interfaces::msg::AEBStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AEBStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abaja_interfaces::msg::AEBStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AEBStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abaja_interfaces::msg::AEBStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AEBStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AEBStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AEBStatus__callbacks = {
  "abaja_interfaces::msg",
  "AEBStatus",
  _AEBStatus__cdr_serialize,
  _AEBStatus__cdr_deserialize,
  _AEBStatus__get_serialized_size,
  _AEBStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AEBStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AEBStatus__callbacks,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__AEBStatus__get_type_hash,
  &abaja_interfaces__msg__AEBStatus__get_type_description,
  &abaja_interfaces__msg__AEBStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abaja_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abaja_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<abaja_interfaces::msg::AEBStatus>()
{
  return &abaja_interfaces::msg::typesupport_fastrtps_cpp::_AEBStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abaja_interfaces, msg, AEBStatus)() {
  return &abaja_interfaces::msg::typesupport_fastrtps_cpp::_AEBStatus__handle;
}

#ifdef __cplusplus
}
#endif
