# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abaja_interfaces:msg/DbwCmd.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DbwCmd(type):
    """Metaclass of message 'DbwCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('abaja_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abaja_interfaces.msg.DbwCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dbw_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dbw_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dbw_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dbw_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dbw_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DbwCmd(metaclass=Metaclass_DbwCmd):
    """Message class 'DbwCmd'."""

    __slots__ = [
        '_target_speed_mps',
        '_steering_angle_deg',
        '_throttle_percent',
        '_brake_percent',
        '_enable_throttle',
        '_enable_brake',
        '_enable_steering',
        '_emergency_stop',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_speed_mps': 'float',
        'steering_angle_deg': 'float',
        'throttle_percent': 'float',
        'brake_percent': 'float',
        'enable_throttle': 'boolean',
        'enable_brake': 'boolean',
        'enable_steering': 'boolean',
        'emergency_stop': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_speed_mps = kwargs.get('target_speed_mps', float())
        self.steering_angle_deg = kwargs.get('steering_angle_deg', float())
        self.throttle_percent = kwargs.get('throttle_percent', float())
        self.brake_percent = kwargs.get('brake_percent', float())
        self.enable_throttle = kwargs.get('enable_throttle', bool())
        self.enable_brake = kwargs.get('enable_brake', bool())
        self.enable_steering = kwargs.get('enable_steering', bool())
        self.emergency_stop = kwargs.get('emergency_stop', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.target_speed_mps != other.target_speed_mps:
            return False
        if self.steering_angle_deg != other.steering_angle_deg:
            return False
        if self.throttle_percent != other.throttle_percent:
            return False
        if self.brake_percent != other.brake_percent:
            return False
        if self.enable_throttle != other.enable_throttle:
            return False
        if self.enable_brake != other.enable_brake:
            return False
        if self.enable_steering != other.enable_steering:
            return False
        if self.emergency_stop != other.emergency_stop:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_speed_mps(self):
        """Message field 'target_speed_mps'."""
        return self._target_speed_mps

    @target_speed_mps.setter
    def target_speed_mps(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'target_speed_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_speed_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_speed_mps = value

    @builtins.property
    def steering_angle_deg(self):
        """Message field 'steering_angle_deg'."""
        return self._steering_angle_deg

    @steering_angle_deg.setter
    def steering_angle_deg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'steering_angle_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_angle_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_angle_deg = value

    @builtins.property
    def throttle_percent(self):
        """Message field 'throttle_percent'."""
        return self._throttle_percent

    @throttle_percent.setter
    def throttle_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'throttle_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_percent = value

    @builtins.property
    def brake_percent(self):
        """Message field 'brake_percent'."""
        return self._brake_percent

    @brake_percent.setter
    def brake_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'brake_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_percent = value

    @builtins.property
    def enable_throttle(self):
        """Message field 'enable_throttle'."""
        return self._enable_throttle

    @enable_throttle.setter
    def enable_throttle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enable_throttle' field must be of type 'bool'"
        self._enable_throttle = value

    @builtins.property
    def enable_brake(self):
        """Message field 'enable_brake'."""
        return self._enable_brake

    @enable_brake.setter
    def enable_brake(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enable_brake' field must be of type 'bool'"
        self._enable_brake = value

    @builtins.property
    def enable_steering(self):
        """Message field 'enable_steering'."""
        return self._enable_steering

    @enable_steering.setter
    def enable_steering(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enable_steering' field must be of type 'bool'"
        self._enable_steering = value

    @builtins.property
    def emergency_stop(self):
        """Message field 'emergency_stop'."""
        return self._emergency_stop

    @emergency_stop.setter
    def emergency_stop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stop' field must be of type 'bool'"
        self._emergency_stop = value
