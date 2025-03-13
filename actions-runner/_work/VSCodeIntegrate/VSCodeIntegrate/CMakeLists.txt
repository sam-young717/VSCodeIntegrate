cmake_minimum_required(VERSION 3.10)

project(Timer)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(MyProject)
set(CMAKE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(CMAKE_BINARY_DIR "${CMAKE_CURRENT_BINARY_DIR}")

# Specify a valid generator
set(CMAKE_GENERATOR "Visual Studio 17 2022")

if(CPPTEST_COVERAGE)
  include(cpptest-coverage.cmake)
endif()

add_executable(timer
 clock.c
 driver.c
 timer.c
 stdinout.c)
