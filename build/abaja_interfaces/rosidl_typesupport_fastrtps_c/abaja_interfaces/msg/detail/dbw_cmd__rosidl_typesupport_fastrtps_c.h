// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice
#ifndef ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "abaja_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abaja_interfaces/msg/detail/dbw_cmd__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_serialize_abaja_interfaces__msg__DbwCmd(
  const abaja_interfaces__msg__DbwCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_deserialize_abaja_interfaces__msg__DbwCmd(
  eprosima::fastcdr::Cdr &,
  abaja_interfaces__msg__DbwCmd * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t get_serialized_size_abaja_interfaces__msg__DbwCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t max_serialized_size_abaja_interfaces__msg__DbwCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
bool cdr_serialize_key_abaja_interfaces__msg__DbwCmd(
  const abaja_interfaces__msg__DbwCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t get_serialized_size_key_abaja_interfaces__msg__DbwCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
size_t max_serialized_size_key_abaja_interfaces__msg__DbwCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abaja_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abaja_interfaces, msg, DbwCmd)();

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
