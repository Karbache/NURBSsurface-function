cmake_minimum_required(VERSION 3.13)

project(nurfsf CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# this should be set manually in the CMake GUI, but I'm just going to
# append it here for clarity
list(APPEND CMAKE_PREFIX_PATH "/home/adam/Desktop/opensim-master/opensim-core-install/lib/cmake/")
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

find_package(OpenSim REQUIRED)
find_package(Simbody REQUIRED)
find_package(GLM REQUIRED)

add_library(nurfsf SHARED
  src/osimPluginDLL.h
  src/NURBSParaboloid.h
  src/NURBSsurface.h
  src/implementation.cpp)
target_include_directories(nurfsf PRIVATE
  tinynurbs/include/
  ${GLM_INCLUDE_DIR})
target_link_libraries(nurfsf PRIVATE osimCommon)
set_target_properties(nurfsf PROPERTIES
  LINKER_LANGUAGE CXX)
