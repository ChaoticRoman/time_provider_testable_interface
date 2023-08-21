# Header section
cmake_minimum_required(VERSION 3.22)
project(alarm)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(alarm
    src/main.cpp
    src/system_time_provider.cpp
    src/time_utils.cpp
    src/fake_alarm.cpp
)

add_subdirectory(tests)
