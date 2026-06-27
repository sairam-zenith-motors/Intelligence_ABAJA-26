// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/battery_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/battery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_BatteryStatus_low_voltage_warning
{
public:
  explicit Init_BatteryStatus_low_voltage_warning(::abaja_interfaces::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::BatteryStatus low_voltage_warning(::abaja_interfaces::msg::BatteryStatus::_low_voltage_warning_type arg)
  {
    msg_.low_voltage_warning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_percentage
{
public:
  explicit Init_BatteryStatus_percentage(::abaja_interfaces::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_low_voltage_warning percentage(::abaja_interfaces::msg::BatteryStatus::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return Init_BatteryStatus_low_voltage_warning(msg_);
  }

private:
  ::abaja_interfaces::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_current
{
public:
  explicit Init_BatteryStatus_current(::abaja_interfaces::msg::BatteryStatus & msg)
  : msg_(msg)
  {}
  Init_BatteryStatus_percentage current(::abaja_interfaces::msg::BatteryStatus::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BatteryStatus_percentage(msg_);
  }

private:
  ::abaja_interfaces::msg::BatteryStatus msg_;
};

class Init_BatteryStatus_voltage
{
public:
  Init_BatteryStatus_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatus_current voltage(::abaja_interfaces::msg::BatteryStatus::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryStatus_current(msg_);
  }

private:
  ::abaja_interfaces::msg::BatteryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::BatteryStatus>()
{
  return abaja_interfaces::msg::builder::Init_BatteryStatus_voltage();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__BATTERY_STATUS__BUILDER_HPP_
