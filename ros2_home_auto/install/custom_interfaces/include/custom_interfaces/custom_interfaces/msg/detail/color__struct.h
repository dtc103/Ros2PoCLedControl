// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__COLOR__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Color in the package custom_interfaces.
typedef struct custom_interfaces__msg__Color
{
  uint64_t r;
  uint64_t g;
  uint64_t b;
  uint64_t a;
} custom_interfaces__msg__Color;

// Struct for a sequence of custom_interfaces__msg__Color.
typedef struct custom_interfaces__msg__Color__Sequence
{
  custom_interfaces__msg__Color * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Color__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__COLOR__STRUCT_H_
