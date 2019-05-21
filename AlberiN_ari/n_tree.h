#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <math.h>

#define NUM_MAX_RECORD  1001
#define TRUE 1
#define FALSE 0

typedef int(*CompFunction) (void*,void*);

typedef struct node{
	void* element;
	struct node* parent;
	struct node* child;
	struct node* brother;
}node;


typedef struct tree{
	node* root;
	int numberOfElement;
}tree;


typedef struct record{
	long int parent;
	long int child;
	long int brother;
	long int brother2;
}record;


/**
 * Crea il puntatore ad un nuovo albero
 *
 * @return ritorna il puntatore al nuovo albero se creato con successo, null altrimenti
 *
 */
tree* initTree();

/**
 * buildTree: costruisce l'albero a partire dall'array ricevuto
 *
 * @param full_array_record array di puntatori a record
 * @return il puntatore all'albero se creato, null altrimenti
 */

tree* buildTree(record** full_array_record);

/**
 * Funzione che crea (alloca dinamicamente) un nodo e lo ritorna
 *
 * @param parent padre del nodo creato
 * @param element elemento nel nodo creato
 * @return il nodo creato
 *
 * */
node* createNode(node* parent, void* element);

/**
 * Funzione per cercare un nodo in un albero
 *
 * @param dato cioè l'elemento da cercare
 * @param nodo albero in cui cercare il nodo
 * @return il nodo trovato se presente, null altrimenti
 *
 **/
node* search(void* dato, node* x);

/**
 * addBrother: aggiunge fratello di un figlio già esistente il nodo aggiunto sarà 'l'ultimo' dei figli
 *
 * @param firstChild nodo fratello precedente del nodo da aggiungere
 * @param dato dato che avrà il nodo da aggiungere
 *
 */

node* addBrother(node* firstChild, void* dato);

/**
 * addChild: aggiunge un nodo come figlio in un albero, la funzione controlla se il nodo ha già un figlio, se lo ha chiama una funzione
 * di supporto addBrother() che appunto aggiunge un fratello nella 'lista' dei figli, in caso contrario crea un nodo e lo aggiunge come
 * figlio
 *
 * @param parent nodo a cui devo aggiungere il figlio
 * @param dato dato che avrà il nodo da aggiungere
 *
 */
node* addChild(node* parent,void* dato);


/**
 * buildBinaryTree && buildBinaryTree: funzione che ricevendo un array restituisce l'albero binario utilizzando la struttura dati child-siblind. La funzione
 * prende l'array ricevuto e lo ordina in modo crescente, l'inserimento avviene prendendo l'elemento in posizione media dell'array, una volta
 * fatto questo si divide l'array in due sotto array, rispettivamente con n/2 elementi che chiameremo A[0..n] e B[0..m] (m+n= cardinalita array
 * di partenza) a questo punto prenderemo il valore medio di A[0..n] cioè A[n/2] e il valore medio di B[0..m] cioè B[n/2] e rispettivamente
 * li inseriremo nel figlio sinistro e figlio destro nel nodo, in questo modo riusciamo a bilanciare l'albero senza alcuna funzione di supporto
 *
 * @param full_array_record array di elementi che comporranno l'albero
 *
 * */
tree* buildBTree(record** full_array_record);
node* buildBinaryTree(record** full_array_record);

/**
 * addBinaryNode: funzione che aggiunge gli elementi ricevuti tramite array all'albero
 *
 * @param full_array_record array di elementi che comporranno l'albero
 * @param start indice del primo elemento dell'array
 * @param end indice dell'ultimo elemento dell'array
 *
 * */
node* addBinaryNode(record** full_array_record, int start, int end);


/**
 * Funzione che crea (alloca dinamicamente) un nodo e lo ritorna a differenza di createNode non vi è il campo parent(padre)
 *
 * @param element elemento nel nodo creato
 * @return il nodo creato
 *
 * */
node* newNode(void* element);


/**
 * read_file: funzione che legge il file in cui vi sono tutti i record e li memorizza in un array. In questo caso ho creato la variabile
 * multiwaytree in quanto abbiamo da analizzare due diversi file multywaytree1 e multywaytree2. Se vogliamo analizzare il primo file allora
 * porremo multywaytree = 1 altrimenti porremo multywaytree = 2
 *
 * @param multywaytree identificativo che determina quale dei due file analizzare
 * */
record** read_file(int multywaytree);


/**
 * Funzione che ritorna il numero massimo di figli dell'albero
 *
 * @param nodo in cui calcoliamo il numero di fratelli
 * @param maxAlt altezza massima dell'albero fino a quel punto
 *
 */
int maxBrother(tree* myTree);


/**
 * Funzione che ritorna la cardinalita dell'albero cioè il numero dei suoi elementi
 *
 * @nodo puntatore a root dell'albero
 *
 * */
int nodeNumber(tree* myTree);

/**
 * Funzione che calcola la profondita dell'albero
 *
 * @param myTree albero di cui calcolare la profondita
 * @return la profondita dell'albero
 * */
int maxAltezza(tree* myTree);


/**
 * Funzione che determina se un albero è binario o meno, in questo caso utilizzo una funzione di support maxBrother che calcola
 * il nomero massimi di figli di un albero, ovviamente se maxBrother < 2 (si considera 0 come primo fratello) allora avremo un albero
 * binario
 *
 * @param myTree albero di cui voglio sapere se è binario o meno
 * @return 1 se è binario 0 altrimenti
 * */
int isBinary(tree* myTree);


/**
 * Aggiunge un nodo avente come campi le variabili dentro record all'albero
 *
 * @param singleRecord record conteneti i dati del nodo
 * @param tree albero in cui aggiungere il nodo
 * */
void addNode(record* singleRecord, tree* tree);


int compare_int_ptr_struttura(void* ptr1, void* ptr2) ;
int swap(void** a, void** b);
void insertion_sort(int size, void** array, CompFunction compare);
void stampaAlbero(node* nodo);
void stampaAlbero1(node* nodo);






