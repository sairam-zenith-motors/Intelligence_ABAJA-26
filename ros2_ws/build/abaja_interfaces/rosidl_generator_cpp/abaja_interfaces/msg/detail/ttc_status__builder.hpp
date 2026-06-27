// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/TTCStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/ttc_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/ttc_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_TTCStatus_risk_level
{
public:
  explicit Init_TTCStatus_risk_level(::abaja_interfaces::msg::TTCStatus & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::TTCStatus risk_level(::abaja_interfaces::msg::TTCStatus::_risk_level_type arg)
  {
    msg_.risk_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::TTCStatus msg_;
};

class Init_TTCStatus_ttc_seconds
{
public:
  explicit Init_TTCStatus_ttc_seconds(::abaja_interfaces::msg::TTCStatus & msg)
  : msg_(msg)
  {}
  Init_TTCStatus_risk_level ttc_seconds(::abaja_interfaces::msg::TTCStatus::_ttc_seconds_type arg)
  {
    msg_.ttc_seconds = std::move(arg);
    return Init_TTCStatus_risk_level(msg_);
  }

private:
  ::abaja_interfaces::msg::TTCStatus msg_;
};

class Init_TTCStatus_ego_speed_mps
{
public:
  explicit Init_TTCStatus_ego_speed_mps(::abaja_interfaces::msg::TTCStatus & msg)
  : msg_(msg)
  {}
  Init_TTCStatus_ttc_seconds ego_speed_mps(::abaja_interfaces::msg::TTCStatus::_ego_speed_mps_type arg)
  {
    msg_.ego_speed_mps = std::move(arg);
    return Init_TTCStatus_ttc_seconds(msg_);
  }

private:
  ::abaja_interfaces::msg::TTCStatus msg_;
};

class Init_TTCStatus_distance_m
{
public:
  explicit Init_TTCStatus_distance_m(::abaja_interfaces::msg::TTCStatus & msg)
  : msg_(msg)
  {}
  Init_TTCStatus_ego_speed_mps distance_m(::abaja_interfaces::msg::TTCStatus::_distance_m_type arg)
  {
    msg_.distance_m = std::move(arg);
    return Init_TTCStatus_ego_speed_mps(msg_);
  }

private:
  ::abaja_interfaces::msg::TTCStatus msg_;
};

class Init_TTCStatus_object_class
{
public:
  explicit Init_TTCStatus_object_class(::abaja_interfaces::msg::TTCStatus & msg)
  : msg_(msg)
  {}
  Init_TTCStatus_distance_m object_class(::abaja_interfaces::msg::TTCStatus::_object_class_type arg)
  {
    msg_.object_class = std::move(arg);
    return Init_TTCStatus_distance_m(msg_);
  }

private:
  ::abaja_interfaces::msg::TTCStatus msg_;
};

class Init_TTCStatus_obstacle_detected
{
public:
  Init_TTCStatus_obstacle_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TTCStatus_object_class obstacle_detected(::abaja_interfaces::msg::TTCStatus::_obstacle_detected_type arg)
  {
    msg_.obstacle_detected = std::move(arg);
    return Init_TTCStatus_object_class(msg_);
  }

private:
  ::abaja_interfaces::msg::TTCStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::TTCStatus>()
{
  return abaja_interfaces::msg::builder::Init_TTCStatus_obstacle_detected();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__BUILDER_HPP_
