#include <stdio.h>
#include <stdlib.h>
#include "test.h"
#include <string.h>
#include <assert.h>
typedef int (*CompFunction)(void*, void*);

void msortBasic(void** a, int first, int last,CompFunction compare);

typedef struct record{
  int id;
  char dato_stringa[20];
  int dato_intero;
  double dato_double;
}record;
