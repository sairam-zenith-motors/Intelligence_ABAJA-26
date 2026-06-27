// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/dbw_cmd.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__DbwCmd __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__DbwCmd __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DbwCmd_
{
  using Type = DbwCmd_<ContainerAllocator>;

  explicit DbwCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_speed_mps = 0.0f;
      this->steering_angle_deg = 0.0f;
      this->throttle_percent = 0.0f;
      this->brake_percent = 0.0f;
      this->enable_throttle = false;
      this->enable_brake = false;
      this->enable_steering = false;
      this->emergency_stop = false;
    }
  }

  explicit DbwCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_speed_mps = 0.0f;
      this->steering_angle_deg = 0.0f;
      this->throttle_percent = 0.0f;
      this->brake_percent = 0.0f;
      this->enable_throttle = false;
      this->enable_brake = false;
      this->enable_steering = false;
      this->emergency_stop = false;
    }
  }

  // field types and members
  using _target_speed_mps_type =
    float;
  _target_speed_mps_type target_speed_mps;
  using _steering_angle_deg_type =
    float;
  _steering_angle_deg_type steering_angle_deg;
  using _throttle_percent_type =
    float;
  _throttle_percent_type throttle_percent;
  using _brake_percent_type =
    float;
  _brake_percent_type brake_percent;
  using _enable_throttle_type =
    bool;
  _enable_throttle_type enable_throttle;
  using _enable_brake_type =
    bool;
  _enable_brake_type enable_brake;
  using _enable_steering_type =
    bool;
  _enable_steering_type enable_steering;
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;

  // setters for named parameter idiom
  Type & set__target_speed_mps(
    const float & _arg)
  {
    this->target_speed_mps = _arg;
    return *this;
  }
  Type & set__steering_angle_deg(
    const float & _arg)
  {
    this->steering_angle_deg = _arg;
    return *this;
  }
  Type & set__throttle_percent(
    const float & _arg)
  {
    this->throttle_percent = _arg;
    return *this;
  }
  Type & set__brake_percent(
    const float & _arg)
  {
    this->brake_percent = _arg;
    return *this;
  }
  Type & set__enable_throttle(
    const bool & _arg)
  {
    this->enable_throttle = _arg;
    return *this;
  }
  Type & set__enable_brake(
    const bool & _arg)
  {
    this->enable_brake = _arg;
    return *this;
  }
  Type & set__enable_steering(
    const bool & _arg)
  {
    this->enable_steering = _arg;
    return *this;
  }
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::DbwCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::DbwCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::DbwCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::DbwCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::DbwCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::DbwCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::DbwCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::DbwCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::DbwCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::DbwCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__DbwCmd
    std::shared_ptr<abaja_interfaces::msg::DbwCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__DbwCmd
    std::shared_ptr<abaja_interfaces::msg::DbwCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DbwCmd_ & other) const
  {
    if (this->target_speed_mps != other.target_speed_mps) {
      return false;
    }
    if (this->steering_angle_deg != other.steering_angle_deg) {
      return false;
    }
    if (this->throttle_percent != other.throttle_percent) {
      return false;
    }
    if (this->brake_percent != other.brake_percent) {
      return false;
    }
    if (this->enable_throttle != other.enable_throttle) {
      return false;
    }
    if (this->enable_brake != other.enable_brake) {
      return false;
    }
    if (this->enable_steering != other.enable_steering) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const DbwCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DbwCmd_

// alias to use template instance with default allocator
using DbwCmd =
  abaja_interfaces::msg::DbwCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__STRUCT_HPP_
