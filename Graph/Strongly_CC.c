#include "Graph.h"

int _SCC_support(Graph* graph, int i, Edge* tmp, int counter_elements_CSS){
    counter_elements_CSS++;
    graph->array[i].color = BLACK;

    while(tmp != NULL){//Per tutti gli archi del vertice passato
        if(graph->array[tmp->index_vertex].color == WHITE){
            counter_elements_CSS = _SCC_support(graph, tmp->index_vertex, graph->array[tmp->index_vertex].first, counter_elements_CSS);
        }
        tmp = tmp->next;
    }
    return counter_elements_CSS;
}

void strongly_connected_components(Graph* graph){
    int counter_SCC = 0;
    int counter_elements_CSS;
    initialize_single_source(graph, 0);


    int i, x;
    for(i = 0; i<NUM_VERTEX; i++){
        if(graph->array[i].key != NULL){
            if(graph->array[i].color == WHITE){
                counter_elements_CSS = _SCC_support(graph, i, graph->array[i].first , 0);// Per tutti i vertici non nulli ancora non analizzati(== WHITE);
                printf("Elements in SCC n°%d: %d\n",counter_SCC, counter_elements_CSS);
                printf("Elemento non connesso: %s\n",graph->array[i].key);
                counter_SCC++;
            }
        }
    }
    printf("Total Strongly Connected Componenets in the graph: %d\n",counter_SCC);
    printf("\n");
}
