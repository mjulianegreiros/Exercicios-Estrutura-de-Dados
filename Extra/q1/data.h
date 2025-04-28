#ifndef DATA_H
#define DATA_H
#include "compromisso.h"

typedef struct data Data;

Data *criarData(int dia , int mes , int ano);
void liberarData(Data *d);
void obterData(Compromisso *c , int *d , int *m , int *a);

#endif