cmake_minimum_required (VERSION 2.6)

project (interview)

set (CMAKE_C_STANDARD 11)
set (CMAKE_C_STANDARD_REQUIRED ON)
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)

set (CMAKE_CXX_FLAGS "-O0 -g3 -Wall -Wextra -Werror -Wno-error=unused-variable -Wno-error=unused-but-set-variable")
set (CMAKE_C_FLAGS "-O0 -g3 -Wall -Wextra -Werror -Wno-error=unused-variable -Wno-error=unused-but-set-variable")

find_package (Threads REQUIRED)

add_subdirectory(
    contrib/lggm build_lggm
    )

include_directories (
    .
    contrib/lggm/include
    )

add_executable (interview_cpp
    main.cpp
    mega_cpp_include.h
    )

target_link_libraries ( interview_cpp
    lggm
    ${CMAKE_THREAD_LIBS_INIT}
    )

add_executable (interview_c
    main.c
    mega_c_include.h
    )

target_link_libraries ( interview_c
    lggm
    ${CMAKE_THREAD_LIBS_INIT}
    )
