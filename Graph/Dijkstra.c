
#include "Graph.h"

typedef struct Queue{
    struct Node_Queue* first;
}Queue;

typedef struct Node_Queue{
    int index_vertex;
    struct Node_Queue* next;
}Node_Queue;


Queue* create_queue(){
    Queue* new_queue = (Queue*)malloc(sizeof(Queue));
    new_queue->first = NULL;
    return new_queue;
}

void _insert_queue_support(Node_Queue* support_node,int index_vertex){
    if(support_node->next == NULL){
        Node_Queue* new_node = malloc(sizeof(Node_Queue));
        new_node->index_vertex = index_vertex;
        support_node->next = new_node;
        new_node->next = NULL;
    }else{
        _insert_queue_support(support_node->next,index_vertex);
    }
}
void insert_queue(Queue* queue,int index_vertex){
    if(queue->first == NULL){
        Node_Queue* new_node = malloc(sizeof(Node_Queue));
        new_node->index_vertex = index_vertex;
        queue->first = new_node;
        new_node->next = NULL;
    }else{
        _insert_queue_support(queue->first,index_vertex);
    }
}
int isEmpty(Queue* queue){
    if(queue->first == NULL){
        return 0;
    }
    return 1;
}

void _delete_support(Node_Queue* x, Node_Queue* y){
    x->next = y->next;
    y->next = NULL;
    free(y);
}

void delete(Queue* queue, Node_Queue* x,Node_Queue* y){
    if(x == NULL){
        queue->first = y->next;
        y = NULL;
        free(y);
    }else{
        _delete_support(x,y);
    }
}

int min_delete(Graph* graph ,Queue* queue){
    Node_Queue* tmp = queue->first;
    Node_Queue* min = tmp;
    Node_Queue* min_prev = NULL;
    int index_min;
    while(tmp->next != NULL){
        if(graph->array[min->index_vertex].distance_path > graph->array[tmp->next->index_vertex].distance_path){
            min_prev = tmp;
            min = tmp->next;
        }
        tmp = tmp->next;
    }
    index_min = min->index_vertex;
    delete(queue,min_prev,min);
    graph->array[index_min].color = BLACK;
    return index_min;
}

/************************************************************************************/
void relax(Graph* graph, int index_min, Queue* queue, Edge* edge){
    if(graph->array[edge->index_vertex].distance_path == INFINITE){
        insert_queue(queue, edge->index_vertex);
        graph->array[edge->index_vertex].distance_path = graph->array[index_min].distance_path + edge->distance;
        graph->array[edge->index_vertex].index_parent = index_min;
    }
    if(graph->array[edge->index_vertex].color == WHITE){
        if(graph->array[edge->index_vertex].distance_path > graph->array[index_min].distance_path + edge->distance){
            graph->array[edge->index_vertex].distance_path = graph->array[index_min].distance_path + edge->distance;
            graph->array[edge->index_vertex].index_parent = index_min;
        }
    }
}
void dijkstra(Graph* graph, int index_start){
    int index_min;
    initialize_single_source(graph,index_start);
    Queue* new_queue = create_queue();
    insert_queue(new_queue,index_start);

    while(isEmpty(new_queue) == 1){
        index_min = min_delete(graph,new_queue);
        Edge* tmp = graph->array[index_min].first;
        while(tmp != NULL){
            relax(graph,index_min,new_queue,tmp);
            tmp = tmp->next;
        }
    }
    free(new_queue);
}

void _print_min_path_support(Graph* graph,int index_tmp){
    if(graph->array[index_tmp].distance_path == 0){
        printf("START: %s\n", graph->array[index_tmp].key);
    }else{
        _print_min_path_support(graph, graph->array[index_tmp].index_parent);
        printf("-%s, (%lf Km)\n",graph->array[index_tmp].key, graph->array[index_tmp].distance_path/1000);
    }
}
void print_min_path(Graph* graph, int index_x, int index_y){
    dijkstra(graph, index_x);
    if(graph->array[index_y].distance_path != INFINITE){
        printf("MINIMUM PATH:\n");
        printf("-FROM: %s\n", graph->array[index_x].key);
        printf("-TO: %s\n", graph->array[index_y].key);
        printf("\n");
        _print_min_path_support(graph, index_y);
        printf("-TOTAL DISTANCE: %lf\n", graph->array[index_y].distance_path/1000);
        printf("\n");
    }else{
        printf("Path from %s to %s does not exist\n", graph->array[index_x].key, graph->array[index_y].key);
        printf("\n");
    }
}

