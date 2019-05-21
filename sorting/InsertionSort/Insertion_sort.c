#include "Insertion_sort.h"


int swap(void** a, void** b){
   void* tmp;
   tmp = *a;
   *a = *b;
   *b = tmp;
}


void insertion_sort(int size, void** array, CompFunction compare){
	int i,j;
	void* key;
	for(i = 1; i<size;i++){
		key = array[i];
		for(j = i-1; j>=0 && compare(array[j],key)>=0;j--){
			swap(&array[j+1],&array[j]);
		}
		array[j+1] = key;
	}
}

























