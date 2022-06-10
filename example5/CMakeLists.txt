cmake_minimum_required(VERSION 3.0)
project(runtimeresource)

add_executable(hello someexe/main.cpp)
file(COPY someexe/res.txt DESTINATION Debug)
file(COPY someexe/res.txt DESTINATION Release)