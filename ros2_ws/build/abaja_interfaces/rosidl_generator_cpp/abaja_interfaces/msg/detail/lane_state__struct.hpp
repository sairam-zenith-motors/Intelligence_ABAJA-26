// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/LaneState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/lane_state.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__LaneState __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__LaneState __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneState_
{
  using Type = LaneState_<ContainerAllocator>;

  explicit LaneState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_available = false;
      this->lateral_error_m = 0.0f;
      this->heading_error_deg = 0.0f;
      this->lane_confidence = 0.0f;
      this->status_text = "";
    }
  }

  explicit LaneState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_available = false;
      this->lateral_error_m = 0.0f;
      this->heading_error_deg = 0.0f;
      this->lane_confidence = 0.0f;
      this->status_text = "";
    }
  }

  // field types and members
  using _lane_available_type =
    bool;
  _lane_available_type lane_available;
  using _lateral_error_m_type =
    float;
  _lateral_error_m_type lateral_error_m;
  using _heading_error_deg_type =
    float;
  _heading_error_deg_type heading_error_deg;
  using _lane_confidence_type =
    float;
  _lane_confidence_type lane_confidence;
  using _status_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_text_type status_text;

  // setters for named parameter idiom
  Type & set__lane_available(
    const bool & _arg)
  {
    this->lane_available = _arg;
    return *this;
  }
  Type & set__lateral_error_m(
    const float & _arg)
  {
    this->lateral_error_m = _arg;
    return *this;
  }
  Type & set__heading_error_deg(
    const float & _arg)
  {
    this->heading_error_deg = _arg;
    return *this;
  }
  Type & set__lane_confidence(
    const float & _arg)
  {
    this->lane_confidence = _arg;
    return *this;
  }
  Type & set__status_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::LaneState_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::LaneState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::LaneState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::LaneState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::LaneState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::LaneState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::LaneState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::LaneState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::LaneState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::LaneState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__LaneState
    std::shared_ptr<abaja_interfaces::msg::LaneState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__LaneState
    std::shared_ptr<abaja_interfaces::msg::LaneState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneState_ & other) const
  {
    if (this->lane_available != other.lane_available) {
      return false;
    }
    if (this->lateral_error_m != other.lateral_error_m) {
      return false;
    }
    if (this->heading_error_deg != other.heading_error_deg) {
      return false;
    }
    if (this->lane_confidence != other.lane_confidence) {
      return false;
    }
    if (this->status_text != other.status_text) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneState_

// alias to use template instance with default allocator
using LaneState =
  abaja_interfaces::msg::LaneState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__LANE_STATE__STRUCT_HPP_
