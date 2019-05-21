#include "n_tree.h"
/*
* read_file: creazione struttura che conterra i dati del file csv
*/

void test_on_nAry_tree_noBynary();
void test_on_nAry_node_number();
void test_on_nAry_tree_binary();
void test_on_binary_tree();
void test_on_array_record();
void test_on_nAry_maxDepth1();
void test_on_nAry_maxDepth2();


int main(){

    start_tests("n-ary Tree test");
    test(test_on_nAry_tree_noBynary);
    test(test_on_nAry_node_number);
    test(test_on_nAry_tree_binary);
    test(test_on_binary_tree);
    test(test_on_array_record);
    test(test_on_nAry_maxDepth1);
    test(test_on_nAry_maxDepth2);
    end_tests();

}

void test_on_nAry_tree_noBynary(){
    record** full_array_record = read_file(2);
    tree* myTree = buildTree(full_array_record);
    assert(isBinary(myTree));
}

void test_on_nAry_tree_binary(){
    record** full_array_record = read_file(1);
    tree* myTree = buildTree(full_array_record);
    assert(!isBinary(myTree));
}

void test_on_nAry_node_number(){
    record** full_array_record = read_file(2);
    tree* myTree = buildTree(full_array_record);

    int y = nodeNumber(myTree);

    assert(y == 1001);
}


void test_on_nAry_maxDepth2(){
    record** full_array_record = read_file(2);
    tree* myTree = buildTree(full_array_record);

    int y = maxAltezza(myTree);
    assert(y == 22);
}

void test_on_nAry_maxDepth1(){
    record** full_array_record = read_file(1);
    tree* myTree = buildTree(full_array_record);

    int y = maxAltezza(myTree);
    assert(y == 20);
}

void test_on_array_record(){
    int i;
    record** full_array_record = read_file(1);
    tree* newTree = buildBTree(full_array_record);

    for(i=0;i<NUM_MAX_RECORD-1;i++){
       assert((*full_array_record[i]).parent <= (*full_array_record[i+1]).parent);
    }
}

void test_on_binary_tree(){
    record** full_array_record = read_file(1);
    tree* newTree = buildBTree(full_array_record);
    assert(isBinary(newTree));
}

