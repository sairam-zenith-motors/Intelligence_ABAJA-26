# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abaja_interfaces:msg/TTCStatus.idl
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


class Metaclass_TTCStatus(type):
    """Metaclass of message 'TTCStatus'."""

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
                'abaja_interfaces.msg.TTCStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ttc_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ttc_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ttc_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ttc_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ttc_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TTCStatus(metaclass=Metaclass_TTCStatus):
    """Message class 'TTCStatus'."""

    __slots__ = [
        '_obstacle_detected',
        '_object_class',
        '_distance_m',
        '_ego_speed_mps',
        '_ttc_seconds',
        '_risk_level',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'obstacle_detected': 'boolean',
        'object_class': 'string',
        'distance_m': 'float',
        'ego_speed_mps': 'float',
        'ttc_seconds': 'float',
        'risk_level': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.obstacle_detected = kwargs.get('obstacle_detected', bool())
        self.object_class = kwargs.get('object_class', str())
        self.distance_m = kwargs.get('distance_m', float())
        self.ego_speed_mps = kwargs.get('ego_speed_mps', float())
        self.ttc_seconds = kwargs.get('ttc_seconds', float())
        self.risk_level = kwargs.get('risk_level', str())

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
        if self.obstacle_detected != other.obstacle_detected:
            return False
        if self.object_class != other.object_class:
            return False
        if self.distance_m != other.distance_m:
            return False
        if self.ego_speed_mps != other.ego_speed_mps:
            return False
        if self.ttc_seconds != other.ttc_seconds:
            return False
        if self.risk_level != other.risk_level:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obstacle_detected(self):
        """Message field 'obstacle_detected'."""
        return self._obstacle_detected

    @obstacle_detected.setter
    def obstacle_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'obstacle_detected' field must be of type 'bool'"
        self._obstacle_detected = value

    @builtins.property
    def object_class(self):
        """Message field 'object_class'."""
        return self._object_class

    @object_class.setter
    def object_class(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'object_class' field must be of type 'str'"
        self._object_class = value

    @builtins.property
    def distance_m(self):
        """Message field 'distance_m'."""
        return self._distance_m

    @distance_m.setter
    def distance_m(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'distance_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_m = value

    @builtins.property
    def ego_speed_mps(self):
        """Message field 'ego_speed_mps'."""
        return self._ego_speed_mps

    @ego_speed_mps.setter
    def ego_speed_mps(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ego_speed_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ego_speed_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ego_speed_mps = value

    @builtins.property
    def ttc_seconds(self):
        """Message field 'ttc_seconds'."""
        return self._ttc_seconds

    @ttc_seconds.setter
    def ttc_seconds(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'ttc_seconds' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ttc_seconds' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ttc_seconds = value

    @builtins.property
    def risk_level(self):
        """Message field 'risk_level'."""
        return self._risk_level

    @risk_level.setter
    def risk_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'risk_level' field must be of type 'str'"
        self._risk_level = value
