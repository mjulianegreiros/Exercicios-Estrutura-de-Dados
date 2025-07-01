#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

struct aluno{
    int matricula;
    char *nome;
};
struct no{
    struct no *ant;
    struct no *prox;
    Aluno aluno;
};

Lista *criarLista(){
    Lista *lista = (Lista *)malloc(sizeof(Lista));

    lista->inicio = NULL;
    lista->fim = NULL;

    return lista;
}
int inserirMeio(Lista *lista , int parametro , int matricula , char *nome){
    No *no = (No *)malloc(sizeof(No));

    no->aluno.matricula = matricula;
    no->aluno.nome = malloc(strlen(nome)+1); // aloquei memoria para poder copiar as strings
    strcpy(no->aluno.nome , nome);

    
    No *aux = lista->inicio;

    if(lista->inicio==NULL){
        lista->inicio = no;
        lista->fim = no;
        no->ant = NULL;
        no->prox = NULL;
        return 1;
    }

    // encontrar a matricula especificada.
    while(aux!=NULL){
        if(aux->aluno.matricula == parametro){
            break;
        }
        aux = aux->prox;
    }
    // verificar se achou ou se a lista tá vazia
    if(aux==NULL){
        printf("\nMatricula nao encontrada ou a lista esta vazia.");
        return 0;
    }

    if(aux==lista->inicio){
        
    } else{
        
    }

    /*no->prox = aux->prox;
    no->ant = aux;
    aux->prox->ant = no;
    aux->prox = no;*/
    return 1;

}
void exibirLista(Lista *lista){
    No *aux = lista->inicio;
    if(aux==NULL){
        printf("\nA lsita esta vazia.");
    }
    while(aux!=NULL){
        printf("\nMatricula: %d  Nome: %s" , aux->aluno.matricula , aux->aluno.nome);
        aux = aux->prox;
    }
    printf("\n");
}
int somaMatriculas(No *no){
    if(no == NULL){
        return 0;
    } else{
        if(no->prox!=NULL){
            return no->aluno.matricula + somaMatriculas(no->prox); // garantir que não acesse o NULL->prox.
        }
        return no->aluno.matricula;
    }
}