
#ifndef __TEST_H__KJAHC38DJ__
#define __TEST_H__KJAHC38DJ__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <math.h>
#include <assert.h>
#define LCHILD(x) 2*x+1
#define RCHILD(x) 2*x+2
#define PARENT(x) (x-1)/2
#define SIZE 5


// Starts a testing sesssion
void start_tests(const char* msg);

// Ends a testing session
void end_tests();

// Calls a testing function. The given test function should
// exit the program with an error if the test does not succeed.
void test(void (*test_fun)());

typedef int (*CompFunction)(void*, void*);

#endif


/**
 * Funzione che costruisce un heap partendo da un array dato: Sapendo che tutti gli elementi del sotto array
 * A[(n/2)+1..n] sono foglie e quindi ciascuno di essi è già un heap con un solo elemento, la funzione buildHeap
 * attraversa i restanti nodi dell'albero ed esegue heapify per ciascuno di essi
 *
 * @param heap heap da creare
 * @param a vettore che contiene gli elementi che saranno inseriti nell'heap
 * @param size lunghezza del vettore
 * @param compare puntatore a funzione di comparazione di due elementi
 *
 **/
void buildHeap(void** a, int size,CompFunction compare);


/**
 * Funzione che costruisce il max-heap e che ne mantiene la proprieta fondamentale: quando questa viene chiamato
 * si assume che gli alberi left(i) e right(i) siano max-heap. heapify fa scendere il valore A[i] nel max-heap
 * in modo che il sotto albero con radice di indice i diventi un max-heap. A ogni passo, viene determinato il più
 * grande tra gli elementi A[i] A[Left(i)] A[Rigth(i)]; il suo indice viene memorizzato in max. Se A[i] è più
 * grande, allora il sottoalbero con radice del nodo i è un max-heap e la procedura termina. Altrimenti, uno dei
 * due ha l'elemento più grande e A[i] viene scambiato con A[max]. Adesso però il sottoalbero con radice in max
 * potrbbe violare la proprietà per questo di fa una chiamata anche su a[max]
 *
 * @param heap heap da "sistemare"
 * @param size lunghezza dell'array da sistemare
 * @param compare puntatore a funzione di comparazione di due elementi
 *
 **/
void heapify(void ** a, int size, int i,CompFunction compare);


/**
 * Scambia il contenuto di due celle dell'array
 *
 * @param a, indice di un elemento con cui effettuare lo scambio
 *
 * @param b, indice dell'altro elemento con cui effettuare lo scambio
 */
void swap(void** a, void** b);


/**
 * Funzione iterativa che controlla se l'array passato è un maxHeap: Per fare questo controllo partiamo da
 * A[(n/2)-1] cioè la root che rappresenta il sotto albero più "in basso" e controlliamo se è un max heap, se lo
 * è continua a controllare per tutti i padri, diversamente ritorna false.
 *
 * @param a rappresentazione dell'array come maxHeap.
 * @param sizeHeap rappresenta la lunghezza dell'array.
 * @param compare puntatore a funzione di comparazione di due elementi
 *
 */
int isHeap(void** a, int sizeHeap,CompFunction compare);


/**
 * Funzione che controlla ricorsivamente se l'array passato è un maxHeap;
 *
 * @param a vettore di elementi
 * @i indice del vettore che rappresenta l'elemento da controllare
 *
 */
int isHeapRic(void** a, int i,int size,CompFunction compare);

