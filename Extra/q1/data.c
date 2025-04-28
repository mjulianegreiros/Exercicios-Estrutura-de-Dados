
#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include "compromisso.h"

struct data{
    int dia;
    int mes;
    int ano;
};

Data *criarData(int dia , int mes , int ano){
    Data *d = (Data *)malloc(sizeof(Data));
    if(d!=NULL){
        d->dia = dia;
        d->mes = mes;
        d->ano = ano;
        return d;
    } else{
        printf("Nao foi possivel alocar memoria!");
        return NULL;
    }
}

void liberarData(Data *d){
    free(d);
    d = NULL;
}

void obterData(Compromisso *c , int *d , int *m , int *a){
    *d = c->data.dia;
    *m = c->data.mes;
    *a = c->data.ano;
}