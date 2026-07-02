// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/TTCStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/ttc_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__TTCStatus __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__TTCStatus __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TTCStatus_
{
  using Type = TTCStatus_<ContainerAllocator>;

  explicit TTCStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_detected = false;
      this->object_class = "";
      this->distance_m = 0.0f;
      this->ego_speed_mps = 0.0f;
      this->ttc_seconds = 0.0f;
      this->risk_level = "";
    }
  }

  explicit TTCStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_class(_alloc),
    risk_level(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_detected = false;
      this->object_class = "";
      this->distance_m = 0.0f;
      this->ego_speed_mps = 0.0f;
      this->ttc_seconds = 0.0f;
      this->risk_level = "";
    }
  }

  // field types and members
  using _obstacle_detected_type =
    bool;
  _obstacle_detected_type obstacle_detected;
  using _object_class_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_class_type object_class;
  using _distance_m_type =
    float;
  _distance_m_type distance_m;
  using _ego_speed_mps_type =
    float;
  _ego_speed_mps_type ego_speed_mps;
  using _ttc_seconds_type =
    float;
  _ttc_seconds_type ttc_seconds;
  using _risk_level_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _risk_level_type risk_level;

  // setters for named parameter idiom
  Type & set__obstacle_detected(
    const bool & _arg)
  {
    this->obstacle_detected = _arg;
    return *this;
  }
  Type & set__object_class(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_class = _arg;
    return *this;
  }
  Type & set__distance_m(
    const float & _arg)
  {
    this->distance_m = _arg;
    return *this;
  }
  Type & set__ego_speed_mps(
    const float & _arg)
  {
    this->ego_speed_mps = _arg;
    return *this;
  }
  Type & set__ttc_seconds(
    const float & _arg)
  {
    this->ttc_seconds = _arg;
    return *this;
  }
  Type & set__risk_level(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->risk_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::TTCStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::TTCStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::TTCStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::TTCStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::TTCStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::TTCStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::TTCStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::TTCStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::TTCStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::TTCStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__TTCStatus
    std::shared_ptr<abaja_interfaces::msg::TTCStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__TTCStatus
    std::shared_ptr<abaja_interfaces::msg::TTCStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTCStatus_ & other) const
  {
    if (this->obstacle_detected != other.obstacle_detected) {
      return false;
    }
    if (this->object_class != other.object_class) {
      return false;
    }
    if (this->distance_m != other.distance_m) {
      return false;
    }
    if (this->ego_speed_mps != other.ego_speed_mps) {
      return false;
    }
    if (this->ttc_seconds != other.ttc_seconds) {
      return false;
    }
    if (this->risk_level != other.risk_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTCStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTCStatus_

// alias to use template instance with default allocator
using TTCStatus =
  abaja_interfaces::msg::TTCStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__TTC_STATUS__STRUCT_HPP_
