cmake_minimum_required(VERSION 3.9)
project(sorting)

set(INSERTION_SOURCE
        InsertionSort/Insertion_sort.c InsertionSort/Insertion_sort.h
        InsertionSort/Insertion_sort_test.c InsertionSort/test.c)

set(INSERTION_CSV
        InsertionSort/Insertion_sort.c InsertionSort/Insertion_sort.h
        InsertionSort/test_file_csv.c InsertionSort/test.c)



set(HEAPSORT_SOURCE
        HeapSort/HeapSort.c HeapSort/Heap_sort_test.c
        HeapSort/HeapSort.h HeapSort/Test.c
        )

set(HEAPSORT_CSV
        HeapSort/HeapSort.c HeapSort/test_struttura_csv.c
        HeapSort/HeapSort.h HeapSort/Test.c
        )


set(MERGE_SOURCE
        MergeSort/MergeSort.c MergeSort/MergeSort.h
        MergeSort/Merge_sort_test.c MergeSort/test.c
        )

set(MERGE_CSV
        MergeSort/MergeSort.c MergeSort/MergeSort.h
        MergeSort/test_struttura_csv.c MergeSort/test.c
        )


set(QUICK_SOURCE
        QuickSort/QuickSort.c QuickSort/Quick_sort.h
        QuickSort/test_quick_sort.c QuickSort/test.c
        )

set(QUICK_CSV
        QuickSort/QuickSort.c QuickSort/Quick_sort.h
        QuickSort/test_struttura_csv.c QuickSort/test.c
        )

set(SELECTION_SOURCE
        SelectionSort/SelectionSort.c SelectionSort/SelectionSort.h
        SelectionSort/test.c SelectionSort/test_selection_sort.c
        )
set(SELECTION_CSV
        SelectionSort/SelectionSort.h SelectionSort/SelectionSort.c
        SelectionSort/test.c SelectionSort/test_file_csv.c
        )

add_executable(HEAPSORT_TEST ${SELECTION_CSV})


