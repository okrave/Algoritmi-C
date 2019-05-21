
#include "Graph.h"

void test_on_graph(){
    Graph* myGraph = initGraph(NUM_VERTEX);
    add_link(myGraph,"A","B",20.5);
    add_link(myGraph,"A","C",12.5);
    add_link(myGraph,"A","D",43.5);
    add_link(myGraph,"D","B",5.0);
    add_link(myGraph,"C","D",7.0);
    assert(1);
    stampGraph(myGraph);
}

void test_on_graph_weigth(){
    Graph* myGraph = initGraph(NUM_VERTEX);
    add_link(myGraph,"C","A",7.0);
    add_link(myGraph,"C","E",8.0);
    add_link(myGraph,"A","E",3.0);
    add_link(myGraph,"A","B",6.0);
    add_link(myGraph,"E","B",4.0);
    add_link(myGraph,"E","F",3.0);
    add_link(myGraph,"B","F",2.0);
    add_link(myGraph,"B","D",5.0);
    add_link(myGraph,"F","D",2.0);

    double somma = 7.0 + 8.0 +3.0 +6.0 +4.0 +3.0+2.0+5.0+2.0;

    double y = pesoGrafo(myGraph);

    assert(y == somma);
}
//Come esempio ho preso un esercizio di esame: 07/06/2017
void test_on_graph_kruskal(){
    Graph* myGraph = initGraph(NUM_VERTEX);
    add_link(myGraph,"C","A",7.0);
    add_link(myGraph,"C","E",8.0);
    add_link(myGraph,"A","E",3.0);
    add_link(myGraph,"A","B",6.0);
    add_link(myGraph,"E","B",4.0);
    add_link(myGraph,"E","F",3.0);
    add_link(myGraph,"B","F",2.0);
    add_link(myGraph,"B","D",5.0);
    add_link(myGraph,"F","D",2.0);
    Graph* supportGraph = kruskal(myGraph);
    int i ;
    int numVertex = 0;
    int numEdge = 0;
    double distance = 0.0;

    for(i=0;i<NUM_VERTEX;i++){
        if(supportGraph->array[i].key!=NULL){
            numVertex += 1;
        }
    }
    for(i=0;i<NUM_VERTEX;i++){
        if(supportGraph->edgeArray[i]!=NULL){
            numEdge += 1;
            distance += supportGraph->edgeArray[i]->distance;
        }
    }

    assert(numVertex == 6);
    assert(numEdge == 5);
    assert(distance = 17.0);
}

void test_on_graph_dijkstra(){
    Graph* myGraph = initGraph(NUM_VERTEX);
    read_file_graph(myGraph,"/home/luca/Scrivania/Università/Esame/Grafi/italian_dist_graph.csv");

    int index_x, index_y;
    index_x = hash_function(myGraph,"torino");
    index_y = hash_function(myGraph,"catania");
    print_min_path(myGraph, index_x, index_y);
    free(myGraph->array);
    free(myGraph);
}

void test_on_graph_strongly_connected_components(){

    Graph* myGraph = initGraph(NUM_VERTEX);
    read_file_graph(myGraph,"/home/luca/Scrivania/Università/Esame/Grafi/italian_dist_graph.csv");
    strongly_connected_components(myGraph);

}

void test_on_graph_kruskalCSV(){
    Graph* myGraph = initGraph(NUM_VERTEX);
    read_file_graph(myGraph,"/home/luca/Scrivania/Università/Esame/Grafi/italian_dist_graph.csv");

    Graph* supportGraph = kruskal(myGraph);

    int i ;
    int numVertex = 0;
    int numEdge = 0;
    double distance = 0.0;

    for(i=0;i<NUM_VERTEX;i++){
        if(supportGraph->array[i].key!=NULL){
            numVertex += 1;
        }
    }
    for(i=0;i<NUM_VERTEX;i++){
        if(supportGraph->edgeArray[i]!=NULL){
            numEdge += 1;
            distance += supportGraph->edgeArray[i]->distance;
        }
    }
    assert(numVertex == 18640);
    assert(numEdge == 18637);
    assert(distance > 89939912 && distance < 89939913);
    printf("\nnumVertex:%d\n",numVertex);
    printf("numEdge:%d\n",numEdge);
    printf("distance:%f\n\n\n",distance);
}


int main(){
    start_tests("HeapSort");
    test(test_on_graph_kruskalCSV);
    test(test_on_graph_strongly_connected_components);
    test(test_on_graph_dijkstra);
    test(test_on_graph);
    test(test_on_graph_kruskal);
    test(test_on_graph_weigth);
    end_tests();


}