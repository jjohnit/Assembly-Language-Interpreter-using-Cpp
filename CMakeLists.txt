cmake_minimum_required(VERSION 3.23)
project(Project_4)

set(CMAKE_CXX_STANDARD 11)

add_executable(Project_4 main.cpp Hardware.cpp Hardware.h Instruction.cpp Instruction.h ALI.cpp ALI.h)
