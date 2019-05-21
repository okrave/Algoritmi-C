#ifndef __TEST_H__KJAHC38DJ__
#define __TEST_H__KJAHC38DJ__
#include "union_find.h"

// Starts a testing sesssion
void start_tests(const char* msg);

// Ends a testing session
void end_tests();

// Calls a testing function. The given test function should
// exit the program with an error if the test does not succeed.
void test(void (*test_fun)());

#endif



// Test sul funzionamento della union
void test_on_union_list(){

    unionFind* myTree = initNodeTree(5);
    myTree->arrayNode[0] = make_set((void*)4);
    myTree->arrayNode[1] = make_set((void*)2);
    myTree->arrayNode[2] = make_set((void*)1);
    myTree->arrayNode[3] = make_set((void*)7);
    myTree->arrayNode[4] = make_set((void*)8);
    myTree->size = 5;

    for(int i = 0;i<myTree->size-1;i++) {
        union_find(myTree->arrayNode[i],myTree->arrayNode[i+1]);
    }

    for(int i = 0;i<myTree->size-1;i++){
        assert(findSet(myTree->arrayNode[i]) == findSet(myTree->arrayNode[i+1]));
    }

}


//Test sul funzionamento del findset su due insieme disgiunti aventi entrambi due elementi
void test_on_disjoint_union(){
    unionFind* myTree = initNodeTree(4);
    myTree->arrayNode[0] = make_set((void*)4);
    myTree->arrayNode[1] = make_set((void*)2);

    myTree->arrayNode[2] = make_set((void*)1);
    myTree->arrayNode[3] = make_set((void*)7);

    union_find(myTree->arrayNode[0],myTree->arrayNode[1]);
    union_find(myTree->arrayNode[2],myTree->arrayNode[3]);

    assert((findSet(myTree->arrayNode[0]) == findSet(myTree->arrayNode[0])) && (findSet(myTree->arrayNode[2]) == findSet(myTree->arrayNode[3])));
    assert(findSet(myTree->arrayNode[0]) != findSet(myTree->arrayNode[3]));
}


//Test sulla union su puntatori a null
void test_on_null_array(){
    unionFind* myTree = initNodeTree(4);
    myTree->arrayNode[0] = NULL;
    myTree->arrayNode[1] = NULL;
    myTree->arrayNode[2] = NULL;
    myTree->arrayNode[3] = NULL;

    myTree->size = 4;

    for(int i = 0;i<myTree->size-1;i++) {
        union_find(myTree->arrayNode[i],myTree->arrayNode[i+1]);
    }

    for(int i = 0;i<myTree->size-1;i++){
        assert(findSet(myTree->arrayNode[i]) == findSet(myTree->arrayNode[i+1]));
    }
}


//Test union_find su stringhe
void test_on_string_array(){
    unionFind* myTree = initNodeTree(5);
    myTree->arrayNode[0] = make_set((void*)"nel");
    myTree->arrayNode[1] = make_set((void*)"mezzo");
    myTree->arrayNode[2] = make_set((void*)"del");
    myTree->arrayNode[3] = make_set((void*)"cammin");
    myTree->arrayNode[4] = make_set((void*)"di");
    myTree->size = 5;

    for(int i = 0;i<myTree->size-1;i++) {
        union_find(myTree->arrayNode[i],myTree->arrayNode[i+1]);
    }

    for(int i = 0;i<myTree->size-1;i++){
        assert(findSet(myTree->arrayNode[i]) == findSet(myTree->arrayNode[i+1]));
    }
}
int main(){

    start_tests("UnionFind");
    test(test_on_union_list);
    test(test_on_disjoint_union);
    test(test_on_null_array);
    test(test_on_string_array);
    end_tests();

}