# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abaja_interfaces:msg/ModeStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ModeStatus(type):
    """Metaclass of message 'ModeStatus'."""

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
                'abaja_interfaces.msg.ModeStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mode_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mode_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mode_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mode_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mode_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ModeStatus(metaclass=Metaclass_ModeStatus):
    """Message class 'ModeStatus'."""

    __slots__ = [
        '_autonomous_switch',
        '_manual_switch',
        '_lateral_switch',
        '_longitudinal_switch',
        '_kill_switch',
        '_dbw_ready',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'autonomous_switch': 'boolean',
        'manual_switch': 'boolean',
        'lateral_switch': 'boolean',
        'longitudinal_switch': 'boolean',
        'kill_switch': 'boolean',
        'dbw_ready': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.autonomous_switch = kwargs.get('autonomous_switch', bool())
        self.manual_switch = kwargs.get('manual_switch', bool())
        self.lateral_switch = kwargs.get('lateral_switch', bool())
        self.longitudinal_switch = kwargs.get('longitudinal_switch', bool())
        self.kill_switch = kwargs.get('kill_switch', bool())
        self.dbw_ready = kwargs.get('dbw_ready', bool())

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
        if self.autonomous_switch != other.autonomous_switch:
            return False
        if self.manual_switch != other.manual_switch:
            return False
        if self.lateral_switch != other.lateral_switch:
            return False
        if self.longitudinal_switch != other.longitudinal_switch:
            return False
        if self.kill_switch != other.kill_switch:
            return False
        if self.dbw_ready != other.dbw_ready:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def autonomous_switch(self):
        """Message field 'autonomous_switch'."""
        return self._autonomous_switch

    @autonomous_switch.setter
    def autonomous_switch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'autonomous_switch' field must be of type 'bool'"
        self._autonomous_switch = value

    @builtins.property
    def manual_switch(self):
        """Message field 'manual_switch'."""
        return self._manual_switch

    @manual_switch.setter
    def manual_switch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'manual_switch' field must be of type 'bool'"
        self._manual_switch = value

    @builtins.property
    def lateral_switch(self):
        """Message field 'lateral_switch'."""
        return self._lateral_switch

    @lateral_switch.setter
    def lateral_switch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'lateral_switch' field must be of type 'bool'"
        self._lateral_switch = value

    @builtins.property
    def longitudinal_switch(self):
        """Message field 'longitudinal_switch'."""
        return self._longitudinal_switch

    @longitudinal_switch.setter
    def longitudinal_switch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'longitudinal_switch' field must be of type 'bool'"
        self._longitudinal_switch = value

    @builtins.property
    def kill_switch(self):
        """Message field 'kill_switch'."""
        return self._kill_switch

    @kill_switch.setter
    def kill_switch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'kill_switch' field must be of type 'bool'"
        self._kill_switch = value

    @builtins.property
    def dbw_ready(self):
        """Message field 'dbw_ready'."""
        return self._dbw_ready

    @dbw_ready.setter
    def dbw_ready(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'dbw_ready' field must be of type 'bool'"
        self._dbw_ready = value
