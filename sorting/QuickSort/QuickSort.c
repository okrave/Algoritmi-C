#include "Quick_sort.h"


int swap(void** a, void** b){
   void* tmp;
   tmp = *a;
   *a = *b;
   *b = tmp;
}


int partition(void**a,int first,int last,CompFunction compare){
      int pivot = first;
      int i = first+1;
      int j = last;  
      while(i<=j){
            if(compare(a[i],a[pivot])<0){      
                  i++;
            }else{
                  if(compare(a[j],a[pivot])>0){         
                        j--;
                  }else{
                        swap(&a[i],&a[j]);
                        i++;
                        j--;
                  }
            }
      }
      swap(&a[pivot],&a[j]);
      return j;
}


int quick_sort(void** a,int first,int last,CompFunction compare){
   int j;
   if(first<last){
       j = partition(a,first,last,compare);
       quick_sort(a,first,j-1,compare);
       quick_sort(a,j+1,last,compare);
   }

}




