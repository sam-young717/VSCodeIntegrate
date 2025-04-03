cmake_minimum_required(VERSION 3.10)

project(Timer)

set(CPPTEST_HOME /mnt/c/Users/syoung/Documents/CppTestLinux/cpptest/)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CPPTEST_COVERAGE)
  include(cpptest-coverage.cmake)
endif()

add_executable(timer
 clock.c
 driver.c
 timer.c
 stdinout.c)
