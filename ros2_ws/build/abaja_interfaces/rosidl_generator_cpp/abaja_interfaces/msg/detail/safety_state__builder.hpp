// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/SafetyState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/safety_state.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/safety_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_SafetyState_reason
{
public:
  explicit Init_SafetyState_reason(::abaja_interfaces::msg::SafetyState & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::SafetyState reason(::abaja_interfaces::msg::SafetyState::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::SafetyState msg_;
};

class Init_SafetyState_aeb_ok
{
public:
  explicit Init_SafetyState_aeb_ok(::abaja_interfaces::msg::SafetyState & msg)
  : msg_(msg)
  {}
  Init_SafetyState_reason aeb_ok(::abaja_interfaces::msg::SafetyState::_aeb_ok_type arg)
  {
    msg_.aeb_ok = std::move(arg);
    return Init_SafetyState_reason(msg_);
  }

private:
  ::abaja_interfaces::msg::SafetyState msg_;
};

class Init_SafetyState_lane_ok
{
public:
  explicit Init_SafetyState_lane_ok(::abaja_interfaces::msg::SafetyState & msg)
  : msg_(msg)
  {}
  Init_SafetyState_aeb_ok lane_ok(::abaja_interfaces::msg::SafetyState::_lane_ok_type arg)
  {
    msg_.lane_ok = std::move(arg);
    return Init_SafetyState_aeb_ok(msg_);
  }

private:
  ::abaja_interfaces::msg::SafetyState msg_;
};

class Init_SafetyState_perception_ok
{
public:
  explicit Init_SafetyState_perception_ok(::abaja_interfaces::msg::SafetyState & msg)
  : msg_(msg)
  {}
  Init_SafetyState_lane_ok perception_ok(::abaja_interfaces::msg::SafetyState::_perception_ok_type arg)
  {
    msg_.perception_ok = std::move(arg);
    return Init_SafetyState_lane_ok(msg_);
  }

private:
  ::abaja_interfaces::msg::SafetyState msg_;
};

class Init_SafetyState_dbw_allowed
{
public:
  explicit Init_SafetyState_dbw_allowed(::abaja_interfaces::msg::SafetyState & msg)
  : msg_(msg)
  {}
  Init_SafetyState_perception_ok dbw_allowed(::abaja_interfaces::msg::SafetyState::_dbw_allowed_type arg)
  {
    msg_.dbw_allowed = std::move(arg);
    return Init_SafetyState_perception_ok(msg_);
  }

private:
  ::abaja_interfaces::msg::SafetyState msg_;
};

class Init_SafetyState_emergency_stop
{
public:
  explicit Init_SafetyState_emergency_stop(::abaja_interfaces::msg::SafetyState & msg)
  : msg_(msg)
  {}
  Init_SafetyState_dbw_allowed emergency_stop(::abaja_interfaces::msg::SafetyState::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_SafetyState_dbw_allowed(msg_);
  }

private:
  ::abaja_interfaces::msg::SafetyState msg_;
};

class Init_SafetyState_safe_to_drive
{
public:
  Init_SafetyState_safe_to_drive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyState_emergency_stop safe_to_drive(::abaja_interfaces::msg::SafetyState::_safe_to_drive_type arg)
  {
    msg_.safe_to_drive = std::move(arg);
    return Init_SafetyState_emergency_stop(msg_);
  }

private:
  ::abaja_interfaces::msg::SafetyState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::SafetyState>()
{
  return abaja_interfaces::msg::builder::Init_SafetyState_safe_to_drive();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__BUILDER_HPP_
