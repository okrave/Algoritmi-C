#include "max_heap.h"

/**
 * Un heap è una struttura dati composta da un array che possiamo considerare come un albero binario quasi completo. Ogni nodo
 * dell'albero corrisponde a un elemento dell'array. Tutti i livelli dell'albero sono completamente riempiti, tranne eventualmente
 * l'ultimo che può essere riempito da sinistra fino a un certo punto. La radice dell'albero è A[1]. Se i è l'indice del nodo
 * il padre sarà l'elemento in A[i/2] il figlio sinistro A[2i+1] e il figlio destro A[2i+2]
 *
 * Proprietà max-heap: Per ogni nodo diverso dalla radice A[Parent(i)] >= A[i] cioè l'elemento del nodo padre sarà maggiore
 * di quello di entrambi i fig
 *
 **/

void buildHeap(void ** a, int size,CompFunction compare){

	int newSize = (size/2)-1;
	int i;

	for(i = newSize;i>=0;i--){
		heapify(a,size,i,compare);						
	}

}	
	

void heapify(void** a, int size, int i,CompFunction compare){

	int max = i;

	if(size > LCHILD(i)){
		if(compare(a[i],a[LCHILD(i)])<0){
			max = LCHILD(i);
		}else{
			max = i;
		}		
	}

	if(size > RCHILD(i)){//esiste il figlio destro
		if(compare(a[max],a[RCHILD(i)])<0){
			max = RCHILD(i);
		}
	}

	if(max!=i){
		swap(&a[i],&a[max]);				
		heapify(a,size,max,compare);
	}
	
}

void swap(void** a, void** b){

   void* tmp;
   tmp = *a;
   *a = *b;
   *b = tmp;
}


int isHeap(void** a, int sizeHeap,CompFunction compare){
	int size = ((sizeHeap+1)/2)-1;
	int i,flag = 1;
	for(i = 0; i<=size && flag ;i++) {
        if(RCHILD(i) < sizeHeap) {
            if (compare(a[i], a[LCHILD(i)]) < 0 || compare(a[i], a[RCHILD(i)]) < 0) {
                flag = 0;
            }
        }else{

            if(compare(a[i], a[LCHILD(i)]) < 0)
                flag = 0;
        }
	}
	return flag;
}

int isHeapRic(void** a, int i,int size,CompFunction compare){
	
	if(i >= 0){
		if(size > RCHILD(i)){
			if(compare(a[i],a[LCHILD(i)]) < 0 || compare(a[i],a[RCHILD(i)]) < 0){
				return 0;
			}else{
				return(1 && isHeapRic(a,i-1,size,compare));
			}
		}else{
			if(compare(a[i],a[LCHILD(i)]) < 0 ){
				return 0;
			}else{
				return(1 && isHeapRic(a,i-1,size,compare));
			}
		}
	}	
}

void freeRisorse(void** a,int size){
	int i;
	for(i=0;i<size;i++){
		free(a[i]);
	}
	free(a);
}



	
	
	
	
	
