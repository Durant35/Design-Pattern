##
# Copyright (C) 2021 by AutoSense. All rights reserved.
# Gary Chan <chenshj35@mail2.sysu.edu.cn>
##
project(design_pattern)
cmake_minimum_required(VERSION 3.5)

file(GLOB PATTERN_DIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*)
foreach(PATTERN_DIR ${PATTERN_DIRS})
    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${PATTERN_DIR}/CMakeLists.txt)
        add_subdirectory(${PATTERN_DIR})
    endif()
endforeach()
