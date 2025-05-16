#ifndef FRACAO_H
#define FRACAO_H

typedef struct fracao Fracao;

Fracao *criarFracao(int num , int den);
Fracao *simplificar(Fracao *f);
void imprimir(Fracao *f);
void liberarFracao(Fracao *f);
#endif

// funcao auxiliar
int mdc(int n , int d);

