// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/ColorArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__COLOR_ARRAY__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__COLOR_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'colors'
#include "custom_interfaces/msg/detail/color__struct.h"

/// Struct defined in msg/ColorArray in the package custom_interfaces.
typedef struct custom_interfaces__msg__ColorArray
{
  custom_interfaces__msg__Color__Sequence colors;
} custom_interfaces__msg__ColorArray;

// Struct for a sequence of custom_interfaces__msg__ColorArray.
typedef struct custom_interfaces__msg__ColorArray__Sequence
{
  custom_interfaces__msg__ColorArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__ColorArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__COLOR_ARRAY__STRUCT_H_
