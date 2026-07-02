// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/LaneState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/lane_state.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/lane_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneState & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_available
  {
    out << "lane_available: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_available, out);
    out << ", ";
  }

  // member: lateral_error_m
  {
    out << "lateral_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_m, out);
    out << ", ";
  }

  // member: heading_error_deg
  {
    out << "heading_error_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error_deg, out);
    out << ", ";
  }

  // member: lane_confidence
  {
    out << "lane_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_confidence, out);
    out << ", ";
  }

  // member: status_text
  {
    out << "status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.status_text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_available: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_available, out);
    out << "\n";
  }

  // member: lateral_error_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_error_m: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_error_m, out);
    out << "\n";
  }

  // member: heading_error_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_error_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_error_deg, out);
    out << "\n";
  }

  // member: lane_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_confidence, out);
    out << "\n";
  }

  // member: status_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.status_text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneState & msg, bool use_flow_style = false)
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
  const abaja_interfaces::msg::LaneState & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::LaneState & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::LaneState>()
{
  return "abaja_interfaces::msg::LaneState";
}

template<>
inline const char * name<abaja_interfaces::msg::LaneState>()
{
  return "abaja_interfaces/msg/LaneState";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::LaneState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::LaneState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abaja_interfaces::msg::LaneState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__TRAITS_HPP_
