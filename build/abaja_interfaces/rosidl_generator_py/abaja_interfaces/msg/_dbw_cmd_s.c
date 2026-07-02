// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abaja_interfaces:msg/DbwCmd.idl
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
#include "abaja_interfaces/msg/detail/dbw_cmd__struct.h"
#include "abaja_interfaces/msg/detail/dbw_cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abaja_interfaces__msg__dbw_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("abaja_interfaces.msg._dbw_cmd.DbwCmd", full_classname_dest, 36) == 0);
  }
  abaja_interfaces__msg__DbwCmd * ros_message = _ros_message;
  {  // target_speed_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_speed_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_speed_mps = (float)PyFloat_AS_DOUBLE(field);
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
  {  // throttle_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_percent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_percent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enable_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_throttle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_throttle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_brake");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_brake = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_steering
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_steering");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_steering = (Py_True == field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abaja_interfaces__msg__dbw_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DbwCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abaja_interfaces.msg._dbw_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DbwCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abaja_interfaces__msg__DbwCmd * ros_message = (abaja_interfaces__msg__DbwCmd *)raw_ros_message;
  {  // target_speed_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_speed_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_speed_mps", field);
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
  {  // throttle_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_throttle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_throttle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_brake
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_brake ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_steering
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_steering ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_steering", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
