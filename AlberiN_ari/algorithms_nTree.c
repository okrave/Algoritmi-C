#include "n_tree.h"



void stampa_albero(node* parent){
	if(parent != NULL){
		printf("%ld\n",(long int)parent->element);
	}
	if(parent->brother != NULL)
		stampa_albero(parent->brother);
	if(parent->child != NULL)
		stampa_albero(parent->child);
	
}

node* newNode(void* element){
	node* newNode = (node*) malloc(sizeof(node));
	newNode->child = newNode->brother = newNode->parent = NULL;
	newNode->element = element;
	if(newNode)
		return newNode;
}


tree* initTree(){
	tree* newTree = (tree*) malloc (sizeof(tree));
	
	newTree->root = NULL;
	newTree->numberOfElement = 0;
	
	if(newTree)
		return newTree;
		
	return NULL;
}


tree* buildTree(record** full_array_record){
	int i;
	tree* newTree = initTree();
	if(newTree != NULL){
		for(i = 0;i <NUM_MAX_RECORD;i++){
			addNode(full_array_record[i],newTree);
			newTree->numberOfElement += 1;
		}
	}else{ //newTree == NULL
		perror("Errore creazione albero \n");
		return NULL;
	}
}


void addNode(record* singleRecord, tree* tree){
	
	if(tree->root == NULL){ //Siamo nella root
		tree->root = createNode(NULL,(void*) singleRecord->parent);
		addChild(tree->root,(void*) singleRecord->child);
		addChild(tree->root,(void*) singleRecord->brother);
		addChild(tree->root,(void*) singleRecord->brother2);
	}else{
		node* parent = search((void*)singleRecord->parent,tree->root);
		if(parent){
			addChild(parent,(void*) singleRecord->child);
			addChild(parent,(void*) singleRecord->brother);
			addChild(parent,(void*) singleRecord->brother2);
		}else{			
			printf("parente di %ld non trovato\n",singleRecord->child);
		}
	
	}

}

node* createNode(node* parent, void* element){
	node* newNode = (node*) malloc(sizeof(node));
	if(newNode){ // Root dell'albero
		newNode->child = newNode->brother = NULL;
		newNode->parent = parent;
		newNode->element = element;
		return newNode;
	}
	perror("Errore creazione nuovo nodo\n");
}



node* addChild(node* parent,void* dato){
	if(dato != 0){		
		if(parent->child){ //Se esiste il primo figlio 
			return addBrother(parent->child,dato);
		}else{
			node* supportNode = createNode(parent,dato);
			parent->child = supportNode;
			return supportNode;
		}
	}
}





node* addBrother(node* firstChild, void* dato){
	if(firstChild->brother == NULL){
		node* supportNode = createNode(firstChild->parent,dato);
		firstChild->brother = supportNode;
		return supportNode;
	}else{
		addBrother(firstChild->brother,dato);
	}
}


/**************************_FUNZIONI DI SUPPORTO_******************************/
 

node* search(void* dato, node* x){
	if(x == NULL)
		return NULL;
	if(x->element == dato)
		return x;
	node* t = search(dato,x->child);
	if(t == NULL)
		t = search(dato,x->brother);
	return t;
}




void stampaAlbero(node* nodo){
	printf(" %ld",(long int)nodo->element);
	if(nodo->brother){
		stampaAlbero(nodo->brother);
	}
	
	if(nodo->child){
		printf("\n");
		printf("padre: %ld -> ",(long int)nodo->element);
		stampaAlbero(nodo->child);
	}
}

void stampaAlbero1(node* nodo){
    if(nodo != NULL){
        node* c = nodo->child;
        printf("padre:%ld ->",nodo->element);
        while(c!= NULL){
            stampaAlbero1(c);
            c = c->brother;
        }
    }

}

int maxBrother(tree* myTree){
    if(myTree == NULL || myTree->root == NULL)
        return 0;
    else
        return maxBrotherSupport(myTree->root,0);
}

int maxBrotherSupport(node* nodo, int maxAlt){
	int ris = 0;
	if(nodo->brother){
		ris = maxBrotherSupport(nodo->brother,maxAlt+1);
		if(maxAlt < ris){
			maxAlt = ris;
		}
	}
	if(nodo->child && maxAlt < 2){
		ris = maxBrotherSupport(nodo->child, 0);
		if(maxAlt < ris){
			maxAlt = ris;
		}		
	}
	return maxAlt;
}



int isBinarySupport(tree* myTree){
	if(maxBrother(myTree) < 2){
		return 1;
	}else{
		return 0;
	}
		
}

int isBinary(tree* myTree){
    if(myTree == NULL)
        return 1;
    else
        return isBinarySupport(myTree);
}



/**
 * Funzione che calcola il numero di nodi di un albero
 *
 * @param albero sul quale calcolare i nodi
 * @return il numero dei nodi totali
*/
int nodeNumber(tree* myTree){
    if(myTree->root == NULL || myTree == NULL)
        return 0;
    else
        return nodeNumberSupport(myTree->root);
}
int nodeNumberSupport(node* node){
	int child;
	int brother;
	if(node == NULL)
		return 0;
	child = nodeNumberSupport(node->child);
	brother = nodeNumberSupport(node->brother);
	return child+brother+1;
}


/*
 * Ritorna la massima altezza dell'albero cioè il ramo più lungo
 *
 * @param nodo albero su cui calcolare l'altezza massima
 * @param maxAlt massima altezza fino a quel punto
 *
**/
int maxAltezza(tree* myTree){
    if(myTree == NULL || myTree->root == NULL)
        return 0;
    else
        return maxAltezzaSupport(myTree->root);
}
int maxAltezzaSupport(node* myNode){
	int child = 0;
	int brother = 0;
	if(myNode->child != NULL){
		child = maxAltezzaSupport(myNode->child);
	}
	if(myNode->brother != NULL){
		brother = maxAltezzaSupport(myNode->brother);
	}

    if(myNode->brother == NULL && myNode->child == NULL){
        return 0;
    }
	if(child < brother){
		return brother;
	}else{
		return child +1 ;
	}
}




record** read_file(int multywaytree){
	FILE* fp;
	char stringa_supporto[60];
    if(multywaytree == 1){
        if((fp= fopen("/home/luca/CLionProjects/multywaytree_1.csv","r"))==NULL)
            perror("Errore apertura file \n");
    }else{
        if((fp= fopen("/home/luca/CLionProjects/multywaytree_2.csv","r"))==NULL)
            perror("Errore apertura file \n");
    }
	record ** full_array_record = (record**) malloc (sizeof(record*)* NUM_MAX_RECORD); 

    for(int i = 0;i<NUM_MAX_RECORD;i++){
	    if(fgets(stringa_supporto,60,fp)){
	        full_array_record[i] = (record*) malloc (sizeof(record));
	        sscanf(stringa_supporto,"N:%ld,N:%ld,N:%ld,N:%ld",&((*full_array_record[i]).parent) ,&((*full_array_record[i]).child) ,&((*full_array_record[i]).brother),&((*full_array_record[i]).brother2));
	    }
    }
    return full_array_record;

}


