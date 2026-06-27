// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abaja_interfaces:msg/ModeStatus.idl
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
#include "abaja_interfaces/msg/detail/mode_status__struct.h"
#include "abaja_interfaces/msg/detail/mode_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abaja_interfaces__msg__mode_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("abaja_interfaces.msg._mode_status.ModeStatus", full_classname_dest, 44) == 0);
  }
  abaja_interfaces__msg__ModeStatus * ros_message = _ros_message;
  {  // autonomous_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "autonomous_switch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autonomous_switch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // manual_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_switch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->manual_switch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lateral_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_switch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lateral_switch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // longitudinal_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_switch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->longitudinal_switch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // kill_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "kill_switch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->kill_switch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dbw_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "dbw_ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dbw_ready = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abaja_interfaces__msg__mode_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ModeStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abaja_interfaces.msg._mode_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ModeStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abaja_interfaces__msg__ModeStatus * ros_message = (abaja_interfaces__msg__ModeStatus *)raw_ros_message;
  {  // autonomous_switch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autonomous_switch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autonomous_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_switch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->manual_switch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_switch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lateral_switch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_switch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->longitudinal_switch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kill_switch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->kill_switch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kill_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dbw_ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dbw_ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dbw_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
