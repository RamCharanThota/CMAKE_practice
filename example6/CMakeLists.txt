cmake_minimum_required(VERSION 3.0)

#add the MathFunctions Library its build the sub directories
add_subdirectory(MathFunctions)

# made the header file available to the main
target_include_directories(MathFunctions)

#add the executable 
add_executable(main Main/main.cpp)

target_link_libraries(main PUBLIC MathFunctions)