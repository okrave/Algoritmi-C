cmake_minimum_required(VERSION 3.9)
project(Graph C)

set(CMAKE_C_STANDARD 99)

add_executable(Graph test_on_graph.c Kruskal.c Dijkstra.c Graph.c Graph.h Strongly_CC.c test.c)