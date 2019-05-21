#include "Graph.h"




Graph* initGraph(int array_size){
    Graph* newGraph = (Graph*) malloc(sizeof(Graph));
    newGraph->array = (Vertex*) malloc(sizeof(Vertex)*array_size);
    newGraph->edgeArray = (Edge**) malloc(sizeof(Edge*)*array_size);
    newGraph->sizeEdgeArray = 0;
    newGraph->maxSize = array_size;
    //Inizializzo l'array di Vertex a NULL
    int i;
    for(i=0;i<array_size;i++){
        newGraph->array[i].key = NULL;
        newGraph->array[i].first = NULL;
    }
    return newGraph;

}


void newVertex(Graph* graph, char* supportKey, int index_vertex){
    graph->array[index_vertex].key = supportKey;
    graph->array[index_vertex].first = NULL;
    graph->array[index_vertex].color = WHITE;
    graph->array[index_vertex].distance_path = INFINITE;
    graph->array[index_vertex].index_parent = INFINITE;
}


Edge* newEdge(Graph* graph, double distance, int i_dest){
    Edge* nEdge = (Edge*) malloc(sizeof(Edge));
    nEdge->distance = distance;
    nEdge->index_vertex = i_dest;
    nEdge->next = NULL;
    return nEdge;
}


int find_edge(Graph* graph, int i_source , int i_dest){
    Edge* supportEdge = graph->array[i_source].first;
    int isIn = 0;

    while(supportEdge != NULL && isIn == 0){
        if(supportEdge->index_vertex == i_dest)
            isIn = 1;
        supportEdge = supportEdge->next;
    }
    return isIn;
}


void insert_edge(Graph* graph, int i_source, int i_dest, double distance){
    Edge* nEdge = newEdge(graph,distance,i_dest);
    if(graph->array[i_source].first ==NULL){ //Vertice non collegato
        graph->array[i_source].first = nEdge;
    }else{ //Inserimento in testa
        nEdge->next = graph->array[i_source].first;
        graph->array[i_source].first = nEdge;
    }
}



void add_link(Graph* graph, char* key_s, char* key_d, double distance){

    int i_source = hash_function(graph,key_s);
    int i_dest = hash_function(graph,key_d);

    if(graph->array[i_dest].key == NULL){
        newVertex(graph,key_d,i_dest);
    }

    if(graph->array[i_source].key == NULL){
        newVertex(graph,key_s,i_source);
    }

    if(find_edge(graph, i_source, i_dest) == 0){
        insert_edge(graph, i_source, i_dest, distance);
        insertEdgeArray(graph,i_source,i_dest,distance);
    }

    if(find_edge(graph, i_dest, i_source) == 0){
        insert_edge(graph, i_dest, i_source, distance);
    }
}


void insertEdgeArraySupport(Graph* graph, int i_source, int i_dest, double distance){

    graph->edgeArray[graph->sizeEdgeArray] = newEdge(graph,distance,i_dest);
    graph->edgeArray[graph->sizeEdgeArray]->source_vertex = i_source;
    graph->sizeEdgeArray ++;
}

void insertEdgeArray(Graph* graph, int i_source, int i_dest, double distance){
    if(graph->sizeEdgeArray < graph->maxSize){
        insertEdgeArraySupport(graph,i_source,i_dest,distance);
    }else{
        graph->maxSize = graph->maxSize +500;
        graph->edgeArray = realloc(graph->edgeArray,graph->maxSize);
        insertEdgeArraySupport(graph,i_source,i_dest,distance);
    }
}


void read_file_graph(Graph* graph, char* path_name){
    FILE* fp = fopen(path_name, "r");
    char* string_support = malloc(sizeof(char)*100);

    if(fp == NULL){
        perror("Error in fopen()");
    }

    while(fgets(string_support, 100, fp) != NULL){
        Record* record = (Record*)malloc(sizeof(Record));
        record->source = malloc(sizeof(char*) *STRING_LENGHT);
        record->destination = malloc(sizeof(char*) *STRING_LENGHT);
        sscanf(string_support,"%[^,],%[^,],%lf", record->source, record->destination, &record->distance);
        add_link(graph, record->source, record->destination, record->distance);

    }

    fclose(fp);
}

//*******************************************************************************************************************************************************
double pesoGraphSupport(Edge** array,int x){
    int i;
    double peso = 0.0;
    for(i=0;i<x;i++){
        peso = peso + array[i]->distance;
    }
    return peso;
}


double pesoGrafo(Graph* graph){
    if(graph->edgeArray == NULL || graph == NULL){ //Peso di un grafo nullo = 0;
        return 0;
    }else{
        return pesoGraphSupport(graph->edgeArray,graph->sizeEdgeArray);
    }
}



void stampGraphSupport2(Vertex* array,Edge* nEdge){
    while(nEdge != NULL){
        printf("%s -> ",array[nEdge->index_vertex].key);
        nEdge = nEdge->next;
    }
    printf("\n");
}

void stampGraphSupport(Vertex* array){
    int i;

    for(i=0;i<NUM_VERTEX;i++){
        if(array[i].key != NULL){
            printf("Vertex[%d] = %s ->",i,array[i].key);
            stampGraphSupport2(array,array[i].first);
        }
    }
}


void stampGraph(Graph* graph){
    if(graph->array == NULL){
        printf("Impossbibile stampare un grafo vuoto\n");
    }else{
        stampGraphSupport(graph->array);
    }
}


//*******************************************************************************************************************************************************

int hash_function(Graph* graph, char* x){
    int i;
    int boolCheck = 1;
    unsigned int hashVal = 0;
    while(boolCheck == 1){
        for(i=0; x[i]!= '\0';i++){
            hashVal = hashVal * 37 + x[i];
        }
        hashVal = hashVal % NUM_VERTEX;
        if(graph->array[hashVal].key == NULL || strcmp(graph->array[hashVal].key,x) == 0){
            boolCheck = 0;
        }
    }
    return hashVal;
}

//*******************************************************************************************************************************************************
//-----------------
void initialize_single_source(Graph* graph, int index_s){
    int i;
    for(i=0; i<NUM_VERTEX; i++){
        if(graph->array[i].key != NULL){
            graph->array[i].color = WHITE;
            graph->array[i].distance_path = INFINITE;
            graph->array[i].index_parent = INFINITE;
        }
    }
    graph->array[index_s].distance_path = 0;
}


void printArrayEdge(Graph* myGraph){
    if(myGraph != NULL){
        for(int i = 0;i< myGraph->sizeEdgeArray;i++){
            printf("distanza: %f partenza:%s arrivo:%s \n",myGraph->edgeArray[i]->distance,myGraph->array[myGraph->edgeArray[i]->index_vertex].key,myGraph->array[myGraph->edgeArray[i]->source_vertex].key);
        }
    }
}










