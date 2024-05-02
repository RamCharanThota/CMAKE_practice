cmake_minimum_required(VERSION 3.10)
project(CalculatorTest)

# Add Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

# Create an executable for the test
add_executable(calculator_test test_calculator.cpp)

# Link Google Test libraries
target_link_libraries(calculator_test gtest_main)

# Add the current directory to the include path
target_include_directories(calculator_test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Add the test source file
enable_testing()
add_test(NAME calculator_test COMMAND calculator_test)
