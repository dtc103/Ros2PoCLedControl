// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__COLOR__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Color_a
{
public:
  explicit Init_Color_a(::custom_interfaces::msg::Color & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Color a(::custom_interfaces::msg::Color::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Color msg_;
};

class Init_Color_b
{
public:
  explicit Init_Color_b(::custom_interfaces::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_a b(::custom_interfaces::msg::Color::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Color_a(msg_);
  }

private:
  ::custom_interfaces::msg::Color msg_;
};

class Init_Color_g
{
public:
  explicit Init_Color_g(::custom_interfaces::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_b g(::custom_interfaces::msg::Color::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Color_b(msg_);
  }

private:
  ::custom_interfaces::msg::Color msg_;
};

class Init_Color_r
{
public:
  Init_Color_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Color_g r(::custom_interfaces::msg::Color::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Color_g(msg_);
  }

private:
  ::custom_interfaces::msg::Color msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Color>()
{
  return custom_interfaces::msg::builder::Init_Color_r();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__COLOR__BUILDER_HPP_
