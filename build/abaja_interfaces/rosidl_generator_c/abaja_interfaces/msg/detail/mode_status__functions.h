// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from abaja_interfaces:msg/ModeStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/mode_status.h"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__FUNCTIONS_H_
#define ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "abaja_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "abaja_interfaces/msg/detail/mode_status__struct.h"

/// Initialize msg/ModeStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abaja_interfaces__msg__ModeStatus
 * )) before or use
 * abaja_interfaces__msg__ModeStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
bool
abaja_interfaces__msg__ModeStatus__init(abaja_interfaces__msg__ModeStatus * msg);

/// Finalize msg/ModeStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
void
abaja_interfaces__msg__ModeStatus__fini(abaja_interfaces__msg__ModeStatus * msg);

/// Create msg/ModeStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abaja_interfaces__msg__ModeStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
abaja_interfaces__msg__ModeStatus *
abaja_interfaces__msg__ModeStatus__create(void);

/// Destroy msg/ModeStatus message.
/**
 * It calls
 * abaja_interfaces__msg__ModeStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
void
abaja_interfaces__msg__ModeStatus__destroy(abaja_interfaces__msg__ModeStatus * msg);

/// Check for msg/ModeStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
bool
abaja_interfaces__msg__ModeStatus__are_equal(const abaja_interfaces__msg__ModeStatus * lhs, const abaja_interfaces__msg__ModeStatus * rhs);

/// Copy a msg/ModeStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
bool
abaja_interfaces__msg__ModeStatus__copy(
  const abaja_interfaces__msg__ModeStatus * input,
  abaja_interfaces__msg__ModeStatus * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_type_hash_t *
abaja_interfaces__msg__ModeStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
abaja_interfaces__msg__ModeStatus__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_runtime_c__type_description__TypeSource *
abaja_interfaces__msg__ModeStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
abaja_interfaces__msg__ModeStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ModeStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * abaja_interfaces__msg__ModeStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
bool
abaja_interfaces__msg__ModeStatus__Sequence__init(abaja_interfaces__msg__ModeStatus__Sequence * array, size_t size);

/// Finalize array of msg/ModeStatus messages.
/**
 * It calls
 * abaja_interfaces__msg__ModeStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
void
abaja_interfaces__msg__ModeStatus__Sequence__fini(abaja_interfaces__msg__ModeStatus__Sequence * array);

/// Create array of msg/ModeStatus messages.
/**
 * It allocates the memory for the array and calls
 * abaja_interfaces__msg__ModeStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
abaja_interfaces__msg__ModeStatus__Sequence *
abaja_interfaces__msg__ModeStatus__Sequence__create(size_t size);

/// Destroy array of msg/ModeStatus messages.
/**
 * It calls
 * abaja_interfaces__msg__ModeStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
void
abaja_interfaces__msg__ModeStatus__Sequence__destroy(abaja_interfaces__msg__ModeStatus__Sequence * array);

/// Check for msg/ModeStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
bool
abaja_interfaces__msg__ModeStatus__Sequence__are_equal(const abaja_interfaces__msg__ModeStatus__Sequence * lhs, const abaja_interfaces__msg__ModeStatus__Sequence * rhs);

/// Copy an array of msg/ModeStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_abaja_interfaces
bool
abaja_interfaces__msg__ModeStatus__Sequence__copy(
  const abaja_interfaces__msg__ModeStatus__Sequence * input,
  abaja_interfaces__msg__ModeStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ABAJA_INTERFACES__MSG__DETAIL__MODE_STATUS__FUNCTIONS_H_
