cmake_minimum_required(VERSION 3.28)

project(libhgschltests)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME}
    tests.cpp
    ../libhgschl.h
)

target_include_directories(${PROJECT_NAME}
    PRIVATE ${CMAKE_SOURCE_DIR}/../
)