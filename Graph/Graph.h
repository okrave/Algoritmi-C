

#ifndef GRAFI_C_PROVA_H

#define GRAFI_C_PROVA_H
#define INFINITE -1
#define NUM_VERTEX 100000
#define STRING_LENGHT 100
typedef int (*CompFunction)(void*, void*);
typedef enum {WHITE,BLACK} colouration;

#endif //GRAFI_C_PROVA_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <time.h>
#include <math.h>

typedef struct Edge{
    double distance;
    int index_vertex;
    int source_vertex;
    struct Edge* next;
}Edge;

typedef struct Vertex{
    char* key;
    Edge* first;
    colouration color;
    double distance_path;
    int index_parent;

}Vertex;

typedef struct Graph{
    Vertex* array;
    Edge** edgeArray;
    int sizeEdgeArray;
    int maxSize;
}Graph;

typedef struct record{
    char* source;
    char* destination;
    double distance;
}Record;


int compare_double_ptr_struttura(void* ptr1, void* ptr2);




/**
 * funzione che utilizza l'algoritmo di dijkstra per inizializzare a null tutti i campi dei vertici
 *
 * @param graph grafo di cui inizializzare i vertici
 * @param index_s indice del vertice di partenza
 * */
void initialize_single_source(Graph* graph, int index_s);


/**
 * funzione che inserisce l'arco nell'array di archi del grafo avente come vertice di partenza il vertice in posizione i_source e come vertice
 * di arrivo il vertice in posizione i_dest
 *
 * @param graph grafo in cui inserire il nuovo arco
 * @param i_source indice del vertice di partenza dell'arco
 * @param i_dest indice del vetice di arrivo dell'arco
 * @param distance distanza tra il vertice di partenza e il vertice di arrivo
 * */
void insertEdgeArray(Graph* graph, int i_source, int i_dest, double distance);


/**
 * funzione di supporto che inserisce l'arco nell'array di arche del grafo
 *
 * @param graph grafo in cui inserire il nuovo arco
 * @param i_source indice del vertice di partenza dell'arco
 * @param i_dest indice del vetice di arrivo dell'arco
 * @param distance distanza tra il vertice di partenza e il vertice di arrivo
 *
 * */
void insertEdgeArraySupport(Graph* graph, int i_source, int i_dest, double distance);


/**
 * Prese due città crea un collegamento tra di esse attraverso la creazione dell'arco,
 * se le città(vertex) non sono ancora esistenti li crea.
 *
 */
void add_link(Graph* graph,char* key_s ,char* key_d ,double distance);


/**
 * Funzione per la stampa dei vertici dell'array;
 *
 * @param array array di vertici da stampare
 *
 * */
void stampGraphSupport(Vertex* array);
void stampGraph(Graph* graph);

/**
 * Funzione di supporto per la stampa dei vertici dell'array;
 *
 * @param array array di vertici da stampare
 *
 * */
void stampGraphSupport2(Vertex* array,Edge* nEdge);


/**
 * funzione che inserisce nella lista di archi del vertice in posizione i_source l'arco con il vertice in posizione i_source se quest'ultimo
 * non esiste, nulla altrimenti
 *
 * @param graph grafo a cui aggiungere l'arco
 * @param i_source indice che rappresenta la posizione del vertice di partenza dell'arco da inserire
 * @param i_dest indice che rappresenta la posizione del vertice di arrivo dell'arco da inserire
 * @param distance distanza tra il vertice i_source e il vertice i_dest
 *
 * */
void insert_edge(Graph* graph, int i_source, int i_dest, double distance);


/**
 * Cerca un arco del vertice array[i_source]
 *
 * @param graph grafo in cui cercare il vertice
 * @param i_souce indice del vertice in cui cercare
 * @param i_dest indice del vertice destino dell'arco
 *
 */
int find_edge(Graph* graph, int i_source , int i_dest);


/**
 * Crea un nuovo vertice del grafo
 *
 * @param graph grafo in cui creare il nuovo vertice
 * @param supportKey key del nuovo vertice
 * @param index_vertex indice del nuovo vertice
 *
 */
void newVertex(Graph* graph, char* supportKey, int index_vertex);


/**
 *
 * Legge il file .csv con i dati relativi ai vertici e collegamenti tra di essi e li aggiunge al grafo
 *
 * @param graph grafo a cui aggiungere il nodo letto
 * @param path_name path del file .cvs
 *
 * */
void read_file_graph(Graph* graph, char* path_name);


/**
 * newEdge crea un nuovo arco che avrà come fonte il uno dei vertici dell'array e come destino il vertice in posizione graph->array[i_dest];
 *
 * @param graph grafo in cui creare il nuovo arco
 * @param distance distanza dal vertice al destino
 * @param i_dest indice del nodo di destinazione
 *
 *
 */
Edge* newEdge(Graph* graph, double distance, int i_dest);


/**
 * Inizializza il grafo.
 *
 * @param array_size lunghezza dell'array che conterrà i vertici e gli archi del grafo
 *
 * */
Graph* initGraph(int array_size);


/**
 * L'algoritmo restituisce un albero di cammino minimo in qui vi sono presenti i vertici e i relativi archi. L'algoritmo utilizza
 * i metodi di un altra struttura dati "unionFind":
 *  - makeset: crea un insieme con un elemento, quest'ultimo sarà il rappresentante dell'insieme
 *  - findset: restitiusce il parente nonchè rappresentante dell'insieme in qui fa parte l'elemento
 *  - unionFind: unisce due insieme, prendendo l'insieme più piccolo e unendolo a quello più grande(rank)
 * Dopo aver creato tramite il makeset tanti insiemi quanti sono i vertici, avremo quindi NUM_MAX_VERTEX insiemi con rappresentanti i
 * vertici stessi, si ordinano in ordine crescente gli archi del grafo. Si scorrono tutti gli archi (u,v )ordinati partendo da quello avente
 * la distanza più piccola e si uniscono gli insiemi che hanno come rappresentati u (vertice di partenza) e v (vertice destino) se questi sono
 * diversi, nel caso in cui l'arco abbia due elementi appartenenti allo stesso insieme non si fa nulla.
 * L'algoritmo restituisce un grafo avente tutti i vertici esaminati e tutti gli archi che hanno permesso la visita;
 *
 * @param myGraph Grafo su cui applicare kruskal
 *
 * */
Graph* kruskal(Graph* myGraph);
Graph* kruskalSupport(Graph* myGraph);


/**
 * funzione hash che serve per calcolare la posizione di un vertice all'interno dell'arrayVertex del grafico, la funzione prende la chiave del
 * vertice e fa una sommatoria di ogni lettera della chiave per un numero primo (37), a questa sommatoria verrà poi calcolato il resto per
 * NUM_MAX_RECORD restituendo così l'indice che sarà la posizione del vertice aggigunto
 *
 * @param graph grafo in cui verra calcolato l'hash
 * @param x elemento che sarà una variabile per il calcolo dell'hash
 *
 */
int hash_function(Graph* graph, char* x);


/**
 * funzione che restituisce il peso del grafo, il peso totale sarà la sommatoria della chiave di tutti i vertici presenti nel grafo
 *
 * @param graph grafo di cui calcolare il peso
 * */
double pesoGrafo(Graph* graph);


/**
 * funzione di supporto che calcola il preso totale del grafo
 *
 * @param array insieme di vertici del grafo di cui devo calcolare il peso
 * */
double pesoGraphSupport(Edge** array, int x);


/**
 * Funzione che calcola gli alberi strettamente connessi
 *
 * @param graph grafo di cui calcolare i sottoalberi strettamente connessi
 *
 * */
void strongly_connected_components(Graph* graph);
int _SCC_support(Graph* graph, int i, Edge* tmp, int counter_elements_CSS);


/**
 * funzione che utilizzando l'agoritmo di dijkstra stampa il cammino minimo ricoprente
 *
 * @param graph grafo di cui calcolare il cammino minimo
 * @param index_x indice del vertice di partenza
 * @param index_y indice del vertice di arrivo
 *
 * */
void print_min_path(Graph* graph, int index_x, int index_y);