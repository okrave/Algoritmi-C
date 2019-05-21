#include "Graph.h"
#include "/home/luca/Scrivania/algoritmiProject2016/Algoritmi2016/laboratorio-algoritmi-2016-17/union_find/union_find.c"
#include "/home/luca/Scrivania/Università/Esame/sorting/QuickSort/QuickSort.c"

Graph* kruskalSupport(Graph* myGraph){
    int i;
    unionFind* myList = malloc(sizeof(unionFind));
    myList->arrayNode = malloc(sizeof(Node*)* NUM_VERTEX);

    //Creo gli insiemi con i vertici
    for(i=0;i<NUM_VERTEX;i++){
        if(myGraph->array[i].key != NULL){
            myList->arrayNode[i] = make_set(myGraph->array[i].key);
        }
    }

    Graph* unionGraph = initGraph(NUM_VERTEX);
    quick_sort((void**)(myGraph->edgeArray),0,myGraph->sizeEdgeArray-1,compare_double_ptr_struttura);
    for(i=0;i<myGraph->sizeEdgeArray-1;i++){

        if(findSet(myList->arrayNode[myGraph->edgeArray[i]->index_vertex]) != findSet(myList->arrayNode[myGraph->edgeArray[i]->source_vertex])){
            add_link(unionGraph,(char* )myGraph->array[myGraph->edgeArray[i]->index_vertex].key, (char* )myGraph->array[myGraph->edgeArray[i]->source_vertex].key, myGraph->edgeArray[i]->distance);
            union_find(myList->arrayNode[myGraph->edgeArray[i]->index_vertex],myList->arrayNode[myGraph->edgeArray[i]->source_vertex]);
        }
    }

    return unionGraph;
}


Graph* kruskal(Graph* myGraph){
    if(myGraph == NULL)
        return NULL;
    else
        return kruskalSupport(myGraph);
}

int compare_double_ptr_struttura(void* ptr1, void* ptr2){

    double d1 = (*((Edge*)ptr1)).distance;
    double d2 = (*((Edge*)ptr2)).distance;
    if(d1<d2) {
        return -1;
    }
    if(d1==d2) {
        return 0;
    }
    return 1;
}


