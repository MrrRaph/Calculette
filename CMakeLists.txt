cmake_minimum_required(VERSION 3.20)
project(calculette C)

set(CMAKE_C_STANDARD 99)

add_executable(calculette src/main.c includes/calc.h src/calc.c)
