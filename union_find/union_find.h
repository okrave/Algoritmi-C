//
// Created by luca on 06/12/17.
//

#ifndef UNION_FIND_UNION_FIND_H
#define UNION_FIND_UNION_FIND_H
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#endif //UNION_FIND_UNION_FIND_H


/**
 * Struttura che definisce l'elemento dell'insieme
 *
 * @param element puntatore contenente il dato dell'elemento
 * @param parent puntatore al parente nonchè rappresentante dell'insieme
 * @param rank numero degli elementi dell'insieme appartenente
 *
 * */
typedef struct node{
    void* element;
    struct node* parent;
    int rank;
}Node;


/**
 * Struttura che definisce l'insieme
 *
 * @param arrayNode array contenente i puntatori agli elementi dell'insiemi
 * @param size intero che determina l'ultimo indice pieno dell'array
 * @param maxSize intero che determina la massima capacità dell'array
 *
 * */
typedef struct unionFind{
    // Array di insiemi
    Node** arrayNode;
    int size;
    int maxSize;
}unionFind;


/**
 *  Funzione che inizializza la struttura e le sue variabili: Si crea dinamicamente la struttura dati e l'array che conterrà gli elementi d
 *  ell'insieme di grandezza size.
 *
 *  @param size : Grandezza dell'array contenente gli elementi dell'insieme
 *  @return la struttura creata
 *
 * */
unionFind* initNodeTree(int size);


/**
 * Funzione che crea un nuovo elemento con dato "element"
 *
 * @param element dato dell'elemento che di deve creare
 * @return l'elemento creato
 *
 * */
Node* newNode(void* element);


/**
 * Funzione che ritorna il rappresentante dell'insieme in cui appartiene l'elemento x: nel primo passaggio risale il cammino di ricerca
 * per trovare la radice, nel secondo discende il cammino di ricerca per aggiornare i nodi in modo che puntino direttamente alla radice
 *
 * @param x : elemento dell'insieme di cui si vuole sapere il rappresentante
 * @return l'elemento rappresentante dell'insieme
 *
 * */
Node* findSet(Node* x);

/**
 * Funzione per la creazione dell'insieme con un solo elemento;
 *
 * @param element dato dell'unico elemento dell'insieme
 *
 */
Node* make_set(void* element);


/**
 * La funzione chiama una subrutine "link" per l'unione dei due insiemi in cui fanno parte x e y
 *
 * @param x primo elemento
 * @param y secondo element
 *
 * */
void union_find(Node* x, Node* y);

/**
 * Funzione di supporto che unisce gli insiemi in cui fanno parte x e y: Quando viene chiamato link abbiamo due casi, se le radici non hanno
 * lo stesso rango, trasformiamo la radice di rango più alto nel padre della radice di rango più basso. Se le radici hanno lo stesso rango,
 * trasformiamo arbitrariamente una delle radici in padre e ne incrementiamo il rango.
 *
 * @param x primo elemento
 * @param y secondo elemento
 *
 * */
void link(Node* x, Node* y);

/**
 * Funzione che stampa a video l'array di insiemi e i loro rappresentanti
 *
 * @param myTree struttura che contiene gli insiemi da stampare a video
 *
 * */
void stampTreeArray(unionFind* myUnion);
