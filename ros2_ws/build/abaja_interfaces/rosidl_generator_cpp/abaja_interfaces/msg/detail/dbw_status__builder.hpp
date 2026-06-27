// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/DbwStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/dbw_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/dbw_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_DbwStatus_fault_reason
{
public:
  explicit Init_DbwStatus_fault_reason(::abaja_interfaces::msg::DbwStatus & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::DbwStatus fault_reason(::abaja_interfaces::msg::DbwStatus::_fault_reason_type arg)
  {
    msg_.fault_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwStatus msg_;
};

class Init_DbwStatus_fault_detected
{
public:
  explicit Init_DbwStatus_fault_detected(::abaja_interfaces::msg::DbwStatus & msg)
  : msg_(msg)
  {}
  Init_DbwStatus_fault_reason fault_detected(::abaja_interfaces::msg::DbwStatus::_fault_detected_type arg)
  {
    msg_.fault_detected = std::move(arg);
    return Init_DbwStatus_fault_reason(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwStatus msg_;
};

class Init_DbwStatus_steering_enabled
{
public:
  explicit Init_DbwStatus_steering_enabled(::abaja_interfaces::msg::DbwStatus & msg)
  : msg_(msg)
  {}
  Init_DbwStatus_fault_detected steering_enabled(::abaja_interfaces::msg::DbwStatus::_steering_enabled_type arg)
  {
    msg_.steering_enabled = std::move(arg);
    return Init_DbwStatus_fault_detected(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwStatus msg_;
};

class Init_DbwStatus_brake_enabled
{
public:
  explicit Init_DbwStatus_brake_enabled(::abaja_interfaces::msg::DbwStatus & msg)
  : msg_(msg)
  {}
  Init_DbwStatus_steering_enabled brake_enabled(::abaja_interfaces::msg::DbwStatus::_brake_enabled_type arg)
  {
    msg_.brake_enabled = std::move(arg);
    return Init_DbwStatus_steering_enabled(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwStatus msg_;
};

class Init_DbwStatus_throttle_enabled
{
public:
  explicit Init_DbwStatus_throttle_enabled(::abaja_interfaces::msg::DbwStatus & msg)
  : msg_(msg)
  {}
  Init_DbwStatus_brake_enabled throttle_enabled(::abaja_interfaces::msg::DbwStatus::_throttle_enabled_type arg)
  {
    msg_.throttle_enabled = std::move(arg);
    return Init_DbwStatus_brake_enabled(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwStatus msg_;
};

class Init_DbwStatus_dbw_enabled
{
public:
  Init_DbwStatus_dbw_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DbwStatus_throttle_enabled dbw_enabled(::abaja_interfaces::msg::DbwStatus::_dbw_enabled_type arg)
  {
    msg_.dbw_enabled = std::move(arg);
    return Init_DbwStatus_throttle_enabled(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::DbwStatus>()
{
  return abaja_interfaces::msg::builder::Init_DbwStatus_dbw_enabled();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__BUILDER_HPP_
