// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/LaneMarking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/lane_marking.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__LaneMarking __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__LaneMarking __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneMarking_
{
  using Type = LaneMarking_<ContainerAllocator>;

  explicit LaneMarking_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_lane_detected = false;
      this->right_lane_detected = false;
      this->left_lane_x = 0.0f;
      this->right_lane_x = 0.0f;
      this->lane_center_x = 0.0f;
      this->confidence = 0.0f;
    }
  }

  explicit LaneMarking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_lane_detected = false;
      this->right_lane_detected = false;
      this->left_lane_x = 0.0f;
      this->right_lane_x = 0.0f;
      this->lane_center_x = 0.0f;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _left_lane_detected_type =
    bool;
  _left_lane_detected_type left_lane_detected;
  using _right_lane_detected_type =
    bool;
  _right_lane_detected_type right_lane_detected;
  using _left_lane_x_type =
    float;
  _left_lane_x_type left_lane_x;
  using _right_lane_x_type =
    float;
  _right_lane_x_type right_lane_x;
  using _lane_center_x_type =
    float;
  _lane_center_x_type lane_center_x;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__left_lane_detected(
    const bool & _arg)
  {
    this->left_lane_detected = _arg;
    return *this;
  }
  Type & set__right_lane_detected(
    const bool & _arg)
  {
    this->right_lane_detected = _arg;
    return *this;
  }
  Type & set__left_lane_x(
    const float & _arg)
  {
    this->left_lane_x = _arg;
    return *this;
  }
  Type & set__right_lane_x(
    const float & _arg)
  {
    this->right_lane_x = _arg;
    return *this;
  }
  Type & set__lane_center_x(
    const float & _arg)
  {
    this->lane_center_x = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::LaneMarking_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::LaneMarking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::LaneMarking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::LaneMarking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::LaneMarking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::LaneMarking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::LaneMarking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::LaneMarking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::LaneMarking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::LaneMarking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__LaneMarking
    std::shared_ptr<abaja_interfaces::msg::LaneMarking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__LaneMarking
    std::shared_ptr<abaja_interfaces::msg::LaneMarking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneMarking_ & other) const
  {
    if (this->left_lane_detected != other.left_lane_detected) {
      return false;
    }
    if (this->right_lane_detected != other.right_lane_detected) {
      return false;
    }
    if (this->left_lane_x != other.left_lane_x) {
      return false;
    }
    if (this->right_lane_x != other.right_lane_x) {
      return false;
    }
    if (this->lane_center_x != other.lane_center_x) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneMarking_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneMarking_

// alias to use template instance with default allocator
using LaneMarking =
  abaja_interfaces::msg::LaneMarking_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_
