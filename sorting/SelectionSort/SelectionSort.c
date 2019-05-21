#include "SelectionSort.h"




int find_min(void**array, int first,int size,CompFunction compare){
    int i;
    int min = first;
    for(i=first;i<size;i++){
        if(compare(array[i],array[min]) < 0){
            min = i;
        }
    }

    return min;

}

int swap(void** a, void** b){
    void* tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(void** array, int size, CompFunction compare){
    int i;
    for(i=0;i<size;i++){
        int min = find_min(array,i,size,compare);
        swap(&array[min],&array[i]);
    }
}
