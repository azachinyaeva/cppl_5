# CMakeList.txt: проект CMake для HW2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("HW2")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (HW2 "HW2.cpp" "HW2.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HW2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
