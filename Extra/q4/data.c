#include <stdio.h>
#include <stdlib.h>
#include "data.h"

struct data{
    int dia;
    int mes;
    int ano;
};

Data *criarData(int dia , int mes , int ano){
    Data *data = (Data *)malloc(sizeof(Data));
    if(!data){
        printf("Erro ao alocar memória");
        return NULL;
    } else {
        data->dia = dia;
        data->mes = mes;
        data->ano = ano;
        return data;
    }
}
int ehBissexto(Data *data){
    if((data->ano)%100 == 0 || (data->ano)%4 == 0){
        return 1;
    } return 0;
}
int compararCom(Data *d1 , Data *d2){
    if((d1->dia)==(d2->dia) && (d1->mes)==(d2->mes) && (d1->ano)==(d2->ano)){
        return 1;
    } return 0;
}
void liberarData(Data *data){
    data = NULL;
    free(data);
}