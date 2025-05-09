
#include <stdio.h>
#include <stdlib.h>
#include "compromisso.h"

struct compromisso{
    Data *data;
    Hora *horario;
    char *descricao;
};


Compromisso *criarCompromisso(Data *data , Hora *horario , char *descricao){
    Compromisso *c = (Compromisso *)malloc(sizeof(Compromisso));
    if(c!=NULL){
        // Passando os dados da data
        c->data = data;
        // Passando os dados do horario
        c->horario = horario;
        // Passando a descricao
        c->descricao = descricao;

        return c;
    } else {
        printf("Nao foi possivel alocar memoria!");
        return NULL;
    }
}

void obterHora(Compromisso *c , int *h , int *m){
    *h = obterHoras(c->horario);
    *m = obterMinuto(c->horario);
}
char *obterDescricao(Compromisso *c){
    return c->descricao;
}
void desmarcarCompromisso(Compromisso *compromisso){
    compromisso->data = criarData(0 , 0 , 0);
    compromisso->horario = criarHora(0 , 0);
}
Compromisso *adiarCompromisso(Compromisso *compromisso , Data *data , Hora *horario){
    compromisso->data = data;
    compromisso->horario = horario;
}
void liberarCompromisso(Compromisso *compromisso){
    free(compromisso);
    compromisso = NULL;
}
void obterData(Compromisso *c , int *d , int *m , int *a){
    *d = obterDia(c->data);
    *m = obterMes(c->data);
    *a = obterAno(c->data);
}


