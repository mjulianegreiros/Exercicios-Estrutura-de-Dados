#ifndef COMPROMISSO_H
#define COMPROMISSO_H
#include "data.h"
#include "horario.h"




typedef struct compromisso Compromisso;

Compromisso *criarCompromisso(Data *data , Hora *horario , char *descricao);
void desmarcarCompromisso(Compromisso *compromisso);
Compromisso *adiarCompromisso(Compromisso *compromisso , Data *data , Hora *horario);
void liberarCompromisso(Compromisso *compromisso);
void obterHora(Compromisso *c , int *h , int *m);
char *obterDescricao(Compromisso *c);
void obterData(Compromisso *c , int *d , int *m , int *a);



#endif