// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abaja_interfaces:msg/AEBStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "abaja_interfaces/msg/detail/aeb_status__struct.h"
#include "abaja_interfaces/msg/detail/aeb_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abaja_interfaces__msg__aeb_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("abaja_interfaces.msg._aeb_status.AEBStatus", full_classname_dest, 42) == 0);
  }
  abaja_interfaces__msg__AEBStatus * ros_message = _ros_message;
  {  // aeb_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeb_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aeb_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // warning_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->warning_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_braking
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_braking");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_braking = (Py_True == field);
    Py_DECREF(field);
  }
  {  // commanded_brake_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "commanded_brake_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->commanded_brake_percent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // commanded_throttle_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "commanded_throttle_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->commanded_throttle_percent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abaja_interfaces__msg__aeb_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AEBStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abaja_interfaces.msg._aeb_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AEBStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abaja_interfaces__msg__AEBStatus * ros_message = (abaja_interfaces__msg__AEBStatus *)raw_ros_message;
  {  // aeb_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aeb_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeb_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->warning_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_braking
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_braking ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_braking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // commanded_brake_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->commanded_brake_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "commanded_brake_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // commanded_throttle_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->commanded_throttle_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "commanded_throttle_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reason.data,
      strlen(ros_message->reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
