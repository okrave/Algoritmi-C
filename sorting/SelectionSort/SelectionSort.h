//
// Created by luca on 17/12/17.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <math.h>
#ifndef SORTING_SELECTIONSORT_H
#define SORTING_SELECTIONSORT_H
typedef int (*CompFunction)(void*, void*);


// Starts a testing sesssion
void start_tests(const char* msg);

// Ends a testing session
void end_tests();

// Calls a testing function. The given test function should
// exit the program with an error if the test does not succeed.
void test(void (*test_fun)());

#endif //SORTING_SELECTIONSORT_H

typedef struct record{
    int id;
    char dato_stringa[20];
    int dato_intero;
    double dato_double;
}record;

void selectionSort(void** array, int size, CompFunction compare);
int swap(void** a, void** b);
