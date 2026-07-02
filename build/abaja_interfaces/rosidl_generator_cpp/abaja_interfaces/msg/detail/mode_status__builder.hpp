// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/ModeStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/mode_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/mode_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_ModeStatus_dbw_ready
{
public:
  explicit Init_ModeStatus_dbw_ready(::abaja_interfaces::msg::ModeStatus & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::ModeStatus dbw_ready(::abaja_interfaces::msg::ModeStatus::_dbw_ready_type arg)
  {
    msg_.dbw_ready = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::ModeStatus msg_;
};

class Init_ModeStatus_kill_switch
{
public:
  explicit Init_ModeStatus_kill_switch(::abaja_interfaces::msg::ModeStatus & msg)
  : msg_(msg)
  {}
  Init_ModeStatus_dbw_ready kill_switch(::abaja_interfaces::msg::ModeStatus::_kill_switch_type arg)
  {
    msg_.kill_switch = std::move(arg);
    return Init_ModeStatus_dbw_ready(msg_);
  }

private:
  ::abaja_interfaces::msg::ModeStatus msg_;
};

class Init_ModeStatus_longitudinal_switch
{
public:
  explicit Init_ModeStatus_longitudinal_switch(::abaja_interfaces::msg::ModeStatus & msg)
  : msg_(msg)
  {}
  Init_ModeStatus_kill_switch longitudinal_switch(::abaja_interfaces::msg::ModeStatus::_longitudinal_switch_type arg)
  {
    msg_.longitudinal_switch = std::move(arg);
    return Init_ModeStatus_kill_switch(msg_);
  }

private:
  ::abaja_interfaces::msg::ModeStatus msg_;
};

class Init_ModeStatus_lateral_switch
{
public:
  explicit Init_ModeStatus_lateral_switch(::abaja_interfaces::msg::ModeStatus & msg)
  : msg_(msg)
  {}
  Init_ModeStatus_longitudinal_switch lateral_switch(::abaja_interfaces::msg::ModeStatus::_lateral_switch_type arg)
  {
    msg_.lateral_switch = std::move(arg);
    return Init_ModeStatus_longitudinal_switch(msg_);
  }

private:
  ::abaja_interfaces::msg::ModeStatus msg_;
};

class Init_ModeStatus_manual_switch
{
public:
  explicit Init_ModeStatus_manual_switch(::abaja_interfaces::msg::ModeStatus & msg)
  : msg_(msg)
  {}
  Init_ModeStatus_lateral_switch manual_switch(::abaja_interfaces::msg::ModeStatus::_manual_switch_type arg)
  {
    msg_.manual_switch = std::move(arg);
    return Init_ModeStatus_lateral_switch(msg_);
  }

private:
  ::abaja_interfaces::msg::ModeStatus msg_;
};

class Init_ModeStatus_autonomous_switch
{
public:
  Init_ModeStatus_autonomous_switch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeStatus_manual_switch autonomous_switch(::abaja_interfaces::msg::ModeStatus::_autonomous_switch_type arg)
  {
    msg_.autonomous_switch = std::move(arg);
    return Init_ModeStatus_manual_switch(msg_);
  }

private:
  ::abaja_interfaces::msg::ModeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::ModeStatus>()
{
  return abaja_interfaces::msg::builder::Init_ModeStatus_autonomous_switch();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__BUILDER_HPP_
