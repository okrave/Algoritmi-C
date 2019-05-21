#include "max_heap.h"



int compare_string_ptr1(void* ptr1, void* ptr2){  
  char* s1 =(char*) ptr1; 
  char* s2 =(char*) ptr2; 

  return strcmp(s1,s2);

}

int compare_long_int1(void* ptr1, void* ptr2) {
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


void heap_test_on_no_maxHeapRic(){
    long int a[] = {1,2,3,4,5,6,7,8};
    int y =isHeapRic((void**)a,7,((7+1)/2)-1,compare_long_int1);
    assert(y == 0);
}

void heap_test_on_maxHeapRic(){
    long int a[] = {8,7,6,5,4,3,2,1};
    int y =isHeap((void**)a,7,compare_long_int1);
    assert(y == 1);
}


void heap_test_on_no_maxHeap(){
    long int a[] = {1,2,3,4,5,6,7,8};
    int y =isHeap((void**)a,7,compare_long_int1);
    assert(y == 0);
}

void heap_test_on_maxHeap(){
    long int a[] = {8,7,6,5,4,3,2,1};
    int y =isHeap((void**)a,7,compare_long_int1);
    assert(y == 1);
}

void heap_test_on_long_int(){
	long int a[] = {20,2,3,4,5,70,123,1};
	heap_test_on_string_worse_array();
	buildHeap((void**)a,8,compare_long_int1);
	int i;	
	for(i=0; i<(5/2)-1; i++) {
   		assert(a[i] >= a[LCHILD(i)] && a[i] >= a[RCHILD(i)]);
  	}  
}

void heap_test_on_equal_array(){
	long int a[] = {20,20,20,20,20,20,20,20};
	heap_test_on_string_worse_array();
	buildHeap((void**)a,8,compare_long_int1);
	int i;	
	for(i=0; i<(5/2)-1; i++) {
   		assert(a[i] >= a[LCHILD(i)] && a[i] >= a[RCHILD(i)]);
  	}  
}


//Il caso peggiore è nel caso in cui tutti i parenti sono minori dei figli
void heap_test_on_string_worse_array(){
	int i;
	char* a[11] = {"aaa","bbb","ccc","ddd","eee","fff","ggg","hhh","iii","lll","mmm"};	
	buildHeap((void**)a,11,compare_string_ptr1);
	for(i=0; i<(11/2)-1; i++) {
   		assert(strcmp(a[i],a[LCHILD(i)]) > 0 && strcmp(a[i],a[RCHILD(i)]) >= 0);
  	}  
}

void heap_test_on_string_best_array(){
	int i;
	char* a[5] = {"eee","ddd","ccc","bbb","aaa"};	
	buildHeap((void**)a,5,compare_string_ptr1);
	for(i=0; i<(5/2)-1; i++) {
   		assert(strcmp(a[i],a[LCHILD(i)]) >= 0 && strcmp(a[i],a[RCHILD(i)]) >= 0);
  	}  
}

void heap_test_on_null_array(){
  long int* array = NULL;
  buildHeap((void**)array,0,compare_long_int1);
  assert(1);
}


void main(){
	start_tests("HeapSort");
    test(heap_test_on_no_maxHeapRic);
    test(heap_test_on_maxHeapRic);
    test(heap_test_on_maxHeap);
    test(heap_test_on_no_maxHeap);
	test(heap_test_on_long_int);
	test(heap_test_on_string_worse_array);
	test(heap_test_on_string_best_array);
	test(heap_test_on_null_array);
	test(heap_test_on_equal_array);
	end_tests();

}


