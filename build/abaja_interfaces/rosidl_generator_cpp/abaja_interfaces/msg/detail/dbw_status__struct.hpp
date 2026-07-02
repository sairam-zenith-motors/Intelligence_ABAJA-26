// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/DbwStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/dbw_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__DbwStatus __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__DbwStatus __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DbwStatus_
{
  using Type = DbwStatus_<ContainerAllocator>;

  explicit DbwStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dbw_enabled = false;
      this->throttle_enabled = false;
      this->brake_enabled = false;
      this->steering_enabled = false;
      this->fault_detected = false;
      this->fault_reason = "";
    }
  }

  explicit DbwStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fault_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dbw_enabled = false;
      this->throttle_enabled = false;
      this->brake_enabled = false;
      this->steering_enabled = false;
      this->fault_detected = false;
      this->fault_reason = "";
    }
  }

  // field types and members
  using _dbw_enabled_type =
    bool;
  _dbw_enabled_type dbw_enabled;
  using _throttle_enabled_type =
    bool;
  _throttle_enabled_type throttle_enabled;
  using _brake_enabled_type =
    bool;
  _brake_enabled_type brake_enabled;
  using _steering_enabled_type =
    bool;
  _steering_enabled_type steering_enabled;
  using _fault_detected_type =
    bool;
  _fault_detected_type fault_detected;
  using _fault_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fault_reason_type fault_reason;

  // setters for named parameter idiom
  Type & set__dbw_enabled(
    const bool & _arg)
  {
    this->dbw_enabled = _arg;
    return *this;
  }
  Type & set__throttle_enabled(
    const bool & _arg)
  {
    this->throttle_enabled = _arg;
    return *this;
  }
  Type & set__brake_enabled(
    const bool & _arg)
  {
    this->brake_enabled = _arg;
    return *this;
  }
  Type & set__steering_enabled(
    const bool & _arg)
  {
    this->steering_enabled = _arg;
    return *this;
  }
  Type & set__fault_detected(
    const bool & _arg)
  {
    this->fault_detected = _arg;
    return *this;
  }
  Type & set__fault_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fault_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::DbwStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::DbwStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::DbwStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::DbwStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::DbwStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::DbwStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::DbwStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::DbwStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::DbwStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::DbwStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__DbwStatus
    std::shared_ptr<abaja_interfaces::msg::DbwStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__DbwStatus
    std::shared_ptr<abaja_interfaces::msg::DbwStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DbwStatus_ & other) const
  {
    if (this->dbw_enabled != other.dbw_enabled) {
      return false;
    }
    if (this->throttle_enabled != other.throttle_enabled) {
      return false;
    }
    if (this->brake_enabled != other.brake_enabled) {
      return false;
    }
    if (this->steering_enabled != other.steering_enabled) {
      return false;
    }
    if (this->fault_detected != other.fault_detected) {
      return false;
    }
    if (this->fault_reason != other.fault_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const DbwStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DbwStatus_

// alias to use template instance with default allocator
using DbwStatus =
  abaja_interfaces::msg::DbwStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DBW_STATUS__STRUCT_HPP_
