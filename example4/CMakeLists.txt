cmake_minimum_required(VERSION 3.0)

project(searchsourcefile)
file(GLOB sourcefiles
         "src/*.hpp"
         "src/*.cpp")
add_executable(hello ${sourcefiles})
