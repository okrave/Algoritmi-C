cmake_minimum_required(VERSION 3.9)
project(AlberiN_ari)

set(NARY_NORMAL_TEST
        test_nTree.c algorithms_nTree.c test.c
        )

set(NARY_CSV_TEST
        test_file_csv.c algorithms_nTree.c test.c binaryTree.c
        )

add_executable(NARY_TEST ${NARY_NORMAL_TEST})