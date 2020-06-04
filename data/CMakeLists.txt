cmake_minimum_required(VERSION 3.0.0)
project(sample-project VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(sample-project main.cpp)
set_property(TARGET sample-project PROPERTY CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD 17)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
