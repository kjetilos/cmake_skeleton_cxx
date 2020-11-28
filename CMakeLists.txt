cmake_minimum_required(VERSION 3.10)

project(skeleton
  LANGUAGES CXX
  VERSION 1.0)
include(cmake/utils.cmake)

add_library(skeleton_lib
  STATIC
    src/foo.cpp
)
add_executable(skeleton_app
  src/main.cpp)
target_link_libraries(skeleton_app skeleton_lib)
target_include_directories(skeleton_lib PUBLIC include)

enable_testing()
include(GoogleTest)
add_subdirectory(test)
