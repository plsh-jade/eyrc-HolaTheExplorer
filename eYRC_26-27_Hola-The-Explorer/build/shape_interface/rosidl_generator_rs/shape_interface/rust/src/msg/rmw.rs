#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "shape_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__shape_interface__msg__Shape() -> *const std::ffi::c_void;
}

#[link(name = "shape_interface__rosidl_generator_c")]
extern "C" {
    fn shape_interface__msg__Shape__init(msg: *mut Shape) -> bool;
    fn shape_interface__msg__Shape__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Shape>, size: usize) -> bool;
    fn shape_interface__msg__Shape__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Shape>);
    fn shape_interface__msg__Shape__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Shape>, out_seq: *mut rosidl_runtime_rs::Sequence<Shape>) -> bool;
}

// Corresponds to shape_interface__msg__Shape
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Copyright (c) 2026 e-Yantra, IIT Bombay. All rights reserved.
/// These simulation files and source code are the intellectual property of e-Yantra,
/// IIT Bombay, provided solely for eYRC 2026-27 (Theme: Hola The Explorer).
/// Sharing or redistribution of this material, in whole or in part, is not permitted.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Shape {

    // This member is not documented.
    #[allow(missing_docs)]
    pub shape_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for Shape {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !shape_interface__msg__Shape__init(&mut msg as *mut _) {
        panic!("Call to shape_interface__msg__Shape__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Shape {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__msg__Shape__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__msg__Shape__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__msg__Shape__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Shape {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Shape where Self: Sized {
  const TYPE_NAME: &'static str = "shape_interface/msg/Shape";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__shape_interface__msg__Shape() }
  }
}


