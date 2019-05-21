#include "n_tree.h"

void test_on_int_nTree();
void test_on_string_nTree();
void test_on_null_nTree();
void test_on_binary_tree();
void test_on_no_binary_tree();
void test_on_null_tree_maxDepth();
void test_on_tree_maxDepth();
void test_on_only_root_tree_maxDepth();
void test_on_tree_onlyRoot_numberOfNode();
void test_on_tree_numberOfNode();
void test_on_tree_maxChild();
void test_on_null_tree_maxChild();

int main(){
    start_tests("n-ary Tree test");
    test(test_on_int_nTree);
    test(test_on_string_nTree);
    test(test_on_null_nTree);
    test(test_on_binary_tree);
    test(test_on_no_binary_tree);
    test(test_on_null_tree_maxDepth);
    test(test_on_tree_maxDepth);
    test(test_on_tree_onlyRoot_numberOfNode);
    test(test_on_only_root_tree_maxDepth);
    test(test_on_tree_numberOfNode);
    test(test_on_tree_maxChild);
    test(test_on_null_tree_maxChild);
    end_tests();


}



void test_on_null_tree_maxChild(){
    tree* myTree = initTree();
    int y = maxBrother(myTree);
    assert(y == 0);

}
void test_on_tree_maxChild(){
    tree* myTree = initTree();
    myTree->root = newNode((void*)11);
    node* n1 = addChild(myTree->root,(void*)1);
    node* n2 = addChild(myTree->root,(void*)2);
    node* n3 = addChild(n1,(void*)3);
    node* n4 = addChild(n1,(void*)4);

    int y = maxBrother(myTree);
    assert(y == 1);

    node* n5 = addChild(n2,(void*)5);
    node* n6 = addChild(n2,(void*)6);
    node* n7 = addChild(n2,(void*)7);
    node* n8 = addChild(n2,(void*)8);
    y = maxBrother(myTree);
    assert(y == 3);

}

void test_on_tree_numberOfNode(){
    int y;
    tree* myTree = initTree();

    y = nodeNumber(myTree);
    assert(y == 0);

    myTree->root = newNode((void*)11);

    y = nodeNumber(myTree);
    assert(y == 1);

    node* n1 = addChild(myTree->root,(void*)1);
    node* n2 = addChild(myTree->root,(void*)2);
    node* n3 = addChild(n1,(void*)3);
    node* n4 = addChild(n1,(void*)4);
    node* n5 = addChild(n2,(void*)5);
    node* n6 = addChild(n2,(void*)6);

    y= nodeNumber(myTree);
    assert(y == 7);


}

void test_on_tree_onlyRoot_numberOfNode(){
    tree* myTree = initTree();
    myTree->root = newNode((void*)11);
    int y = nodeNumber(myTree);
    assert(y == 1);
}

//Fino ad ora un albero binario bilanciato, aggiungiamo ad un nodo una lista di figli,nipoti,pronipoti in modo da confermare la max altezza
void test_on_tree_maxDepth(){
    tree* myTree = initTree();
    myTree->root = newNode((void*)11);
    node* n1 = addChild(myTree->root,(void*)1);
    node* n2 = addChild(myTree->root,(void*)2);
    node* n3 = addChild(n1,(void*)3);
    node* n4 = addChild(n1,(void*)4);
    node* n5 = addChild(n2,(void*)5);
    node* n6 = addChild(n2,(void*)6);
    //Fino ad ora un albero binario bilanciato,
    node* n7 = addChild(n3,(void*)7);
    node* n8 = addChild(n7,(void*)8);
    node* n9 = addChild(n8,(void*)9);
    node* n10 = addChild(n9,(void*)10);
    int y = maxAltezza(myTree);
    assert(y == 6);

}

void test_on_only_root_tree_maxDepth(){
    tree* myTree = initTree();
    myTree->root = newNode((void*)10);

    assert(maxAltezza(myTree) == 0);
}

void test_on_null_tree_maxDepth(){
    tree* myTree = initTree();
    myTree->root = NULL;

    assert(maxAltezza(myTree) == 0);
}
void test_on_binary_tree(){
    tree* myTree = initTree();
    myTree->root = newNode((void*)10);
    node* n1 = addChild(myTree->root,(void*)1);
    node* n2 = addChild(myTree->root,(void*)2);
    node* n3 = addChild(n1,(void*)3);
    node* n4 = addChild(n1,(void*)4);
    node* n5 = addChild(n2,(void*)5);
    node* n6 = addChild(n2,(void*)6);
    assert(isBinary(myTree));
}

void test_on_no_binary_tree(){
    tree* myTree = initTree();
    myTree->root = newNode((void*)10);
    node* n1 = addChild(myTree->root,(void*)1);
    node* n2 = addChild(myTree->root,(void*)2);
    node* n7 = addChild(myTree->root,(void*)7);
    node* n3 = addChild(n1,(void*)3);
    node* n4 = addChild(n1,(void*)4);
    node* n5 = addChild(n2,(void*)5);
    node* n6 = addChild(n2,(void*)6);
    assert(!isBinary(myTree));
}

void test_on_int_nTree(){
	tree* myTree = initTree();
	myTree->root = newNode((void*)5);
	node* n1 = addChild(myTree->root,(void*)6);
	node* n2 = addChild(myTree->root,(void*)7);
	node* n3 = addChild(myTree->root,(void*)8);


	assert(myTree->root->element == 5);
    assert(myTree->root->child->element == 6);
    assert(myTree->root->child->brother->element == 7);
    assert(myTree->root->child->brother->brother->element ==8);
}

void test_on_string_nTree(){
    tree* myTree = initTree();
    myTree->root = newNode((void*) "Why");
    node* n1 = addChild(myTree->root,(void*) "Are");
    node* n2 = addChild(myTree->root,(void*) "So");
    node* n3 = addChild(myTree->root,(void*) "Serious");

    assert(myTree->root->element == "Why");
    assert(myTree->root->child->element == "Are");
    assert(myTree->root->child->brother->element == "So");
    assert(myTree->root->child->brother->brother->element =="Serious");

}

void test_on_null_nTree(){
    tree* myTree = initTree();
    myTree->root = newNode((void*) NULL);
    node* n1 = addChild(myTree->root,(void*) NULL);
    node* n2 = addChild(myTree->root,(void*) NULL);
    node* n3 = addChild(myTree->root,(void*) NULL);
    assert(1);
}



