#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

struct no{
    struct no *prox;
    char *texto;
};
struct pilha{
    No *topo;
};

Pilha *criarPilha(){
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));

    pilha->topo = NULL;

    return pilha;
}
void push(Pilha *pilha ,  char *texto){
    No *no = (No *)malloc(sizeof(No));

    no->texto = malloc(strlen(texto)+1);
    strcpy(no->texto , texto);

    no->prox = pilha->topo;
    pilha->topo = no;
}
char *pop(Pilha *pilha){
    No *aux = pilha->topo;
    if(aux==NULL){
        printf("\nPilha vazia.");
        return NULL;
    }
    char *apagada = malloc(strlen(aux->texto)+1);
    strcpy(apagada , aux->texto);

    pilha->topo = aux->prox;
    free(aux);

    return apagada;
}
char *peek(Pilha *pilha){
    if(pilha->topo==NULL){
        printf("\nPilha vazia.");
        return NULL;
    }
    return pilha->topo->texto;
}
int destruirPilha(Pilha *pilha){
    if(pilha->topo == NULL){
        free(pilha);
        return 1;
    } else{
        No *aux = pilha->topo;
        pilha->topo = aux->prox;
        free(aux);
        return destruirPilha(pilha);
    }
}