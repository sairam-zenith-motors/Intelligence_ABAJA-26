#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__ControlCmd() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__ControlCmd__init(msg: *mut ControlCmd) -> bool;
    fn abaja_interfaces__msg__ControlCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlCmd>, size: usize) -> bool;
    fn abaja_interfaces__msg__ControlCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlCmd>);
    fn abaja_interfaces__msg__ControlCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlCmd>) -> bool;
}

// Corresponds to abaja_interfaces__msg__ControlCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub source: rosidl_runtime_rs::String,

}



impl Default for ControlCmd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__ControlCmd__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__ControlCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ControlCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ControlCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ControlCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlCmd where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/ControlCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__ControlCmd() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__VehicleState() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__VehicleState__init(msg: *mut VehicleState) -> bool;
    fn abaja_interfaces__msg__VehicleState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VehicleState>, size: usize) -> bool;
    fn abaja_interfaces__msg__VehicleState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VehicleState>);
    fn abaja_interfaces__msg__VehicleState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VehicleState>, out_seq: *mut rosidl_runtime_rs::Sequence<VehicleState>) -> bool;
}

// Corresponds to abaja_interfaces__msg__VehicleState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub status_text: rosidl_runtime_rs::String,

}



impl Default for VehicleState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__VehicleState__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__VehicleState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VehicleState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__VehicleState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__VehicleState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__VehicleState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VehicleState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VehicleState where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/VehicleState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__VehicleState() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__WheelSpeed() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__WheelSpeed__init(msg: *mut WheelSpeed) -> bool;
    fn abaja_interfaces__msg__WheelSpeed__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WheelSpeed>, size: usize) -> bool;
    fn abaja_interfaces__msg__WheelSpeed__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WheelSpeed>);
    fn abaja_interfaces__msg__WheelSpeed__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WheelSpeed>, out_seq: *mut rosidl_runtime_rs::Sequence<WheelSpeed>) -> bool;
}

// Corresponds to abaja_interfaces__msg__WheelSpeed
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__WheelSpeed__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__WheelSpeed__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WheelSpeed {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__WheelSpeed__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__WheelSpeed__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__WheelSpeed__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WheelSpeed {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WheelSpeed where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/WheelSpeed";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__WheelSpeed() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__SteeringFeedback() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__SteeringFeedback__init(msg: *mut SteeringFeedback) -> bool;
    fn abaja_interfaces__msg__SteeringFeedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SteeringFeedback>, size: usize) -> bool;
    fn abaja_interfaces__msg__SteeringFeedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SteeringFeedback>);
    fn abaja_interfaces__msg__SteeringFeedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SteeringFeedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SteeringFeedback>) -> bool;
}

// Corresponds to abaja_interfaces__msg__SteeringFeedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__SteeringFeedback__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__SteeringFeedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SteeringFeedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__SteeringFeedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__SteeringFeedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__SteeringFeedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SteeringFeedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SteeringFeedback where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/SteeringFeedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__SteeringFeedback() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__BatteryStatus() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__BatteryStatus__init(msg: *mut BatteryStatus) -> bool;
    fn abaja_interfaces__msg__BatteryStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BatteryStatus>, size: usize) -> bool;
    fn abaja_interfaces__msg__BatteryStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BatteryStatus>);
    fn abaja_interfaces__msg__BatteryStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BatteryStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<BatteryStatus>) -> bool;
}

// Corresponds to abaja_interfaces__msg__BatteryStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__BatteryStatus__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__BatteryStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BatteryStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__BatteryStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__BatteryStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__BatteryStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BatteryStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BatteryStatus where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/BatteryStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__BatteryStatus() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__ModeStatus() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__ModeStatus__init(msg: *mut ModeStatus) -> bool;
    fn abaja_interfaces__msg__ModeStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ModeStatus>, size: usize) -> bool;
    fn abaja_interfaces__msg__ModeStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ModeStatus>);
    fn abaja_interfaces__msg__ModeStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ModeStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<ModeStatus>) -> bool;
}

// Corresponds to abaja_interfaces__msg__ModeStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__ModeStatus__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__ModeStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ModeStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ModeStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ModeStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ModeStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ModeStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ModeStatus where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/ModeStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__ModeStatus() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__DbwCmd() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__DbwCmd__init(msg: *mut DbwCmd) -> bool;
    fn abaja_interfaces__msg__DbwCmd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DbwCmd>, size: usize) -> bool;
    fn abaja_interfaces__msg__DbwCmd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DbwCmd>);
    fn abaja_interfaces__msg__DbwCmd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DbwCmd>, out_seq: *mut rosidl_runtime_rs::Sequence<DbwCmd>) -> bool;
}

// Corresponds to abaja_interfaces__msg__DbwCmd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__DbwCmd__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__DbwCmd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DbwCmd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DbwCmd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DbwCmd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DbwCmd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DbwCmd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DbwCmd where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/DbwCmd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__DbwCmd() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__DbwStatus() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__DbwStatus__init(msg: *mut DbwStatus) -> bool;
    fn abaja_interfaces__msg__DbwStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DbwStatus>, size: usize) -> bool;
    fn abaja_interfaces__msg__DbwStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DbwStatus>);
    fn abaja_interfaces__msg__DbwStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DbwStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<DbwStatus>) -> bool;
}

// Corresponds to abaja_interfaces__msg__DbwStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub fault_reason: rosidl_runtime_rs::String,

}



impl Default for DbwStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__DbwStatus__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__DbwStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DbwStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DbwStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DbwStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DbwStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DbwStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DbwStatus where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/DbwStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__DbwStatus() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__DetectedObject() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__DetectedObject__init(msg: *mut DetectedObject) -> bool;
    fn abaja_interfaces__msg__DetectedObject__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectedObject>, size: usize) -> bool;
    fn abaja_interfaces__msg__DetectedObject__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectedObject>);
    fn abaja_interfaces__msg__DetectedObject__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectedObject>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectedObject>) -> bool;
}

// Corresponds to abaja_interfaces__msg__DetectedObject
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectedObject {

    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__DetectedObject__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__DetectedObject__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectedObject {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DetectedObject__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DetectedObject__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DetectedObject__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectedObject {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectedObject where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/DetectedObject";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__DetectedObject() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__DetectedObjectArray() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__DetectedObjectArray__init(msg: *mut DetectedObjectArray) -> bool;
    fn abaja_interfaces__msg__DetectedObjectArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DetectedObjectArray>, size: usize) -> bool;
    fn abaja_interfaces__msg__DetectedObjectArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DetectedObjectArray>);
    fn abaja_interfaces__msg__DetectedObjectArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DetectedObjectArray>, out_seq: *mut rosidl_runtime_rs::Sequence<DetectedObjectArray>) -> bool;
}

// Corresponds to abaja_interfaces__msg__DetectedObjectArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DetectedObjectArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DetectedObject>,

}



impl Default for DetectedObjectArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__DetectedObjectArray__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__DetectedObjectArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DetectedObjectArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DetectedObjectArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DetectedObjectArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__DetectedObjectArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DetectedObjectArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DetectedObjectArray where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/DetectedObjectArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__DetectedObjectArray() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__LaneMarking() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__LaneMarking__init(msg: *mut LaneMarking) -> bool;
    fn abaja_interfaces__msg__LaneMarking__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LaneMarking>, size: usize) -> bool;
    fn abaja_interfaces__msg__LaneMarking__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LaneMarking>);
    fn abaja_interfaces__msg__LaneMarking__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LaneMarking>, out_seq: *mut rosidl_runtime_rs::Sequence<LaneMarking>) -> bool;
}

// Corresponds to abaja_interfaces__msg__LaneMarking
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__LaneMarking__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__LaneMarking__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LaneMarking {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__LaneMarking__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__LaneMarking__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__LaneMarking__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LaneMarking {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LaneMarking where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/LaneMarking";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__LaneMarking() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__LaneState() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__LaneState__init(msg: *mut LaneState) -> bool;
    fn abaja_interfaces__msg__LaneState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LaneState>, size: usize) -> bool;
    fn abaja_interfaces__msg__LaneState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LaneState>);
    fn abaja_interfaces__msg__LaneState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LaneState>, out_seq: *mut rosidl_runtime_rs::Sequence<LaneState>) -> bool;
}

// Corresponds to abaja_interfaces__msg__LaneState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub status_text: rosidl_runtime_rs::String,

}



impl Default for LaneState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__LaneState__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__LaneState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LaneState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__LaneState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__LaneState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__LaneState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LaneState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LaneState where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/LaneState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__LaneState() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__ObjectDistance() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__ObjectDistance__init(msg: *mut ObjectDistance) -> bool;
    fn abaja_interfaces__msg__ObjectDistance__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObjectDistance>, size: usize) -> bool;
    fn abaja_interfaces__msg__ObjectDistance__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObjectDistance>);
    fn abaja_interfaces__msg__ObjectDistance__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObjectDistance>, out_seq: *mut rosidl_runtime_rs::Sequence<ObjectDistance>) -> bool;
}

// Corresponds to abaja_interfaces__msg__ObjectDistance
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObjectDistance {

    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__ObjectDistance__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__ObjectDistance__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObjectDistance {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ObjectDistance__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ObjectDistance__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ObjectDistance__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObjectDistance {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObjectDistance where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/ObjectDistance";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__ObjectDistance() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__ObjectDistanceArray() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__ObjectDistanceArray__init(msg: *mut ObjectDistanceArray) -> bool;
    fn abaja_interfaces__msg__ObjectDistanceArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObjectDistanceArray>, size: usize) -> bool;
    fn abaja_interfaces__msg__ObjectDistanceArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObjectDistanceArray>);
    fn abaja_interfaces__msg__ObjectDistanceArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObjectDistanceArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ObjectDistanceArray>) -> bool;
}

// Corresponds to abaja_interfaces__msg__ObjectDistanceArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObjectDistanceArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ObjectDistance>,

}



impl Default for ObjectDistanceArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__ObjectDistanceArray__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__ObjectDistanceArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObjectDistanceArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ObjectDistanceArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ObjectDistanceArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__ObjectDistanceArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObjectDistanceArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObjectDistanceArray where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/ObjectDistanceArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__ObjectDistanceArray() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__TTCStatus() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__TTCStatus__init(msg: *mut TTCStatus) -> bool;
    fn abaja_interfaces__msg__TTCStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TTCStatus>, size: usize) -> bool;
    fn abaja_interfaces__msg__TTCStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TTCStatus>);
    fn abaja_interfaces__msg__TTCStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TTCStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<TTCStatus>) -> bool;
}

// Corresponds to abaja_interfaces__msg__TTCStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TTCStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub obstacle_detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_class: rosidl_runtime_rs::String,


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
    pub risk_level: rosidl_runtime_rs::String,

}



impl Default for TTCStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__TTCStatus__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__TTCStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TTCStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__TTCStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__TTCStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__TTCStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TTCStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TTCStatus where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/TTCStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__TTCStatus() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__AEBStatus() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__AEBStatus__init(msg: *mut AEBStatus) -> bool;
    fn abaja_interfaces__msg__AEBStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AEBStatus>, size: usize) -> bool;
    fn abaja_interfaces__msg__AEBStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AEBStatus>);
    fn abaja_interfaces__msg__AEBStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AEBStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<AEBStatus>) -> bool;
}

// Corresponds to abaja_interfaces__msg__AEBStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub reason: rosidl_runtime_rs::String,

}



impl Default for AEBStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__AEBStatus__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__AEBStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AEBStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__AEBStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__AEBStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__AEBStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AEBStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AEBStatus where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/AEBStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__AEBStatus() }
  }
}


#[link(name = "abaja_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__SafetyState() -> *const std::ffi::c_void;
}

#[link(name = "abaja_interfaces__rosidl_generator_c")]
extern "C" {
    fn abaja_interfaces__msg__SafetyState__init(msg: *mut SafetyState) -> bool;
    fn abaja_interfaces__msg__SafetyState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SafetyState>, size: usize) -> bool;
    fn abaja_interfaces__msg__SafetyState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SafetyState>);
    fn abaja_interfaces__msg__SafetyState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SafetyState>, out_seq: *mut rosidl_runtime_rs::Sequence<SafetyState>) -> bool;
}

// Corresponds to abaja_interfaces__msg__SafetyState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
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
    pub reason: rosidl_runtime_rs::String,

}



impl Default for SafetyState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !abaja_interfaces__msg__SafetyState__init(&mut msg as *mut _) {
        panic!("Call to abaja_interfaces__msg__SafetyState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SafetyState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__SafetyState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__SafetyState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { abaja_interfaces__msg__SafetyState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SafetyState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SafetyState where Self: Sized {
  const TYPE_NAME: &'static str = "abaja_interfaces/msg/SafetyState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__abaja_interfaces__msg__SafetyState() }
  }
}


