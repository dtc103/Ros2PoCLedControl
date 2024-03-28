// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/ColorArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__COLOR_ARRAY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__COLOR_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/color_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_ColorArray_colors
{
public:
  Init_ColorArray_colors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::msg::ColorArray colors(::custom_interfaces::msg::ColorArray::_colors_type arg)
  {
    msg_.colors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::ColorArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::ColorArray>()
{
  return custom_interfaces::msg::builder::Init_ColorArray_colors();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__COLOR_ARRAY__BUILDER_HPP_
