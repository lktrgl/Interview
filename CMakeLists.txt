cmake_minimum_required (VERSION 2.6)
project (interview)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)
set (CMAKE_CXX_FLAGS "-O0 -g3 -Wall -Wextra -Werror")

set (CMAKE_C_FLAGS "-O0 -g3 -Wall -Wextra -Werror")

add_executable (interview_cpp
				main.cpp
				mega_cpp_include.h
				)

add_executable (interview_c
				main.c
				mega_c_include.h
				)
