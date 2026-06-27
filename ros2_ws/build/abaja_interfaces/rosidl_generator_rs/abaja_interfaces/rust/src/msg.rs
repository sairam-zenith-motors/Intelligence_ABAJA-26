#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to abaja_interfaces__msg__ControlCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_speed_mps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_angle_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub throttle_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: std::string::String,

}



impl Default for ControlCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ControlCmd::default())
  }
}

impl rosidl_runtime_rs::Message for ControlCmd {
  type RmwMsg = super::msg::rmw::ControlCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_speed_mps: msg.target_speed_mps,
        steering_angle_deg: msg.steering_angle_deg,
        throttle_percent: msg.throttle_percent,
        brake_percent: msg.brake_percent,
        emergency_stop: msg.emergency_stop,
        source: msg.source.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_speed_mps: msg.target_speed_mps,
      steering_angle_deg: msg.steering_angle_deg,
      throttle_percent: msg.throttle_percent,
      brake_percent: msg.brake_percent,
      emergency_stop: msg.emergency_stop,
        source: msg.source.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_speed_mps: msg.target_speed_mps,
      steering_angle_deg: msg.steering_angle_deg,
      throttle_percent: msg.throttle_percent,
      brake_percent: msg.brake_percent,
      emergency_stop: msg.emergency_stop,
      source: msg.source.to_string(),
    }
  }
}


// Corresponds to abaja_interfaces__msg__VehicleState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_mps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_angle_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_position: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub throttle_position: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub autonomous_mode: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manual_mode: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitudinal_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_text: std::string::String,

}



impl Default for VehicleState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VehicleState::default())
  }
}

impl rosidl_runtime_rs::Message for VehicleState {
  type RmwMsg = super::msg::rmw::VehicleState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        speed_mps: msg.speed_mps,
        steering_angle_deg: msg.steering_angle_deg,
        brake_position: msg.brake_position,
        throttle_position: msg.throttle_position,
        battery_voltage: msg.battery_voltage,
        autonomous_mode: msg.autonomous_mode,
        manual_mode: msg.manual_mode,
        lateral_enabled: msg.lateral_enabled,
        longitudinal_enabled: msg.longitudinal_enabled,
        emergency_stop: msg.emergency_stop,
        status_text: msg.status_text.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      speed_mps: msg.speed_mps,
      steering_angle_deg: msg.steering_angle_deg,
      brake_position: msg.brake_position,
      throttle_position: msg.throttle_position,
      battery_voltage: msg.battery_voltage,
      autonomous_mode: msg.autonomous_mode,
      manual_mode: msg.manual_mode,
      lateral_enabled: msg.lateral_enabled,
      longitudinal_enabled: msg.longitudinal_enabled,
      emergency_stop: msg.emergency_stop,
        status_text: msg.status_text.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      speed_mps: msg.speed_mps,
      steering_angle_deg: msg.steering_angle_deg,
      brake_position: msg.brake_position,
      throttle_position: msg.throttle_position,
      battery_voltage: msg.battery_voltage,
      autonomous_mode: msg.autonomous_mode,
      manual_mode: msg.manual_mode,
      lateral_enabled: msg.lateral_enabled,
      longitudinal_enabled: msg.longitudinal_enabled,
      emergency_stop: msg.emergency_stop,
      status_text: msg.status_text.to_string(),
    }
  }
}


// Corresponds to abaja_interfaces__msg__WheelSpeed

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WheelSpeed {

    // This member is not documented.
    #[allow(missing_docs)]
    pub front_left: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub front_right: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rear_left: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rear_right: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub average_speed: f32,

}



impl Default for WheelSpeed {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WheelSpeed::default())
  }
}

impl rosidl_runtime_rs::Message for WheelSpeed {
  type RmwMsg = super::msg::rmw::WheelSpeed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        front_left: msg.front_left,
        front_right: msg.front_right,
        rear_left: msg.rear_left,
        rear_right: msg.rear_right,
        average_speed: msg.average_speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      front_left: msg.front_left,
      front_right: msg.front_right,
      rear_left: msg.rear_left,
      rear_right: msg.rear_right,
      average_speed: msg.average_speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      front_left: msg.front_left,
      front_right: msg.front_right,
      rear_left: msg.rear_left,
      rear_right: msg.rear_right,
      average_speed: msg.average_speed,
    }
  }
}


// Corresponds to abaja_interfaces__msg__SteeringFeedback

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SteeringFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_angle_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_angle_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_deg: f32,

}



impl Default for SteeringFeedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SteeringFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for SteeringFeedback {
  type RmwMsg = super::msg::rmw::SteeringFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_angle_deg: msg.target_angle_deg,
        actual_angle_deg: msg.actual_angle_deg,
        error_deg: msg.error_deg,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_angle_deg: msg.target_angle_deg,
      actual_angle_deg: msg.actual_angle_deg,
      error_deg: msg.error_deg,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_angle_deg: msg.target_angle_deg,
      actual_angle_deg: msg.actual_angle_deg,
      error_deg: msg.error_deg,
    }
  }
}


// Corresponds to abaja_interfaces__msg__BatteryStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub percentage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub low_voltage_warning: bool,

}



impl Default for BatteryStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryStatus::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryStatus {
  type RmwMsg = super::msg::rmw::BatteryStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        voltage: msg.voltage,
        current: msg.current,
        percentage: msg.percentage,
        low_voltage_warning: msg.low_voltage_warning,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      voltage: msg.voltage,
      current: msg.current,
      percentage: msg.percentage,
      low_voltage_warning: msg.low_voltage_warning,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      voltage: msg.voltage,
      current: msg.current,
      percentage: msg.percentage,
      low_voltage_warning: msg.low_voltage_warning,
    }
  }
}


// Corresponds to abaja_interfaces__msg__ModeStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModeStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub autonomous_switch: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub manual_switch: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_switch: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub longitudinal_switch: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kill_switch: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dbw_ready: bool,

}



impl Default for ModeStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ModeStatus::default())
  }
}

impl rosidl_runtime_rs::Message for ModeStatus {
  type RmwMsg = super::msg::rmw::ModeStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        autonomous_switch: msg.autonomous_switch,
        manual_switch: msg.manual_switch,
        lateral_switch: msg.lateral_switch,
        longitudinal_switch: msg.longitudinal_switch,
        kill_switch: msg.kill_switch,
        dbw_ready: msg.dbw_ready,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      autonomous_switch: msg.autonomous_switch,
      manual_switch: msg.manual_switch,
      lateral_switch: msg.lateral_switch,
      longitudinal_switch: msg.longitudinal_switch,
      kill_switch: msg.kill_switch,
      dbw_ready: msg.dbw_ready,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      autonomous_switch: msg.autonomous_switch,
      manual_switch: msg.manual_switch,
      lateral_switch: msg.lateral_switch,
      longitudinal_switch: msg.longitudinal_switch,
      kill_switch: msg.kill_switch,
      dbw_ready: msg.dbw_ready,
    }
  }
}


// Corresponds to abaja_interfaces__msg__DbwCmd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DbwCmd {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_speed_mps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_angle_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub throttle_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable_throttle: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable_brake: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enable_steering: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_stop: bool,

}



impl Default for DbwCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DbwCmd::default())
  }
}

impl rosidl_runtime_rs::Message for DbwCmd {
  type RmwMsg = super::msg::rmw::DbwCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_speed_mps: msg.target_speed_mps,
        steering_angle_deg: msg.steering_angle_deg,
        throttle_percent: msg.throttle_percent,
        brake_percent: msg.brake_percent,
        enable_throttle: msg.enable_throttle,
        enable_brake: msg.enable_brake,
        enable_steering: msg.enable_steering,
        emergency_stop: msg.emergency_stop,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target_speed_mps: msg.target_speed_mps,
      steering_angle_deg: msg.steering_angle_deg,
      throttle_percent: msg.throttle_percent,
      brake_percent: msg.brake_percent,
      enable_throttle: msg.enable_throttle,
      enable_brake: msg.enable_brake,
      enable_steering: msg.enable_steering,
      emergency_stop: msg.emergency_stop,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_speed_mps: msg.target_speed_mps,
      steering_angle_deg: msg.steering_angle_deg,
      throttle_percent: msg.throttle_percent,
      brake_percent: msg.brake_percent,
      enable_throttle: msg.enable_throttle,
      enable_brake: msg.enable_brake,
      enable_steering: msg.enable_steering,
      emergency_stop: msg.emergency_stop,
    }
  }
}


// Corresponds to abaja_interfaces__msg__DbwStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DbwStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub dbw_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub throttle_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_reason: std::string::String,

}



impl Default for DbwStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DbwStatus::default())
  }
}

impl rosidl_runtime_rs::Message for DbwStatus {
  type RmwMsg = super::msg::rmw::DbwStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dbw_enabled: msg.dbw_enabled,
        throttle_enabled: msg.throttle_enabled,
        brake_enabled: msg.brake_enabled,
        steering_enabled: msg.steering_enabled,
        fault_detected: msg.fault_detected,
        fault_reason: msg.fault_reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      dbw_enabled: msg.dbw_enabled,
      throttle_enabled: msg.throttle_enabled,
      brake_enabled: msg.brake_enabled,
      steering_enabled: msg.steering_enabled,
      fault_detected: msg.fault_detected,
        fault_reason: msg.fault_reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      dbw_enabled: msg.dbw_enabled,
      throttle_enabled: msg.throttle_enabled,
      brake_enabled: msg.brake_enabled,
      steering_enabled: msg.steering_enabled,
      fault_detected: msg.fault_detected,
      fault_reason: msg.fault_reason.to_string(),
    }
  }
}


// Corresponds to abaja_interfaces__msg__DetectedObject

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectedObject {

    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_min: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_min: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_max: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_max: i32,

}



impl Default for DetectedObject {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DetectedObject::default())
  }
}

impl rosidl_runtime_rs::Message for DetectedObject {
  type RmwMsg = super::msg::rmw::DetectedObject;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        class_name: msg.class_name.as_str().into(),
        confidence: msg.confidence,
        x_min: msg.x_min,
        y_min: msg.y_min,
        x_max: msg.x_max,
        y_max: msg.y_max,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        class_name: msg.class_name.as_str().into(),
      confidence: msg.confidence,
      x_min: msg.x_min,
      y_min: msg.y_min,
      x_max: msg.x_max,
      y_max: msg.y_max,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      class_name: msg.class_name.to_string(),
      confidence: msg.confidence,
      x_min: msg.x_min,
      y_min: msg.y_min,
      x_max: msg.x_max,
      y_max: msg.y_max,
    }
  }
}


// Corresponds to abaja_interfaces__msg__DetectedObjectArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectedObjectArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: Vec<super::msg::DetectedObject>,

}



impl Default for DetectedObjectArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DetectedObjectArray::default())
  }
}

impl rosidl_runtime_rs::Message for DetectedObjectArray {
  type RmwMsg = super::msg::rmw::DetectedObjectArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        objects: msg.objects
          .into_iter()
          .map(|elem| super::msg::DetectedObject::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        objects: msg.objects
          .iter()
          .map(|elem| super::msg::DetectedObject::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      objects: msg.objects
          .into_iter()
          .map(super::msg::DetectedObject::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to abaja_interfaces__msg__LaneMarking

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneMarking {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_lane_detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_lane_detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub left_lane_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_lane_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lane_center_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,

}



impl Default for LaneMarking {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LaneMarking::default())
  }
}

impl rosidl_runtime_rs::Message for LaneMarking {
  type RmwMsg = super::msg::rmw::LaneMarking;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_lane_detected: msg.left_lane_detected,
        right_lane_detected: msg.right_lane_detected,
        left_lane_x: msg.left_lane_x,
        right_lane_x: msg.right_lane_x,
        lane_center_x: msg.lane_center_x,
        confidence: msg.confidence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      left_lane_detected: msg.left_lane_detected,
      right_lane_detected: msg.right_lane_detected,
      left_lane_x: msg.left_lane_x,
      right_lane_x: msg.right_lane_x,
      lane_center_x: msg.lane_center_x,
      confidence: msg.confidence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_lane_detected: msg.left_lane_detected,
      right_lane_detected: msg.right_lane_detected,
      left_lane_x: msg.left_lane_x,
      right_lane_x: msg.right_lane_x,
      lane_center_x: msg.lane_center_x,
      confidence: msg.confidence,
    }
  }
}


// Corresponds to abaja_interfaces__msg__LaneState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub lane_available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lateral_error_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading_error_deg: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lane_confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_text: std::string::String,

}



impl Default for LaneState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LaneState::default())
  }
}

impl rosidl_runtime_rs::Message for LaneState {
  type RmwMsg = super::msg::rmw::LaneState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        lane_available: msg.lane_available,
        lateral_error_m: msg.lateral_error_m,
        heading_error_deg: msg.heading_error_deg,
        lane_confidence: msg.lane_confidence,
        status_text: msg.status_text.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      lane_available: msg.lane_available,
      lateral_error_m: msg.lateral_error_m,
      heading_error_deg: msg.heading_error_deg,
      lane_confidence: msg.lane_confidence,
        status_text: msg.status_text.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      lane_available: msg.lane_available,
      lateral_error_m: msg.lateral_error_m,
      heading_error_deg: msg.heading_error_deg,
      lane_confidence: msg.lane_confidence,
      status_text: msg.status_text.to_string(),
    }
  }
}


// Corresponds to abaja_interfaces__msg__ObjectDistance

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObjectDistance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_min: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_min: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_max: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_max: i32,

}



impl Default for ObjectDistance {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObjectDistance::default())
  }
}

impl rosidl_runtime_rs::Message for ObjectDistance {
  type RmwMsg = super::msg::rmw::ObjectDistance;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        class_name: msg.class_name.as_str().into(),
        confidence: msg.confidence,
        distance_m: msg.distance_m,
        x_min: msg.x_min,
        y_min: msg.y_min,
        x_max: msg.x_max,
        y_max: msg.y_max,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        class_name: msg.class_name.as_str().into(),
      confidence: msg.confidence,
      distance_m: msg.distance_m,
      x_min: msg.x_min,
      y_min: msg.y_min,
      x_max: msg.x_max,
      y_max: msg.y_max,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      class_name: msg.class_name.to_string(),
      confidence: msg.confidence,
      distance_m: msg.distance_m,
      x_min: msg.x_min,
      y_min: msg.y_min,
      x_max: msg.x_max,
      y_max: msg.y_max,
    }
  }
}


// Corresponds to abaja_interfaces__msg__ObjectDistanceArray

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObjectDistanceArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: Vec<super::msg::ObjectDistance>,

}



impl Default for ObjectDistanceArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObjectDistanceArray::default())
  }
}

impl rosidl_runtime_rs::Message for ObjectDistanceArray {
  type RmwMsg = super::msg::rmw::ObjectDistanceArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        objects: msg.objects
          .into_iter()
          .map(|elem| super::msg::ObjectDistance::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        objects: msg.objects
          .iter()
          .map(|elem| super::msg::ObjectDistance::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      objects: msg.objects
          .into_iter()
          .map(super::msg::ObjectDistance::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to abaja_interfaces__msg__TTCStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TTCStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub obstacle_detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_class: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_m: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ego_speed_mps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ttc_seconds: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub risk_level: std::string::String,

}



impl Default for TTCStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TTCStatus::default())
  }
}

impl rosidl_runtime_rs::Message for TTCStatus {
  type RmwMsg = super::msg::rmw::TTCStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        obstacle_detected: msg.obstacle_detected,
        object_class: msg.object_class.as_str().into(),
        distance_m: msg.distance_m,
        ego_speed_mps: msg.ego_speed_mps,
        ttc_seconds: msg.ttc_seconds,
        risk_level: msg.risk_level.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      obstacle_detected: msg.obstacle_detected,
        object_class: msg.object_class.as_str().into(),
      distance_m: msg.distance_m,
      ego_speed_mps: msg.ego_speed_mps,
      ttc_seconds: msg.ttc_seconds,
        risk_level: msg.risk_level.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      obstacle_detected: msg.obstacle_detected,
      object_class: msg.object_class.to_string(),
      distance_m: msg.distance_m,
      ego_speed_mps: msg.ego_speed_mps,
      ttc_seconds: msg.ttc_seconds,
      risk_level: msg.risk_level.to_string(),
    }
  }
}


// Corresponds to abaja_interfaces__msg__AEBStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AEBStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub aeb_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub warning_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_braking: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_brake_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_throttle_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for AEBStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AEBStatus::default())
  }
}

impl rosidl_runtime_rs::Message for AEBStatus {
  type RmwMsg = super::msg::rmw::AEBStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        aeb_active: msg.aeb_active,
        warning_active: msg.warning_active,
        emergency_braking: msg.emergency_braking,
        commanded_brake_percent: msg.commanded_brake_percent,
        commanded_throttle_percent: msg.commanded_throttle_percent,
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      aeb_active: msg.aeb_active,
      warning_active: msg.warning_active,
      emergency_braking: msg.emergency_braking,
      commanded_brake_percent: msg.commanded_brake_percent,
      commanded_throttle_percent: msg.commanded_throttle_percent,
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      aeb_active: msg.aeb_active,
      warning_active: msg.warning_active,
      emergency_braking: msg.emergency_braking,
      commanded_brake_percent: msg.commanded_brake_percent,
      commanded_throttle_percent: msg.commanded_throttle_percent,
      reason: msg.reason.to_string(),
    }
  }
}


// Corresponds to abaja_interfaces__msg__SafetyState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SafetyState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub safe_to_drive: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub emergency_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dbw_allowed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub perception_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lane_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aeb_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for SafetyState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SafetyState::default())
  }
}

impl rosidl_runtime_rs::Message for SafetyState {
  type RmwMsg = super::msg::rmw::SafetyState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        safe_to_drive: msg.safe_to_drive,
        emergency_stop: msg.emergency_stop,
        dbw_allowed: msg.dbw_allowed,
        perception_ok: msg.perception_ok,
        lane_ok: msg.lane_ok,
        aeb_ok: msg.aeb_ok,
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      safe_to_drive: msg.safe_to_drive,
      emergency_stop: msg.emergency_stop,
      dbw_allowed: msg.dbw_allowed,
      perception_ok: msg.perception_ok,
      lane_ok: msg.lane_ok,
      aeb_ok: msg.aeb_ok,
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      safe_to_drive: msg.safe_to_drive,
      emergency_stop: msg.emergency_stop,
      dbw_allowed: msg.dbw_allowed,
      perception_ok: msg.perception_ok,
      lane_ok: msg.lane_ok,
      aeb_ok: msg.aeb_ok,
      reason: msg.reason.to_string(),
    }
  }
}


