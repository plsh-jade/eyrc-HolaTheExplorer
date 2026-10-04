#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "shape_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__shape_interface__srv__GetShape_Request() -> *const std::ffi::c_void;
}

#[link(name = "shape_interface__rosidl_generator_c")]
extern "C" {
    fn shape_interface__srv__GetShape_Request__init(msg: *mut GetShape_Request) -> bool;
    fn shape_interface__srv__GetShape_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetShape_Request>, size: usize) -> bool;
    fn shape_interface__srv__GetShape_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetShape_Request>);
    fn shape_interface__srv__GetShape_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetShape_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetShape_Request>) -> bool;
}

// Corresponds to shape_interface__srv__GetShape_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetShape_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetShape_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !shape_interface__srv__GetShape_Request__init(&mut msg as *mut _) {
        panic!("Call to shape_interface__srv__GetShape_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetShape_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__GetShape_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__GetShape_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__GetShape_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetShape_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetShape_Request where Self: Sized {
  const TYPE_NAME: &'static str = "shape_interface/srv/GetShape_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__shape_interface__srv__GetShape_Request() }
  }
}


#[link(name = "shape_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__shape_interface__srv__GetShape_Response() -> *const std::ffi::c_void;
}

#[link(name = "shape_interface__rosidl_generator_c")]
extern "C" {
    fn shape_interface__srv__GetShape_Response__init(msg: *mut GetShape_Response) -> bool;
    fn shape_interface__srv__GetShape_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetShape_Response>, size: usize) -> bool;
    fn shape_interface__srv__GetShape_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetShape_Response>);
    fn shape_interface__srv__GetShape_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetShape_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetShape_Response>) -> bool;
}

// Corresponds to shape_interface__srv__GetShape_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetShape_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shape_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for GetShape_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !shape_interface__srv__GetShape_Response__init(&mut msg as *mut _) {
        panic!("Call to shape_interface__srv__GetShape_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetShape_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__GetShape_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__GetShape_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__GetShape_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetShape_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetShape_Response where Self: Sized {
  const TYPE_NAME: &'static str = "shape_interface/srv/GetShape_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__shape_interface__srv__GetShape_Response() }
  }
}


#[link(name = "shape_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__shape_interface__srv__PixelToWorld_Request() -> *const std::ffi::c_void;
}

#[link(name = "shape_interface__rosidl_generator_c")]
extern "C" {
    fn shape_interface__srv__PixelToWorld_Request__init(msg: *mut PixelToWorld_Request) -> bool;
    fn shape_interface__srv__PixelToWorld_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PixelToWorld_Request>, size: usize) -> bool;
    fn shape_interface__srv__PixelToWorld_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PixelToWorld_Request>);
    fn shape_interface__srv__PixelToWorld_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PixelToWorld_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PixelToWorld_Request>) -> bool;
}

// Corresponds to shape_interface__srv__PixelToWorld_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PixelToWorld_Request {
    /// Overhead-camera pixel -> arena coordinates, in the frame /odom is published in
    /// (origin at the arena's top-left corner, x right, y down, metres).
    pub pixel_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pixel_y: f64,

}



impl Default for PixelToWorld_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !shape_interface__srv__PixelToWorld_Request__init(&mut msg as *mut _) {
        panic!("Call to shape_interface__srv__PixelToWorld_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PixelToWorld_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__PixelToWorld_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__PixelToWorld_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__PixelToWorld_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PixelToWorld_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PixelToWorld_Request where Self: Sized {
  const TYPE_NAME: &'static str = "shape_interface/srv/PixelToWorld_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__shape_interface__srv__PixelToWorld_Request() }
  }
}


#[link(name = "shape_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__shape_interface__srv__PixelToWorld_Response() -> *const std::ffi::c_void;
}

#[link(name = "shape_interface__rosidl_generator_c")]
extern "C" {
    fn shape_interface__srv__PixelToWorld_Response__init(msg: *mut PixelToWorld_Response) -> bool;
    fn shape_interface__srv__PixelToWorld_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PixelToWorld_Response>, size: usize) -> bool;
    fn shape_interface__srv__PixelToWorld_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PixelToWorld_Response>);
    fn shape_interface__srv__PixelToWorld_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PixelToWorld_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PixelToWorld_Response>) -> bool;
}

// Corresponds to shape_interface__srv__PixelToWorld_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PixelToWorld_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_y: f64,

}



impl Default for PixelToWorld_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !shape_interface__srv__PixelToWorld_Response__init(&mut msg as *mut _) {
        panic!("Call to shape_interface__srv__PixelToWorld_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PixelToWorld_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__PixelToWorld_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__PixelToWorld_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { shape_interface__srv__PixelToWorld_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PixelToWorld_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PixelToWorld_Response where Self: Sized {
  const TYPE_NAME: &'static str = "shape_interface/srv/PixelToWorld_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__shape_interface__srv__PixelToWorld_Response() }
  }
}






#[link(name = "shape_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__shape_interface__srv__GetShape() -> *const std::ffi::c_void;
}

// Corresponds to shape_interface__srv__GetShape
#[allow(missing_docs, non_camel_case_types)]
pub struct GetShape;

impl rosidl_runtime_rs::Service for GetShape {
    type Request = GetShape_Request;
    type Response = GetShape_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__shape_interface__srv__GetShape() }
    }
}




#[link(name = "shape_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__shape_interface__srv__PixelToWorld() -> *const std::ffi::c_void;
}

// Corresponds to shape_interface__srv__PixelToWorld
#[allow(missing_docs, non_camel_case_types)]
pub struct PixelToWorld;

impl rosidl_runtime_rs::Service for PixelToWorld {
    type Request = PixelToWorld_Request;
    type Response = PixelToWorld_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__shape_interface__srv__PixelToWorld() }
    }
}


