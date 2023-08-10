cmake_minimum_required(VERSION 3.22)
project(tests)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(tests
  test_alarm.cpp
)

target_link_libraries(tests gtest_main)

enable_testing()

add_test(NAME tests COMMAND tests)
