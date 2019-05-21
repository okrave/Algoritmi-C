#include "n_tree.h"


tree* buildBTree(record** full_array_record){
    tree* nuovoAlbero = initTree();
    if(full_array_record == NULL){
        perror("L'array passato è vuoto");
    }else{
        nuovoAlbero->root = buildBinaryTree(full_array_record);
        return nuovoAlbero;
    }

}

node* buildBinaryTree(record** full_array_record){
	insertion_sort(NUM_MAX_RECORD,(void**)full_array_record,compare_int_ptr_struttura);
	return addBinaryNode(full_array_record,0,NUM_MAX_RECORD-1);
}


node* addBinaryNode(record** full_array_record, int first, int end){
	int medio = (first+end)/2;
	if(first > end){
		return NULL;
	}
	
	node* node = newNode((void*)full_array_record[medio]->parent);
	
	if(first <= medio-1){
		node->child = addBinaryNode(full_array_record,first,medio-1);
	}
	if(medio+1 <= end){
		if(node->child == NULL){
			node->child = newNode((void*)-1);
		}
		node->child->brother = addBinaryNode(full_array_record,medio+1,end);
	}
	return node;
}


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

int compare_int_ptr_struttura(void* ptr1, void* ptr2) {
	int i1 = (*((record*)ptr1)).parent;
	int i2 = (*((record*)ptr2)).parent;
	if(i1<i2) {
		return -1;
	}
	if(i1==i2) {
		return 0;
	}
	return 1;
}



