
#include "test.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <math.h>

typedef int (*CompFunction)(void*, void*);

void build_heap(void** array, int size,int lh, CompFunction compare);

typedef struct record{
  int id;
  char dato_stringa[20];
  int dato_intero;
  double dato_double;
}record;


/**
* swap: Scambia il contenuto di due celle dell'array
*
* @param a, puntatore all'elemento con cui effettuare lo scambio
*
* @param b, puntatore all'elemento con cui effettuare lo scambio
*/
int swap(void** a, void** b);


/**
* Left: Ritorna il valore del figlio sinistro dell'elemento in posizione i
*
* @param size, lunghezza dell'array in cui stiamo lavorando
*
* @param i, indice del padre
*/
int Left(int size,int i);

/**
* Right: Ritorna il valore del figlio e destro dell'elemento in posizione i
*
* @param size, lunghezza dell'array in cui stiamo lavorando
*
* @param i, indice del padre
*/
int Right(int size,int i);


/**
* Parent: Ritorna il valore del parente dell'elemento in posizione i
*
* @param i, indice del figlio
*
*/
int Parent(int i);


/**
*
* @param size, dimensione dell'array da ordinare
*
* @param array puntatore che punta all'array da ordinare
*
* @CompFunction funzione compare
*/
void Max_heapify(int size,void **a, int i,CompFunction compare);


/*build_head*/
void build_heap(void**array ,int size,int lh,CompFunction compare);

