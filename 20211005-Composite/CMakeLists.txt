##
# Copyright (C) 2021 by AutoSense. All rights reserved.
# Gary Chan <chenshj35@mail2.sysu.edu.cn>
##
project(pattern_composite)
cmake_minimum_required(VERSION 3.5)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})
