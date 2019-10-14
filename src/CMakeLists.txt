cmake_minimum_required(VERSION 3.15)
project(math4610)

set(CMAKE_CXX_STANDARD 14)

add_library(math4610 SHARED library.cpp library.hpp)
set_target_properties(math4610 PROPERTIES LINKER_LANGUAGE CXX)
add_executable(math4610run main.cpp)
target_link_libraries(math4610run ${CMAKE_CURRENT_SOURCE_DIR}/cmake-build-debug/libmath4610.dll)