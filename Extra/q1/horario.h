#ifndef HORARIO_H
#define HORARIO_H


typedef struct horario Hora;
Hora *criarHora(int hora , int minuto);
void liberarHora(Hora *h);
int obterHoras(Hora *h);
int obterMinuto(Hora *h);


#endif