# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abaja_interfaces:msg/AEBStatus.idl
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


class Metaclass_AEBStatus(type):
    """Metaclass of message 'AEBStatus'."""

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
                'abaja_interfaces.msg.AEBStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aeb_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aeb_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aeb_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aeb_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aeb_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AEBStatus(metaclass=Metaclass_AEBStatus):
    """Message class 'AEBStatus'."""

    __slots__ = [
        '_aeb_active',
        '_warning_active',
        '_emergency_braking',
        '_commanded_brake_percent',
        '_commanded_throttle_percent',
        '_reason',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'aeb_active': 'boolean',
        'warning_active': 'boolean',
        'emergency_braking': 'boolean',
        'commanded_brake_percent': 'float',
        'commanded_throttle_percent': 'float',
        'reason': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.aeb_active = kwargs.get('aeb_active', bool())
        self.warning_active = kwargs.get('warning_active', bool())
        self.emergency_braking = kwargs.get('emergency_braking', bool())
        self.commanded_brake_percent = kwargs.get('commanded_brake_percent', float())
        self.commanded_throttle_percent = kwargs.get('commanded_throttle_percent', float())
        self.reason = kwargs.get('reason', str())

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
        if self.aeb_active != other.aeb_active:
            return False
        if self.warning_active != other.warning_active:
            return False
        if self.emergency_braking != other.emergency_braking:
            return False
        if self.commanded_brake_percent != other.commanded_brake_percent:
            return False
        if self.commanded_throttle_percent != other.commanded_throttle_percent:
            return False
        if self.reason != other.reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def aeb_active(self):
        """Message field 'aeb_active'."""
        return self._aeb_active

    @aeb_active.setter
    def aeb_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'aeb_active' field must be of type 'bool'"
        self._aeb_active = value

    @builtins.property
    def warning_active(self):
        """Message field 'warning_active'."""
        return self._warning_active

    @warning_active.setter
    def warning_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'warning_active' field must be of type 'bool'"
        self._warning_active = value

    @builtins.property
    def emergency_braking(self):
        """Message field 'emergency_braking'."""
        return self._emergency_braking

    @emergency_braking.setter
    def emergency_braking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'emergency_braking' field must be of type 'bool'"
        self._emergency_braking = value

    @builtins.property
    def commanded_brake_percent(self):
        """Message field 'commanded_brake_percent'."""
        return self._commanded_brake_percent

    @commanded_brake_percent.setter
    def commanded_brake_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'commanded_brake_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'commanded_brake_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._commanded_brake_percent = value

    @builtins.property
    def commanded_throttle_percent(self):
        """Message field 'commanded_throttle_percent'."""
        return self._commanded_throttle_percent

    @commanded_throttle_percent.setter
    def commanded_throttle_percent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'commanded_throttle_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'commanded_throttle_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._commanded_throttle_percent = value

    @builtins.property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value
