
#include <stdio.h>
#include <stdlib.h>
#include "data.h"


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

int obterDia(Data *d){
    return d->dia;
}
int obterMes(Data *d){
    return d->mes;
}
int obterAno(Data *d){
    return d->ano;
}

void liberarData(Data *d){
    free(d);
    d = NULL;
}

