#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to shape_interface__srv__GetShape_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetShape_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetShape_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetShape_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetShape_Request {
  type RmwMsg = super::srv::rmw::GetShape_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to shape_interface__srv__GetShape_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetShape_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shape_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<f64>,

}



impl Default for GetShape_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetShape_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetShape_Response {
  type RmwMsg = super::srv::rmw::GetShape_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        shape_name: msg.shape_name.as_str().into(),
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        shape_name: msg.shape_name.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      shape_name: msg.shape_name.to_string(),
      data: msg.data.into(),
    }
  }
}


// Corresponds to shape_interface__srv__PixelToWorld_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PixelToWorld_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PixelToWorld_Request {
  type RmwMsg = super::srv::rmw::PixelToWorld_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pixel_x: msg.pixel_x,
        pixel_y: msg.pixel_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      pixel_x: msg.pixel_x,
      pixel_y: msg.pixel_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pixel_x: msg.pixel_x,
      pixel_y: msg.pixel_y,
    }
  }
}


// Corresponds to shape_interface__srv__PixelToWorld_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PixelToWorld_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub world_y: f64,

}



impl Default for PixelToWorld_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PixelToWorld_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PixelToWorld_Response {
  type RmwMsg = super::srv::rmw::PixelToWorld_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        world_x: msg.world_x,
        world_y: msg.world_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      world_x: msg.world_x,
      world_y: msg.world_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      world_x: msg.world_x,
      world_y: msg.world_y,
    }
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


