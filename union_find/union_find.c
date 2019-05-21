#include <stdio.h>
#include <stdlib.h>
#include "union_find.h"


unionFind* initNodeTree(int size){
    unionFind* myUnion =(unionFind*) malloc(sizeof(unionFind));
    myUnion->arrayNode = (Node**) malloc(sizeof(Node*)*size);
    myUnion->size = 0;
    myUnion->maxSize = size;
}


Node* newNode(void* element){
    Node* myNode = (Node*) malloc(sizeof(Node));
    myNode->element = element;
    myNode->rank = 0;
    myNode->parent = myNode;
    return myNode;
}


Node* findSet(Node* x){
    if(x != NULL){
        if(x->parent != x) {
            x->parent = findSet(x->parent);
        }
        return x->parent;
    }
    return NULL;
}


Node* make_set(void* element){
    Node* myNode = newNode(element);
    return myNode;
}


void union_find(Node* x, Node* y){
    if(x != NULL && y != NULL)
        link(findSet(x),findSet(y));
}


void link(Node* x, Node* y){

    if(x->rank > y->rank){
        y->parent = x;
    }else{
        x->parent = y;
        if(x->rank == y->rank)
            y->rank++;
    }
}


void stampTreeArray(unionFind* myTree){
    int i = 0;
    while(i<myTree->size){
        printf("%ld -> ",(long int)myTree->arrayNode[i]->element);
        printf("%ld\n",(long int)findSet(myTree->arrayNode[i])->element);
        i++;
    }
}


