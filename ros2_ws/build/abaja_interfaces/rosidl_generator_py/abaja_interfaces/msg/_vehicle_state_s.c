// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abaja_interfaces:msg/VehicleState.idl
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
#include "abaja_interfaces/msg/detail/vehicle_state__struct.h"
#include "abaja_interfaces/msg/detail/vehicle_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abaja_interfaces__msg__vehicle_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("abaja_interfaces.msg._vehicle_state.VehicleState", full_classname_dest, 48) == 0);
  }
  abaja_interfaces__msg__VehicleState * ros_message = _ros_message;
  {  // speed_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_mps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_angle_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_angle_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // autonomous_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "autonomous_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autonomous_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // manual_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->manual_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lateral_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lateral_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // longitudinal_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->longitudinal_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abaja_interfaces__msg__vehicle_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abaja_interfaces.msg._vehicle_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abaja_interfaces__msg__VehicleState * ros_message = (abaja_interfaces__msg__VehicleState *)raw_ros_message;
  {  // speed_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_angle_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // autonomous_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autonomous_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autonomous_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->manual_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lateral_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->longitudinal_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status_text.data,
      strlen(ros_message->status_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
