#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

struct item{
    int cod;
    char *nome;
    int qtd;
};
struct no{
    Item item;
    struct no *prox;
};


Lista *criarLista(){
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    lista->inicio = NULL;
    return lista;
}
void inserirFim(Lista *lista , int cod , char *nome , int qtd){
    No *no = (No *)malloc(sizeof(No));
    // atribuindo os parametros ao nó criado
    no->item.cod = cod;
    no->item.nome = malloc(strlen(nome)+1); // alocando memoria para aramazenar o nome do produto(se nao fizer, dá falha de segmentação)
    strcpy(no->item.nome , nome);
    no->item.qtd = qtd;
    no->prox = NULL; // como estou inserindo no fim , o no-prox que eu inserir vai ser sempre null

    if(lista->inicio==NULL){
        lista->inicio = no;
        return;
    }

    No *aux = lista->inicio;
    // laço para percorrer até o final da lista
    while(aux->prox!=NULL){
        aux = aux->prox;
    }
    // aqui, o aux vai ser o último elemento da lista
    aux->prox = no;
    return;
}
void exbirLista(Lista *lista){
    No *aux = lista->inicio;

    if(lista->inicio==NULL){
        printf("\nA lista esta vazia.");
        return;
    }

    while(aux!=NULL){
        printf("\nCodigo: %d  Item: %s  Quantidade: %d." , aux->item.cod , aux->item.nome , aux->item.qtd);
        aux = aux->prox;
    }
    return;
}
int contaItensEsgotados(No *no , int parametro){
    if(no==NULL){
        return 0;
    } else {
        if(no->item.qtd <= parametro){
            if(no->prox!=NULL){ // esse condicional é para validar o parametro (no->prox);
                return 1 + contaItensEsgotados(no->prox , parametro);
            }
            return 1;
        } else{
            if(no->prox!=NULL){ // esse condicional é para validar o parametro (no->prox);
                return contaItensEsgotados(no->prox , parametro);
            }
            return 0;
        }
    }
}