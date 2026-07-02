# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abaja_interfaces:msg/VehicleState.idl
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


class Metaclass_VehicleState(type):
    """Metaclass of message 'VehicleState'."""

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
                'abaja_interfaces.msg.VehicleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleState(metaclass=Metaclass_VehicleState):
    """Message class 'VehicleState'."""

    __slots__ = [
        '_speed_mps',
        '_steering_angle_deg',
        '_brake_position',
        '_throttle_position',
        '_battery_voltage',
        '_autonomous_mode',
        '_manual_mode',
        '_lateral_enabled',
        '_longitudinal_enabled',
        '_emergency_stop',
        '_status_text',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'speed_mps': 'float',
        'steering_angle_deg': 'float',
        'brake_position': 'float',
        'throttle_position': 'float',
        'battery_voltage': 'float',
        'autonomous_mode': 'boolean',
        'manual_mode': 'boolean',
        'lateral_enabled': 'boolean',
        'longitudinal_enabled': 'boolean',
        'emergency_stop': 'boolean',
        'status_text': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.speed_mps = kwargs.get('speed_mps', float())
        self.steering_angle_deg = kwargs.get('steering_angle_deg', float())
        self.brake_position = kwargs.get('brake_position', float())
        self.throttle_position = kwargs.get('throttle_position', float())
        self.battery_voltage = kwargs.get('battery_voltage', float())
        self.autonomous_mode = kwargs.get('autonomous_mode', bool())
        self.manual_mode = kwargs.get('manual_mode', bool())
        self.lateral_enabled = kwargs.get('lateral_enabled', bool())
        self.longitudinal_enabled = kwargs.get('longitudinal_enabled', bool())
        self.emergency_stop = kwargs.get('emergency_stop', bool())
        self.status_text = kwargs.get('status_text', str())

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
        if self.speed_mps != other.speed_mps:
            return False
        if self.steering_angle_deg != other.steering_angle_deg:
            return False
        if self.brake_position != other.brake_position:
            return False
        if self.throttle_position != other.throttle_position:
            return False
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.autonomous_mode != other.autonomous_mode:
            return False
        if self.manual_mode != other.manual_mode:
            return False
        if self.lateral_enabled != other.lateral_enabled:
            return False
        if self.longitudinal_enabled != other.longitudinal_enabled:
            return False
        if self.emergency_stop != other.emergency_stop:
            return False
        if self.status_text != other.status_text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_mps(self):
        """Message field 'speed_mps'."""
        return self._speed_mps

    @speed_mps.setter
    def speed_mps(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_mps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_mps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_mps = value

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
    def brake_position(self):
        """Message field 'brake_position'."""
        return self._brake_position

    @brake_position.setter
    def brake_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'brake_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_position = value

    @builtins.property
    def throttle_position(self):
        """Message field 'throttle_position'."""
        return self._throttle_position

    @throttle_position.setter
    def throttle_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'throttle_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_position = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value

    @builtins.property
    def autonomous_mode(self):
        """Message field 'autonomous_mode'."""
        return self._autonomous_mode

    @autonomous_mode.setter
    def autonomous_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'autonomous_mode' field must be of type 'bool'"
        self._autonomous_mode = value

    @builtins.property
    def manual_mode(self):
        """Message field 'manual_mode'."""
        return self._manual_mode

    @manual_mode.setter
    def manual_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'manual_mode' field must be of type 'bool'"
        self._manual_mode = value

    @builtins.property
    def lateral_enabled(self):
        """Message field 'lateral_enabled'."""
        return self._lateral_enabled

    @lateral_enabled.setter
    def lateral_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'lateral_enabled' field must be of type 'bool'"
        self._lateral_enabled = value

    @builtins.property
    def longitudinal_enabled(self):
        """Message field 'longitudinal_enabled'."""
        return self._longitudinal_enabled

    @longitudinal_enabled.setter
    def longitudinal_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'longitudinal_enabled' field must be of type 'bool'"
        self._longitudinal_enabled = value

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

    @builtins.property
    def status_text(self):
        """Message field 'status_text'."""
        return self._status_text

    @status_text.setter
    def status_text(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'status_text' field must be of type 'str'"
        self._status_text = value
