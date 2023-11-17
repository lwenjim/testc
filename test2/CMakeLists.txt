cmake_minimum_required(VERSION 3.26.1)

project(hello_cmake)

aux_source_directory(. DIR_SRCS)

include_directories("${PROJECT_SOURCE_DIR}/hello")
include_directories("${PROJECT_SOURCE_DIR}/world")

add_subdirectory(hello)
add_subdirectory(world)

add_executable(hello_cmake main.cpp)

target_link_libraries(hello_cmake hello world)