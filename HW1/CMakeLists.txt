cmake_minimum_required (VERSION 3.8)

project ("HW1")

add_executable (HW1 "HW1.cpp" "Template.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HW1 PROPERTY CXX_STANDARD 20)
endif()
