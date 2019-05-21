cmake_minimum_required(VERSION 3.9)
project(union_find C)

set(CMAKE_C_STANDARD 99)

add_executable(union_find union_find.c test.c test_on_union.c union_find.h)