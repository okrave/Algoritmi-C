#include "HeapSort.h"
/**
   * Ordina l'array con l'algoritmo di HeapSort
   * DESCRIZIONE: Dopo aver costruito una particolare "struttura" chiamata heap utilizzando un vettore
   * ad interi -Heap è una struttura inizializzata da un array dove i padr identificat dalle celle 
   * [array[1]..array[array.length/2]] devono essere maggiore dei figli identificati moltiplicando per due
   * l'indice del padre nell'array e *2+1; Utilizziamo la proprietà dell'heap che ci assicura che in posizione
   * della route dell'heap -Identificato dalla prima cella del nostro array- vi sarà sicuramente il valore massimo
   * della heap e quindi del nostro vettore una volta trovato il valore massimo lo si sposta nell'ultima cella
   * dell'array e si ecrementa la dimensione, così facendo non terremo conto dell'ultimo elemento in quanto
   * già sistemato.
   * COMPLESSITA': Tworst(n)=THETA(n^2), Tavg(n)=THETA(n^2), Tbest(n)=THETA(n) quindi O(n^2) &
   * OMEGA(n)
   */
 
   

int swap(void** a, void** b){
  void* tmp = *a; 
  *a = *b;
  *b = tmp;
}


int Left(int size,int i){
   return 2*i;
}


int Right(int size,int i){
   if(2*i >= size){
      return i;
   }
   return (2*i)+1;
}



int Parent(int i){   
   return i/2;
} 
 

void Max_heapify(int size,void **a, int i,CompFunction compare){
   int l = Left(size,i);
   int r = Right(size,i);
   int max,tmp;
   if(l<size+1 && compare(a[l],a[i])>0){     
      max = l;
   }else{
      max = i;   
   }
   if(r<size+1&& compare(a[r],a[max])>0){
      max = r;    
   }
   if(max != i){
      swap(&a[i],&a[max]);
      Max_heapify(size,a,max,compare);
   }
}


void build_heap(void**array ,int size,int lh,CompFunction compare){
  if(size>0){
    int i;
    for(i=size/2;i>=0;i--){      
        Max_heapify(size,array,i,compare); 
    }
    printf("\n");
    for(i=size;i>0;i--){
      swap(&array[0],&array[i]);
      lh--;           
      Max_heapify(lh,array,0,compare);       
    }
  }
}


