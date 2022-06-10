cmake_minimum_required(VERSION 3.0)

SET(x 3)
SET(y 1)
MESSAGE(x y)
MESSAGE(${x} ${y})


SET(x 3 2 4)
SET(y hello world !)
SET(z  " hello world !")
MESSAGE(x y)
MESSAGE("x = ${x} y = ${y} z=${z}")

foreach(val ${x})
 MESSAGE(${val})
    
endforeach(val ${x})


#exposing compile options
SET(hello FALSE CACHE BOOL "If_true_write_hello")
SET(other_msg "HI" CACHE STRING "NO_hello_caLUE")
if(${hello})
  message("hello")

else()
    message(${other_msg})
endif()


#setup project name
include_directories(./include/)
#compile and link main.cpp and foo.cpp in to a ececutable Hello
add_executable(Hello src/main.cpp src/foo.cpp)