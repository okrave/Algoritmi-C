#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <math.h>

typedef int (*CompFunction)(void*, void*);

typedef struct record{
  int id;
  char dato_stringa[20];
  int dato_intero;
  double dato_double;
}record;


/**
* Scambia il contenuto di due celle dell'array
*
* @param a, indice di un elemento con cui effettuare lo scambio
*
* @param b, indice dell'altro elemento con cui effettuare lo scambio
*/
int swap(void** a, void** b);


/**
   * Ordina la porzione d'array a[first..last] con l'algoritmo di QuickSort (versione "base",
   * estraendo il pivot prima della partizione) [scelta_pivot = 1°elemento]
   *
   * @param a, array da ordinare
   *
   * @param first, indice del primo elemento della porzione dell'array "a" da ordinare
   *
   * @param last, indice dell'ultimo elemento della porzione dell'array "a" da ordinare
*/

int quick_sort(void** a,int first,int last,CompFunction compare);