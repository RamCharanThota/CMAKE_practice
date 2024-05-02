cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)

# Add Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

# Include directories for Calculator.hpp and MockCalculator.hpp
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Add the test program executable
add_executable(test_program CalculatorTest.cpp)

# Link Google Test and Google Mock libraries with the test program
target_link_libraries(test_program gtest gtest_main gmock)

# Add the test program as a test
enable_testing()
add_test(NAME test_program COMMAND test_program)
