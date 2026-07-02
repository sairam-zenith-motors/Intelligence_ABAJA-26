// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice
#include "abaja_interfaces/msg/detail/dbw_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abaja_interfaces/msg/detail/dbw_cmd__functions.h"
#include "abaja_interfaces/msg/detail/dbw_cmd__struct.hpp"

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
  const abaja_interfaces::msg::DbwCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_speed_mps
  cdr << ros_message.target_speed_mps;

  // Member: steering_angle_deg
  cdr << ros_message.steering_angle_deg;

  // Member: throttle_percent
  cdr << ros_message.throttle_percent;

  // Member: brake_percent
  cdr << ros_message.brake_percent;

  // Member: enable_throttle
  cdr << (ros_message.enable_throttle ? true : false);

  // Member: enable_brake
  cdr << (ros_message.enable_brake ? true : false);

  // Member: enable_steering
  cdr << (ros_message.enable_steering ? true : false);

  // Member: emergency_stop
  cdr << (ros_message.emergency_stop ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abaja_interfaces::msg::DbwCmd & ros_message)
{
  // Member: target_speed_mps
  cdr >> ros_message.target_speed_mps;

  // Member: steering_angle_deg
  cdr >> ros_message.steering_angle_deg;

  // Member: throttle_percent
  cdr >> ros_message.throttle_percent;

  // Member: brake_percent
  cdr >> ros_message.brake_percent;

  // Member: enable_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enable_throttle = tmp ? true : false;
  }

  // Member: enable_brake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enable_brake = tmp ? true : false;
  }

  // Member: enable_steering
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enable_steering = tmp ? true : false;
  }

  // Member: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_stop = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
get_serialized_size(
  const abaja_interfaces::msg::DbwCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_speed_mps
  {
    size_t item_size = sizeof(ros_message.target_speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: steering_angle_deg
  {
    size_t item_size = sizeof(ros_message.steering_angle_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: throttle_percent
  {
    size_t item_size = sizeof(ros_message.throttle_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: brake_percent
  {
    size_t item_size = sizeof(ros_message.brake_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enable_throttle
  {
    size_t item_size = sizeof(ros_message.enable_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enable_brake
  {
    size_t item_size = sizeof(ros_message.enable_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enable_steering
  {
    size_t item_size = sizeof(ros_message.enable_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stop
  {
    size_t item_size = sizeof(ros_message.emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
max_serialized_size_DbwCmd(
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

  // Member: target_speed_mps
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: steering_angle_deg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: throttle_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: brake_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: enable_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: enable_brake
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: enable_steering
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abaja_interfaces::msg::DbwCmd;
    is_plain =
      (
      offsetof(DataType, emergency_stop) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
cdr_serialize_key(
  const abaja_interfaces::msg::DbwCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_speed_mps
  cdr << ros_message.target_speed_mps;

  // Member: steering_angle_deg
  cdr << ros_message.steering_angle_deg;

  // Member: throttle_percent
  cdr << ros_message.throttle_percent;

  // Member: brake_percent
  cdr << ros_message.brake_percent;

  // Member: enable_throttle
  cdr << (ros_message.enable_throttle ? true : false);

  // Member: enable_brake
  cdr << (ros_message.enable_brake ? true : false);

  // Member: enable_steering
  cdr << (ros_message.enable_steering ? true : false);

  // Member: emergency_stop
  cdr << (ros_message.emergency_stop ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
get_serialized_size_key(
  const abaja_interfaces::msg::DbwCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_speed_mps
  {
    size_t item_size = sizeof(ros_message.target_speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: steering_angle_deg
  {
    size_t item_size = sizeof(ros_message.steering_angle_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: throttle_percent
  {
    size_t item_size = sizeof(ros_message.throttle_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: brake_percent
  {
    size_t item_size = sizeof(ros_message.brake_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enable_throttle
  {
    size_t item_size = sizeof(ros_message.enable_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enable_brake
  {
    size_t item_size = sizeof(ros_message.enable_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: enable_steering
  {
    size_t item_size = sizeof(ros_message.enable_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: emergency_stop
  {
    size_t item_size = sizeof(ros_message.emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abaja_interfaces
max_serialized_size_key_DbwCmd(
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

  // Member: target_speed_mps
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_angle_deg
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: enable_throttle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enable_brake
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enable_steering
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abaja_interfaces::msg::DbwCmd;
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
  auto typed_message =
    static_cast<const abaja_interfaces::msg::DbwCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DbwCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abaja_interfaces::msg::DbwCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DbwCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abaja_interfaces::msg::DbwCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DbwCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DbwCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DbwCmd__callbacks = {
  "abaja_interfaces::msg",
  "DbwCmd",
  _DbwCmd__cdr_serialize,
  _DbwCmd__cdr_deserialize,
  _DbwCmd__get_serialized_size,
  _DbwCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DbwCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DbwCmd__callbacks,
  get_message_typesupport_handle_function,
  &abaja_interfaces__msg__DbwCmd__get_type_hash,
  &abaja_interfaces__msg__DbwCmd__get_type_description,
  &abaja_interfaces__msg__DbwCmd__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abaja_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abaja_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<abaja_interfaces::msg::DbwCmd>()
{
  return &abaja_interfaces::msg::typesupport_fastrtps_cpp::_DbwCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abaja_interfaces, msg, DbwCmd)() {
  return &abaja_interfaces::msg::typesupport_fastrtps_cpp::_DbwCmd__handle;
}

#ifdef __cplusplus
}
#endif
