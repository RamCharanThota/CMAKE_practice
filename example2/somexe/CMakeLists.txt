cmake_minimum_required(VERSION 3.0)

include_directories(../somelib/include/)
#setup project name
add_executable(hello main.cpp)
#compile and link main.cpp and foo.cpp in to a ececutable Hello
target_link_libraries(hello foo)