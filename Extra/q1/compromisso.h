#ifndef COMPROMISSO_H
#define COMPROMISSO_H
#include "data.h"



typedef struct horario Hora;
typedef struct compromisso Compromisso;

// Config Data

// Config Hora
Hora *criarHora(int hora , int minuto);
void liberarHora(Hora *h);
// Config Compromisso
Compromisso *criarCompromisso(Data *data , Hora *horario , char *descricao);
void desmarcarCompromisso(Compromisso *compromisso);
Compromisso *adiarCompromisso(Compromisso *compromisso , Data *data , Hora *horario);
void liberarCompromisso(Compromisso *compromisso);


Hora obterHora(Compromisso *c);
char *obterDescricao(Compromisso *c);



#endif