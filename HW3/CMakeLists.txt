cmake_minimum_required (VERSION 3.8)

project ("HW3")

add_executable (HW3 "HW3.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HW3 PROPERTY CXX_STANDARD 20)
endif()

