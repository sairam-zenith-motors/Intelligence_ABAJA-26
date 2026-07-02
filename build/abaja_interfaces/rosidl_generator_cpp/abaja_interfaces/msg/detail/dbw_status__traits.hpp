// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/DbwStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/dbw_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/dbw_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DbwStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: dbw_enabled
  {
    out << "dbw_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.dbw_enabled, out);
    out << ", ";
  }

  // member: throttle_enabled
  {
    out << "throttle_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_enabled, out);
    out << ", ";
  }

  // member: brake_enabled
  {
    out << "brake_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_enabled, out);
    out << ", ";
  }

  // member: steering_enabled
  {
    out << "steering_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_enabled, out);
    out << ", ";
  }

  // member: fault_detected
  {
    out << "fault_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_detected, out);
    out << ", ";
  }

  // member: fault_reason
  {
    out << "fault_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DbwStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dbw_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dbw_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.dbw_enabled, out);
    out << "\n";
  }

  // member: throttle_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_enabled, out);
    out << "\n";
  }

  // member: brake_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_enabled, out);
    out << "\n";
  }

  // member: steering_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_enabled, out);
    out << "\n";
  }

  // member: fault_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_detected, out);
    out << "\n";
  }

  // member: fault_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DbwStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace abaja_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use abaja_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abaja_interfaces::msg::DbwStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::DbwStatus & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::DbwStatus>()
{
  return "abaja_interfaces::msg::DbwStatus";
}

template<>
inline const char * name<abaja_interfaces::msg::DbwStatus>()
{
  return "abaja_interfaces/msg/DbwStatus";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::DbwStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::DbwStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abaja_interfaces::msg::DbwStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__TRAITS_HPP_
