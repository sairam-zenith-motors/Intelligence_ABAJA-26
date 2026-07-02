// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/AEBStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/aeb_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/aeb_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_AEBStatus_reason
{
public:
  explicit Init_AEBStatus_reason(::abaja_interfaces::msg::AEBStatus & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::AEBStatus reason(::abaja_interfaces::msg::AEBStatus::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::AEBStatus msg_;
};

class Init_AEBStatus_commanded_throttle_percent
{
public:
  explicit Init_AEBStatus_commanded_throttle_percent(::abaja_interfaces::msg::AEBStatus & msg)
  : msg_(msg)
  {}
  Init_AEBStatus_reason commanded_throttle_percent(::abaja_interfaces::msg::AEBStatus::_commanded_throttle_percent_type arg)
  {
    msg_.commanded_throttle_percent = std::move(arg);
    return Init_AEBStatus_reason(msg_);
  }

private:
  ::abaja_interfaces::msg::AEBStatus msg_;
};

class Init_AEBStatus_commanded_brake_percent
{
public:
  explicit Init_AEBStatus_commanded_brake_percent(::abaja_interfaces::msg::AEBStatus & msg)
  : msg_(msg)
  {}
  Init_AEBStatus_commanded_throttle_percent commanded_brake_percent(::abaja_interfaces::msg::AEBStatus::_commanded_brake_percent_type arg)
  {
    msg_.commanded_brake_percent = std::move(arg);
    return Init_AEBStatus_commanded_throttle_percent(msg_);
  }

private:
  ::abaja_interfaces::msg::AEBStatus msg_;
};

class Init_AEBStatus_emergency_braking
{
public:
  explicit Init_AEBStatus_emergency_braking(::abaja_interfaces::msg::AEBStatus & msg)
  : msg_(msg)
  {}
  Init_AEBStatus_commanded_brake_percent emergency_braking(::abaja_interfaces::msg::AEBStatus::_emergency_braking_type arg)
  {
    msg_.emergency_braking = std::move(arg);
    return Init_AEBStatus_commanded_brake_percent(msg_);
  }

private:
  ::abaja_interfaces::msg::AEBStatus msg_;
};

class Init_AEBStatus_warning_active
{
public:
  explicit Init_AEBStatus_warning_active(::abaja_interfaces::msg::AEBStatus & msg)
  : msg_(msg)
  {}
  Init_AEBStatus_emergency_braking warning_active(::abaja_interfaces::msg::AEBStatus::_warning_active_type arg)
  {
    msg_.warning_active = std::move(arg);
    return Init_AEBStatus_emergency_braking(msg_);
  }

private:
  ::abaja_interfaces::msg::AEBStatus msg_;
};

class Init_AEBStatus_aeb_active
{
public:
  Init_AEBStatus_aeb_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AEBStatus_warning_active aeb_active(::abaja_interfaces::msg::AEBStatus::_aeb_active_type arg)
  {
    msg_.aeb_active = std::move(arg);
    return Init_AEBStatus_warning_active(msg_);
  }

private:
  ::abaja_interfaces::msg::AEBStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::AEBStatus>()
{
  return abaja_interfaces::msg::builder::Init_AEBStatus_aeb_active();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__BUILDER_HPP_
