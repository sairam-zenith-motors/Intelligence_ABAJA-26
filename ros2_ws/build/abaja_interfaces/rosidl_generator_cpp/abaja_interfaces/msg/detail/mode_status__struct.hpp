// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/ModeStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/mode_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__ModeStatus __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__ModeStatus __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModeStatus_
{
  using Type = ModeStatus_<ContainerAllocator>;

  explicit ModeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autonomous_switch = false;
      this->manual_switch = false;
      this->lateral_switch = false;
      this->longitudinal_switch = false;
      this->kill_switch = false;
      this->dbw_ready = false;
    }
  }

  explicit ModeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autonomous_switch = false;
      this->manual_switch = false;
      this->lateral_switch = false;
      this->longitudinal_switch = false;
      this->kill_switch = false;
      this->dbw_ready = false;
    }
  }

  // field types and members
  using _autonomous_switch_type =
    bool;
  _autonomous_switch_type autonomous_switch;
  using _manual_switch_type =
    bool;
  _manual_switch_type manual_switch;
  using _lateral_switch_type =
    bool;
  _lateral_switch_type lateral_switch;
  using _longitudinal_switch_type =
    bool;
  _longitudinal_switch_type longitudinal_switch;
  using _kill_switch_type =
    bool;
  _kill_switch_type kill_switch;
  using _dbw_ready_type =
    bool;
  _dbw_ready_type dbw_ready;

  // setters for named parameter idiom
  Type & set__autonomous_switch(
    const bool & _arg)
  {
    this->autonomous_switch = _arg;
    return *this;
  }
  Type & set__manual_switch(
    const bool & _arg)
  {
    this->manual_switch = _arg;
    return *this;
  }
  Type & set__lateral_switch(
    const bool & _arg)
  {
    this->lateral_switch = _arg;
    return *this;
  }
  Type & set__longitudinal_switch(
    const bool & _arg)
  {
    this->longitudinal_switch = _arg;
    return *this;
  }
  Type & set__kill_switch(
    const bool & _arg)
  {
    this->kill_switch = _arg;
    return *this;
  }
  Type & set__dbw_ready(
    const bool & _arg)
  {
    this->dbw_ready = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::ModeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::ModeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::ModeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::ModeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::ModeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::ModeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::ModeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::ModeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::ModeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::ModeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__ModeStatus
    std::shared_ptr<abaja_interfaces::msg::ModeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__ModeStatus
    std::shared_ptr<abaja_interfaces::msg::ModeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModeStatus_ & other) const
  {
    if (this->autonomous_switch != other.autonomous_switch) {
      return false;
    }
    if (this->manual_switch != other.manual_switch) {
      return false;
    }
    if (this->lateral_switch != other.lateral_switch) {
      return false;
    }
    if (this->longitudinal_switch != other.longitudinal_switch) {
      return false;
    }
    if (this->kill_switch != other.kill_switch) {
      return false;
    }
    if (this->dbw_ready != other.dbw_ready) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModeStatus_

// alias to use template instance with default allocator
using ModeStatus =
  abaja_interfaces::msg::ModeStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__STRUCT_HPP_
