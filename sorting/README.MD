# Esame laboratorio algoritmi 2016/2017






Relazione relativa al primo esercizio di laboratorio, algoritmi di ordinamento:

    - HeapSort
    - MergeSort
    - InsertionSort
    - QuickSort

Di sotto verranno riportati alcune osservazione in merito al file esaminato, file di tipo .csv con 20.000.000 di record in cui vi erano
rispettivamente valore_intero, valore_stringa, valore_double. I test sono stati fatti prendendo tutti i 20 Milioni di Record ed applicando
l'algoritmo di ordinamento.

## HeapSort:

                               ------------------------------------------------------

                               Starting tests on:Heap_sort
                                **************DOUBLE record with file csv************

                               Array ordinato in 62.33011 seconds

                               ** Fine riempimento-ordinamento dell'array**

                               **** Inizio assert sull'array
                                /*
                                 * 1 tests passed in 79.83948 seconds
                                /*

                               ------------------------------------------------------

                               Starting tests on:Heap_sort
                                **************INT record with file csv************

                               Array ordinato in 55.80082 seconds

                               ** Fine riempimento-ordinamento dell'array**

                               **** Inizio assert sull'array
                                /*
                                 * 1 tests passed in 83.87031 seconds
                                /*

                               ------------------------------------------------------

                               Starting tests on:Heap_sort
                                **************STRING record with file csv************

                               Array ordinato in 43.53876 seconds

                               ** Fine riempimento-ordinamento dell'array**

                               **** Inizio assert sull'array
                                /*
                                 * 1 tests passed in 61.36627 seconds
                                /*

                               ------------------------------------------------------

                               Process finished with exit code 0


## Merge Sort:
                                ------------------------------------------------------

                                Starting tests on:Merge Sort

                                 **************INT record with file csv************

                                .Array ordinato in 16.99690 seconds

                                ** Fine riempimento-ordinamento dell'array**

                                **** Inizio assert sull'array

                                1 tests passed in 34.56363 seconds

                                ------------------------------------------------------

                                Starting tests on:Merge Sort

                                 **************STRING record with file csv************

                                .Array ordinato in 16.22174 seconds

                                ** Fine riempimento-ordinamento dell'array**

                                **** Inizio assert sull'array

                                1 tests passed in 42.16826 seconds

                                ------------------------------------------------------

                                Starting tests on:Merge Sort

                                 **************DOUBLE record with file csv************

                                .Array ordinato in 19.25786 seconds

                                ** Fine riempimento-ordinamento dell'array**

                                **** Inizio assert sull'array

                                1 tests passed in 37.40635 seconds

                                ------------------------------------------------------

                                Process finished with exit code 0


## Quick Sort:

                                Starting tests on:quick_sort

                                 **************INT record with file csv************

                                .Array riempito in 20.42310 seconds

                                ** Fine riempimento-ordinamento dell'array**

                                **** Inizio assert sull'array

                                 /*
                                  * 1 tests passed in 37.89228 seconds
                                 /*

                                ------------------------------------------------------

                                Starting tests on:quick_sort

                                 **************STRING record with file csv************
                                .Array riempito in 20.91419 seconds
                                ** Fine riempimento-ordinamento dell'array**

                                **** Inizio assert sull'array


                                 /*
                                  * 1 tests passed in 49.89402 seconds
                                 /*

                                 ------------------------------------------------------

                                 Starting tests on:quick_sort

                                 **************DOUBLE record with file csv************

                                 .Array riempito in 23.63177 seconds

                                 ** Fine riempimento-ordinamento dell'array**

                                 **** Inizio assert sull'array

                                  /*
                                   * 1 tests passed in 41.56911 seconds
                                  /*

                                 ------------------------------------------------------

                                 Process finished with exit code 0


Riassunto tempistiche:


                            |               | QuickSort | MergeSort | HeapSort | InsertionSort | SelectionSort |
                            |---------------|-----------|-----------|----------|---------------|---------------|
                            | Array String  | 20.91419  | 16.22174  | 43.53876 |      //       |       //      |
                            | Array Int     | 20.42310  | 34.56363  | 55.80082 |      //       |       //      |
                            | Array Double  | 23.63177  | 19.25786  | 62.33011 |      //       |       //      |


Per quanto riguarda l'InserionSort e il SelectionSort non si è potuto avere un risultato entro i dieci minuti, un risultato che sinceramente non mi aspettavo, sapendo che è un algoritmo
di complessità O(n^2) avremo molti confronti/scambi da fare (esattamente nel caso pessimo n^2).
Per quanto riguarda il merge e il quick parliamo di algoritmi che utilizzano la filosofia divide et impera, dividento il problema originario in problemi più piccoli,
abbiamo infatti una complessità O(nlogn), questo è conforme con i dati riportati infatti i tempi del merge/quick sono effettivamente minori sia dell'heap che dell'insertion.

Conclusione: vedendo le tempistiche generali si nota come il QuickSort è l'unico algoritmo che mantiene una tempistica che non varia per il tipo di dati, per questo
è considerato uno dei migliori algoritmi
