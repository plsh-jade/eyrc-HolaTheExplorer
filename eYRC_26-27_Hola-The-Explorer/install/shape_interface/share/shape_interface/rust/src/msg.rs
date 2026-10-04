#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to shape_interface__msg__Shape
/// Copyright (c) 2026 e-Yantra, IIT Bombay. All rights reserved.
/// These simulation files and source code are the intellectual property of e-Yantra,
/// IIT Bombay, provided solely for eYRC 2026-27 (Theme: Hola The Explorer).
/// Sharing or redistribution of this material, in whole or in part, is not permitted.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Shape {

    // This member is not documented.
    #[allow(missing_docs)]
    pub shape_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<f64>,

}



impl Default for Shape {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Shape::default())
  }
}

impl rosidl_runtime_rs::Message for Shape {
  type RmwMsg = super::msg::rmw::Shape;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        shape_name: msg.shape_name.as_str().into(),
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        shape_name: msg.shape_name.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      shape_name: msg.shape_name.to_string(),
      data: msg.data.into(),
    }
  }
}


