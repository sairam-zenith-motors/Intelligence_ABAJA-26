// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/AEBStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/aeb_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/aeb_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AEBStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: aeb_active
  {
    out << "aeb_active: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_active, out);
    out << ", ";
  }

  // member: warning_active
  {
    out << "warning_active: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_active, out);
    out << ", ";
  }

  // member: emergency_braking
  {
    out << "emergency_braking: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_braking, out);
    out << ", ";
  }

  // member: commanded_brake_percent
  {
    out << "commanded_brake_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_brake_percent, out);
    out << ", ";
  }

  // member: commanded_throttle_percent
  {
    out << "commanded_throttle_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_throttle_percent, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AEBStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: aeb_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aeb_active: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_active, out);
    out << "\n";
  }

  // member: warning_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_active: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_active, out);
    out << "\n";
  }

  // member: emergency_braking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_braking: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_braking, out);
    out << "\n";
  }

  // member: commanded_brake_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_brake_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_brake_percent, out);
    out << "\n";
  }

  // member: commanded_throttle_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_throttle_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.commanded_throttle_percent, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AEBStatus & msg, bool use_flow_style = false)
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
  const abaja_interfaces::msg::AEBStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::AEBStatus & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::AEBStatus>()
{
  return "abaja_interfaces::msg::AEBStatus";
}

template<>
inline const char * name<abaja_interfaces::msg::AEBStatus>()
{
  return "abaja_interfaces/msg/AEBStatus";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::AEBStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::AEBStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abaja_interfaces::msg::AEBStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__TRAITS_HPP_
