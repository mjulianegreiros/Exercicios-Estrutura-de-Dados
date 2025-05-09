#include <stdio.h>
#include <stdlib.h>
#include "horario.h"

struct horario{
    int hora;
    int minuto;
};

Hora *criarHora(int hora , int minuto){
    Hora *h = (Hora *)malloc(sizeof(Hora));
    if(h!=NULL){
        h->hora = hora;
        h->minuto = minuto;
        return h;
    } else{
        printf("Nao foi possivel alocar memoria!");
        return NULL;
    }
}

void liberarHora(Hora *h){
    free(h);
    h = NULL;
}

int obterHoras(Hora *h){
    return h->hora;
}
int obterMinuto(Hora *h){
    return h->minuto;
}