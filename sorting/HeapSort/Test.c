#include <stdio.h>
#include <time.h>
#include <math.h>

#include "test.h"

static clock_t start_time;
static unsigned int num_tests;

void start_tests(const char* msg) {
  start_time = clock();
  num_tests = 0;
  printf("\nStarting tests on:%s\n", msg);
}

// Ends a testing session
void end_tests() {
  double elapsed_time = (clock() - start_time)/(double)CLOCKS_PER_SEC;
  printf(" /*\n  * %d tests passed in %4.5f seconds\n /*\n", num_tests, elapsed_time);
}

void test(void (*test_fun)()) {
  num_tests += 1;
 
  test_fun();
}
