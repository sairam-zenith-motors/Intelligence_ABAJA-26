// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/ModeStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/mode_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/mode_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ModeStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: autonomous_switch
  {
    out << "autonomous_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_switch, out);
    out << ", ";
  }

  // member: manual_switch
  {
    out << "manual_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_switch, out);
    out << ", ";
  }

  // member: lateral_switch
  {
    out << "lateral_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_switch, out);
    out << ", ";
  }

  // member: longitudinal_switch
  {
    out << "longitudinal_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_switch, out);
    out << ", ";
  }

  // member: kill_switch
  {
    out << "kill_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_switch, out);
    out << ", ";
  }

  // member: dbw_ready
  {
    out << "dbw_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.dbw_ready, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ModeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: autonomous_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_switch, out);
    out << "\n";
  }

  // member: manual_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_switch, out);
    out << "\n";
  }

  // member: lateral_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_switch, out);
    out << "\n";
  }

  // member: longitudinal_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_switch, out);
    out << "\n";
  }

  // member: kill_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kill_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_switch, out);
    out << "\n";
  }

  // member: dbw_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dbw_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.dbw_ready, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ModeStatus & msg, bool use_flow_style = false)
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
  const abaja_interfaces::msg::ModeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::ModeStatus & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::ModeStatus>()
{
  return "abaja_interfaces::msg::ModeStatus";
}

template<>
inline const char * name<abaja_interfaces::msg::ModeStatus>()
{
  return "abaja_interfaces/msg/ModeStatus";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::ModeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::ModeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abaja_interfaces::msg::ModeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__TRAITS_HPP_
