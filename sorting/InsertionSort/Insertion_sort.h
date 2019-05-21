#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "test.h"
#include <time.h>
#include <math.h>
#ifndef __SELECTION_SORT_H_KEIXJ4PDU3__
#define __SELECTION_SORT_H_KEIXJ4PDU3__

typedef int (*CompFunction)(void*, void*);
#endif
void insertion_sort(int size, void** array, CompFunction compare);

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
 * Ordina l'array con l'algoritmo di InsertionSort
 * DESCRIZIONE: si prende via via l'elemnto successivo dell'array e lo si inserisce nella parte
 * già ordinata rispettando l'ordine; questo procedimento viene ripetuto dal secondo all'ultimo
 * elemento inclusi. Per inserire ogni volta un elemento nella parte ordinata bisogna
 * "fargli posto" spostando a destra di un posto tutti gli elementi della parte ordinata.
 * COMPLESSITA': Tworst(n)=THETA(n^2), Tavg(n)=THETA(n^2), Tbest(n)=THETA(n) quindi O(n^2) &
 * OMEGA(n)
 *
 * @param size, dimensione dell'array da ordinare
 *
 * @param array puntatore che punta all'array da ordinare
 *
 * @CompFunction funzione compare
 */
void insertion_sort(int size, void** array, CompFunction compare);