// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/DetectedObjectArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/detected_object_array.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/detected_object_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectArray_objects
{
public:
  explicit Init_DetectedObjectArray_objects(::abaja_interfaces::msg::DetectedObjectArray & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::DetectedObjectArray objects(::abaja_interfaces::msg::DetectedObjectArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::DetectedObjectArray msg_;
};

class Init_DetectedObjectArray_header
{
public:
  Init_DetectedObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectArray_objects header(::abaja_interfaces::msg::DetectedObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObjectArray_objects(msg_);
  }

private:
  ::abaja_interfaces::msg::DetectedObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::DetectedObjectArray>()
{
  return abaja_interfaces::msg::builder::Init_DetectedObjectArray_header();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__BUILDER_HPP_
