#ifndef PILHA_H
#define PILHA_H

typedef struct pilha Pilha;
typedef struct no No;

Pilha *criarPilha();
void push(Pilha *pilha ,  char *texto);
char *pop(Pilha *pilha);
char *peek(Pilha *pilha);
int destruirPilha(Pilha *pilha);

#endif