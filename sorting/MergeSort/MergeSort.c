#include "MergeSort.h"

void merge(void**array,int low, int centre, int sup, CompFunction compare){
	int index_1 = low;
	int index_2 = centre + 1;
	int index_tmp = 0;
	int size = sup - low +1;
	void** tmp_array = (void**) malloc(sizeof(void*) * size);
	while((index_1 <= centre) && (index_2 <= sup)){
		if(compare(array[index_1], array[index_2]) <= 0){
			tmp_array[index_tmp] = array[index_1];
			index_1++;
			index_tmp++;
		}else{
			tmp_array[index_tmp] = array[index_2];
			index_2++;
			index_tmp++;
		}
	}
	while(index_1 <= centre){
		tmp_array[index_tmp] = array[index_1];
		index_1++;
		index_tmp++;
	}
	while(index_2 <= sup){
		tmp_array[index_tmp] = array[index_2];
		index_2++;
		index_tmp++;
	}
	index_tmp = 0;
	int i;
	for(i=low; i<=sup; i++){
		array[i] = tmp_array[index_tmp];
		index_tmp++;
	}
	free(tmp_array);
}

void msortBasic(void**array,int low, int sup, CompFunction compare){
	int centre = low + (sup-low)/2;
	if(low < sup){
		msortBasic(array, low, centre, compare);
		msortBasic(array, centre+1, sup, compare);
		merge(array, low, centre, sup, compare);
	}	
}


