// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/TTCStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/ttc_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/ttc_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TTCStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle_detected
  {
    out << "obstacle_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_detected, out);
    out << ", ";
  }

  // member: object_class
  {
    out << "object_class: ";
    rosidl_generator_traits::value_to_yaml(msg.object_class, out);
    out << ", ";
  }

  // member: distance_m
  {
    out << "distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_m, out);
    out << ", ";
  }

  // member: ego_speed_mps
  {
    out << "ego_speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_speed_mps, out);
    out << ", ";
  }

  // member: ttc_seconds
  {
    out << "ttc_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc_seconds, out);
    out << ", ";
  }

  // member: risk_level
  {
    out << "risk_level: ";
    rosidl_generator_traits::value_to_yaml(msg.risk_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TTCStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obstacle_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_detected, out);
    out << "\n";
  }

  // member: object_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_class: ";
    rosidl_generator_traits::value_to_yaml(msg.object_class, out);
    out << "\n";
  }

  // member: distance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_m, out);
    out << "\n";
  }

  // member: ego_speed_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_speed_mps, out);
    out << "\n";
  }

  // member: ttc_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ttc_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc_seconds, out);
    out << "\n";
  }

  // member: risk_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "risk_level: ";
    rosidl_generator_traits::value_to_yaml(msg.risk_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TTCStatus & msg, bool use_flow_style = false)
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
  const abaja_interfaces::msg::TTCStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::TTCStatus & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::TTCStatus>()
{
  return "abaja_interfaces::msg::TTCStatus";
}

template<>
inline const char * name<abaja_interfaces::msg::TTCStatus>()
{
  return "abaja_interfaces/msg/TTCStatus";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::TTCStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::TTCStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abaja_interfaces::msg::TTCStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__TRAITS_HPP_
