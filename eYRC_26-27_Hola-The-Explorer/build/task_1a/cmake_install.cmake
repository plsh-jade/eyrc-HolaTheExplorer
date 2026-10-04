# Install script for directory: /home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/Software/workspace/src/task_1a

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/install/task_1a")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/task_1a" TYPE PROGRAM FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/Software/workspace/src/task_1a/bin/pixel_to_world_service")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a/environment" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a/environment" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/task_1a-0.0.1-py3.10.egg-info" TYPE DIRECTORY FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_python/task_1a/task_1a.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/task_1a" TYPE DIRECTORY FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/Software/workspace/src/task_1a/task_1a/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/install/task_1a/local/lib/python3.10/dist-packages/task_1a"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/task_1a" TYPE PROGRAM RENAME "camera_detection" FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/Software/workspace/src/task_1a/task_1a/camera_detection.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/task_1a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/task_1a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a/environment" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a/environment" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_index/share/ament_index/resource_index/packages/task_1a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a/cmake" TYPE FILE FILES
    "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_core/task_1aConfig.cmake"
    "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/ament_cmake_core/task_1aConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/task_1a" TYPE FILE FILES "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/Software/workspace/src/task_1a/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/jade/Desktop/eYRC_26-27_Hole-The_Explorer/eYRC_26-27_Hola-The-Explorer/build/task_1a/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
