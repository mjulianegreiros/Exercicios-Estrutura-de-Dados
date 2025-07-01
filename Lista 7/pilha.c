#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

struct no{
    struct no *prox;
    char *palavra;
};

struct pilha{
    No *topo;
    int tam;
};

Pilha *criarPilha(){
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));

    pilha->topo = NULL;
    pilha->tam = 0;

    return pilha;
}
void push(Pilha *pilha , char *palavra){
    No *no = (No *)malloc(sizeof(No));

    no->palavra = malloc(strlen(palavra)+1);
    strcpy(no->palavra , palavra);
    no->prox = pilha->topo;
    pilha->topo = no;
    pilha->tam++;
}
char *pop(Pilha *pilha){
    if(pilha->topo == NULL){
        printf("\nPilha vazia.");
        return NULL;
    }
    pilha->tam--;
    No *aux = pilha->topo;
    char *palavra= malloc(strlen(aux->palavra) + 1);
    strcpy(palavra , aux->palavra); // strcpy(destino , fonte);
    pilha->topo = aux->prox;
    free(aux);
    printf("\nRemovida: %s" , palavra);
    return (char *)palavra;
}
char *peek(Pilha *pilha){
    if(pilha->topo == NULL){
        printf("\nPilha vazia.");
        return NULL;
    }
    char *palavra = malloc(strlen(pilha->topo->palavra)+1);
    strcpy(palavra , pilha->topo->palavra);
    printf("\nTopo: %s" , palavra);
    return palavra;
}
void detstruirPilha(Pilha *pilha){
    No *aux = pilha->topo;

    while(aux!=NULL){
        aux = pilha->topo;
        pilha->topo = pilha->topo->prox;
        free(aux);
    }

    free(pilha);

    printf("\nPilha destruida.");
}