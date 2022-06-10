cmake_minimum_required(VERSION 3.0)


#setup project name
include_directories(./include/)
#compile and link main.cpp and foo.cpp in to a ececutable Hello
add_library(foo STATIC foo.cpp)