// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/LaneState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/lane_state.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/lane_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_LaneState_status_text
{
public:
  explicit Init_LaneState_status_text(::abaja_interfaces::msg::LaneState & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::LaneState status_text(::abaja_interfaces::msg::LaneState::_status_text_type arg)
  {
    msg_.status_text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneState msg_;
};

class Init_LaneState_lane_confidence
{
public:
  explicit Init_LaneState_lane_confidence(::abaja_interfaces::msg::LaneState & msg)
  : msg_(msg)
  {}
  Init_LaneState_status_text lane_confidence(::abaja_interfaces::msg::LaneState::_lane_confidence_type arg)
  {
    msg_.lane_confidence = std::move(arg);
    return Init_LaneState_status_text(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneState msg_;
};

class Init_LaneState_heading_error_deg
{
public:
  explicit Init_LaneState_heading_error_deg(::abaja_interfaces::msg::LaneState & msg)
  : msg_(msg)
  {}
  Init_LaneState_lane_confidence heading_error_deg(::abaja_interfaces::msg::LaneState::_heading_error_deg_type arg)
  {
    msg_.heading_error_deg = std::move(arg);
    return Init_LaneState_lane_confidence(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneState msg_;
};

class Init_LaneState_lateral_error_m
{
public:
  explicit Init_LaneState_lateral_error_m(::abaja_interfaces::msg::LaneState & msg)
  : msg_(msg)
  {}
  Init_LaneState_heading_error_deg lateral_error_m(::abaja_interfaces::msg::LaneState::_lateral_error_m_type arg)
  {
    msg_.lateral_error_m = std::move(arg);
    return Init_LaneState_heading_error_deg(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneState msg_;
};

class Init_LaneState_lane_available
{
public:
  Init_LaneState_lane_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneState_lateral_error_m lane_available(::abaja_interfaces::msg::LaneState::_lane_available_type arg)
  {
    msg_.lane_available = std::move(arg);
    return Init_LaneState_lateral_error_m(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::LaneState>()
{
  return abaja_interfaces::msg::builder::Init_LaneState_lane_available();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__BUILDER_HPP_
