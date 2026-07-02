// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/SafetyState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/safety_state.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/safety_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SafetyState & msg,
  std::ostream & out)
{
  out << "{";
  // member: safe_to_drive
  {
    out << "safe_to_drive: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_to_drive, out);
    out << ", ";
  }

  // member: emergency_stop
  {
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << ", ";
  }

  // member: dbw_allowed
  {
    out << "dbw_allowed: ";
    rosidl_generator_traits::value_to_yaml(msg.dbw_allowed, out);
    out << ", ";
  }

  // member: perception_ok
  {
    out << "perception_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.perception_ok, out);
    out << ", ";
  }

  // member: lane_ok
  {
    out << "lane_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_ok, out);
    out << ", ";
  }

  // member: aeb_ok
  {
    out << "aeb_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_ok, out);
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
  const SafetyState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: safe_to_drive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_to_drive: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_to_drive, out);
    out << "\n";
  }

  // member: emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << "\n";
  }

  // member: dbw_allowed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dbw_allowed: ";
    rosidl_generator_traits::value_to_yaml(msg.dbw_allowed, out);
    out << "\n";
  }

  // member: perception_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perception_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.perception_ok, out);
    out << "\n";
  }

  // member: lane_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_ok, out);
    out << "\n";
  }

  // member: aeb_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aeb_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.aeb_ok, out);
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

inline std::string to_yaml(const SafetyState & msg, bool use_flow_style = false)
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
  const abaja_interfaces::msg::SafetyState & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::SafetyState & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::SafetyState>()
{
  return "abaja_interfaces::msg::SafetyState";
}

template<>
inline const char * name<abaja_interfaces::msg::SafetyState>()
{
  return "abaja_interfaces/msg/SafetyState";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::SafetyState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::SafetyState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abaja_interfaces::msg::SafetyState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__TRAITS_HPP_
