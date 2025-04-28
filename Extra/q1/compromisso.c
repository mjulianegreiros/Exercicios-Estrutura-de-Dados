
#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include "compromisso.h"



struct horario{
    int hora;
    int minuto;
};
struct compromisso{
    Data *data;
    Hora horario;
    char *descricao;
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

Compromisso *criarCompromisso(Data *data , Hora *horario , char *descricao){
    Compromisso *c = (Compromisso *)malloc(sizeof(Compromisso));
    if(c!=NULL){
        // Passando os dados da data
        c->data.dia = data->dia;
        c->data.mes = data->mes;
        c->data.ano = data->ano;
        // Passando os dados do horario
        c->horario.hora = horario->hora;
        c->horario.minuto = horario->minuto;
        // Passando a descricao
        c->descricao = descricao;

        return c;
    } else {
        printf("Nao foi possivel alocar memoria!");
        return NULL;
    }
}

Hora obterHora(Compromisso *c){
    return c->horario;
}
char *obterDescricao(Compromisso *c){
    return c->descricao;
}
void desmarcarCompromisso(Compromisso *compromisso){
    compromisso->data.dia = 0;
    compromisso->data.mes = 0;
    compromisso->data.ano = 0;
    compromisso->horario.hora = 0;
    compromisso->horario.minuto = 0;
}
Compromisso *adiarCompromisso(Compromisso *compromisso , Data *data , Hora *horario){
    compromisso->data.dia = data->dia;
    compromisso->data.mes = data->mes;
    compromisso->data.ano = data->ano;
    compromisso->horario.hora = horario->hora;
    compromisso->horario.minuto = horario->minuto;
}
void liberarCompromisso(Compromisso *compromisso){
    free(compromisso);
    compromisso = NULL;
}

