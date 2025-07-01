#ifndef PILHA_H
#define PILHA_H

typedef struct pilha Pilha;
typedef struct no No;

Pilha *criarPilha();
void push(Pilha *pilha , char *palavra);
char *pop(Pilha *pilha);
char *peek(Pilha *pilha);
void detstruirPilha(Pilha *pilha);

#endif