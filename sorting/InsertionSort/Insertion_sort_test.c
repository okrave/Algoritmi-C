
#include <assert.h>
#include "Insertion_sort.h"
#include "test.h"

// HELPER FUNCTIONS

int compare_long_int(void* ptr1, void* ptr2) {
  long int el1 = (long int) ptr1;
  long int el2 = (long int) ptr2;
  if(el1<el2) {
    return -1;
  }
  if (el1 == el2) {
    return 0;
  }
  return 1;
}

int compare_int_ptr(void* ptr1, void* ptr2) {
  int i1 =  *(int*)ptr1;
  int i2 =  *(int*)ptr2;
  if(i1<i2) {
    return -1;
  }
  if(i1==i2) {
    return 0;
  }
  return 1;
}

int* new_int(int value) {
  int* result = (int*) malloc(sizeof(int));
  *result = value;
  return result;
}


// TESTS
void test_insertion_sort_on_null_array() {
  long int* array = NULL;
  insertion_sort(0,(void**)array, compare_long_int);
  assert(1);
}

void test_insertion_sort_on_full_array() {
  assert(sizeof(void*) == sizeof(long));
  long int array[5] = { 11, 4, 1, 8, 10 };
  insertion_sort(5, (void**) array, compare_long_int);
  int i;
  for(i=0; i<4; ++i) {
    assert(array[i] <= array[i+1]);
  }
}

void test_insertion_sort_on_full_ptr_array() {
  int* array[5];
  array[0] = new_int(11);
  array[1] = new_int(4);
  array[2] = new_int(1);
  array[3] = new_int(8);
  array[4] = new_int(10);
  insertion_sort(5,(void**)array, compare_int_ptr);
  int i;
  for(i=0; i<4; ++i) {
    assert(*array[i] <= *array[i+1]);
  }
  for(i=0; i<5 ;++i) {
    free(array[i]);
  }
}

void test_insertion_sort_on_ordered_array(){
  long int array[] ={1,2,3,4,5};
  insertion_sort(5,(void**)array,compare_long_int);
  int i;
  for(i=0;i<4;i++){
    assert(array[i]<=array[i+1]);
  }
}

void test_insertion_sort_on_equal_array(){
  long int array[] ={5,5,5,5,5};
  insertion_sort(5,(void**)array,compare_long_int);
  int i;
  for(i=0;i<4;i++){
    assert(array[i]<=array[i+1]);
  }
}

int main(int argc, char const *argv[]) {
  start_tests("insertion sort");
  test(test_insertion_sort_on_null_array);
  test(test_insertion_sort_on_full_array);
  test(test_insertion_sort_on_full_ptr_array);
  test(test_insertion_sort_on_ordered_array);
  test(test_insertion_sort_on_equal_array);
  end_tests();
  return 0;
}
