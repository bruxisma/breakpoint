cmake_minimum_required(VERSION 3.12)
project(breakpoint)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

add_library(breakpoint)

target_include_directories(breakpoint PUBLIC
  $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_sources(breakpoint PRIVATE
  $<$<PLATFORM_ID:Windows>:src/windows.cxx>
  $<$<PLATFORM_ID:Darwin>:src/macos.cxx>)
