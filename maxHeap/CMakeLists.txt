cmake_minimum_required(VERSION 3.9)
project(maxHeap)

set(CMAKE_CXX_STANDARD 11)

add_executable(maxHeap test_heap.c max_heap.c test.c)