#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct no{
    int codigo;
    struct no *esquerda;
    struct no *direita;
};

struct arvore{
    NoCliente *raiz;
};

int busca(NoCliente *raiz , int codigo){
    if(raiz==NULL){
        return 0;
    } 
    if(raiz->codigo == codigo){
        return 1;
    }
    if(raiz->codigo>codigo){
        return buscar(raiz->esquerda , codigo);
    } else{
        return buscar(raiz->direita , codigo);
    }
} 

NoCliente *inserir(NoCliente *raiz , int codigo){
    if(busca(raiz, codigo)){
        printf("\nJah existe um cliente com esse codigo.");
        return NULL;
    }
    
    if(raiz==NULL){
        NoCliente *no = (NoCliente *)malloc(sizeof(NoCliente));
        no->esquerda = NULL;
        no->direita = NULL;
        no->codigo = codigo;
        return no;
    }

    if(raiz->codigo < codigo){
        return inserir(raiz->direita , codigo);
    } else{
        return inserir(raiz->esquerda , codigo);
    }

    return raiz;
    
}