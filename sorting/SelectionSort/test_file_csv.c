#include "SelectionSort.h"

#define NUM_MAX_RECORD 20000000

void read_file(record ** full_array_record){
    FILE* fp;
    int i = 0;
    char stringa_supporto[60];
    char* stringa_restituita;
    if((fp = fopen("/home/luca/Scrivania/Università/Esame/sorting/records/records.csv","r"))==NULL){
        printf("Errore apertura file\n");
    }
    while(i<NUM_MAX_RECORD) {
        stringa_restituita = fgets(stringa_supporto,60, fp);
        if(stringa_restituita == NULL){
            printf("Errore nella fgets\n");
            break;
        }
        full_array_record[i] = (record*) malloc (sizeof(record));
        sscanf(stringa_supporto,"%d,%[^,],%d,%lf",&((*full_array_record[i]).id) ,(*full_array_record[i]).dato_stringa
                ,&((*full_array_record[i]).dato_intero),&((*full_array_record[i]).dato_double));
        i++;
    }
    fclose(fp);
}

int compare_string_ptr_struttura(void* ptr1, void* ptr2){
    char* s1 =(*((record*)ptr2)).dato_stringa;
    char* s2 = (*((record*)ptr1)).dato_stringa;
    return (strcmp(s2,s1));
}

int compare_int_ptr_struttura(void* ptr1, void* ptr2) {
    int i1 = (*((record*)ptr1)).dato_intero;
    int i2 = (*((record*)ptr2)).dato_intero;
    if(i1<i2) {
        return -1;
    }
    if(i1==i2) {
        return 0;
    }
    return 1;
}
int compare_double_ptr_struttura(void* ptr1, void* ptr2){
    double d1 = (*((record*)ptr1)).dato_double;
    double d2 = (*((record*)ptr2)).dato_double;
    if(d1<d2) {
        return -1;
    }
    if(d1==d2) {
        return 0;
    }
    return 1;
}

void free_resource(void ** full_array_record){
    int i;
    for(i=0;i<NUM_MAX_RECORD;i++){
        free(full_array_record[i]);
    }
    free(full_array_record);
}

void test_insertion_sort_on_int_struct(){
    record ** full_array_record = (record**) malloc (sizeof(record*)* NUM_MAX_RECORD);
    read_file(full_array_record);
    selectionSort((void**) full_array_record,NUM_MAX_RECORD,compare_int_ptr_struttura);
    int i;
    for(i=0;i<NUM_MAX_RECORD-1;i++){
        assert((*full_array_record[i]).dato_intero <= (*full_array_record[i+1]).dato_intero);
    }
    free_resource((void**) full_array_record);
}

void test_insertion_sort_on_string_struct(){
    record ** full_array_record = (record**) malloc (sizeof(record*)* NUM_MAX_RECORD);
    read_file(full_array_record);
    selectionSort((void**) full_array_record,NUM_MAX_RECORD,compare_string_ptr_struttura);

    int i;
    for(i=0;i<NUM_MAX_RECORD-1;i++){
        assert(strcmp((*full_array_record[i]).dato_stringa,(*full_array_record[i+1]).dato_stringa) <= 0);
    }
    free_resource((void**) full_array_record);
}

void test_insertion_sort_on_double_struct(){
    record ** full_array_record = (record**) malloc (sizeof(record*)* NUM_MAX_RECORD);
    read_file(full_array_record);
    selectionSort((void**) full_array_record,NUM_MAX_RECORD,compare_double_ptr_struttura);
    int i;
    for(i=0;i<NUM_MAX_RECORD-1;i++){
        assert((*full_array_record[i]).dato_double <= (*full_array_record[i+1]).dato_double);
    }
    free_resource((void**) full_array_record);
}

void main(){
    start_tests("SELECTION SORT ON FILE CSV");
    test(test_insertion_sort_on_int_struct);
    test(test_insertion_sort_on_string_struct);
    test(test_insertion_sort_on_double_struct);
    end_tests();
}