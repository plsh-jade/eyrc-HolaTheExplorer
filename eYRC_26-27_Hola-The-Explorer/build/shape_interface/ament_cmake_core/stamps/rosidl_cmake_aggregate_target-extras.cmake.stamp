# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target shape_interface::shape_interface
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${shape_interface_TARGETS}.
if(shape_interface_TARGETS AND NOT TARGET shape_interface::shape_interface)
  add_library(shape_interface::shape_interface INTERFACE IMPORTED)
  set_target_properties(shape_interface::shape_interface PROPERTIES
    INTERFACE_LINK_LIBRARIES "${shape_interface_TARGETS}")
endif()
