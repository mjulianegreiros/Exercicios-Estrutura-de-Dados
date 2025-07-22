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

Arvore *criarArvore(){
    Arvore *avr = (Arvore *)malloc(sizeof(Arvore));

    avr->raiz = NULL;
    return avr;
}

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

static NoCliente *menorValor(NoCliente *raiz){ // função pra poder substituir quando tiver os 2 filhotes
    while(raiz->esquerda!=NULL){
        raiz = raiz->esquerda;
    }
    return raiz;
}

NoCliente *inserir(NoCliente *raiz , int codigo){
    if(busca(raiz, codigo)){ // se a buscar retornar 1, o codigo nao pode ser inserido pq ja existe alguem com esse codigo e os codigos nao podem se repetir
        printf("\nJah existe um cliente com esse codigo.");
        return NULL;
    }
    
    if(raiz==NULL){ // se a raiz é nula(percorreu ate onde deveria implementar o novo no)
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

NoCliente *remover(NoCliente *raiz , int codigo){
    if(raiz==NULL){ // ou chegou ao final e noa encontrou ou a arvore esta vazia
        printf("\nElemento nao encontrado.");
        return NULL;
    } else{
        if(raiz->codigo > codigo){
            raiz->esquerda = remover(raiz->esquerda , codigo);
        } else if (raiz->codigo < codigo){
            raiz->direita = remover(raiz->direita , codigo);
        } else{
            // caso 1: sem filhos
            if(raiz->esquerda==NULL && raiz->direita==NULL){
                free(raiz);
                return NULL;
            }
            // caso 2: com um filho só
            else if(raiz->esquerda==NULL){ // caso só tenha o filho da direita
                NoCliente *aux = raiz->direita;
                free(raiz);
                return aux;
            }
            else if(raiz->direita==NULL){ // caso só tenha o filho da esquerda
                NoCliente *aux = raiz->esquerda;
                free(raiz);
                return aux;
            } else{  // caso 3: com os dois filhotineos
                NoCliente *prox = menorValor(raiz->direita);
                raiz->codigo = prox->codigo;
                raiz->direita = remover(raiz->direita , prox->codigo);
            }
            
           

        }
        
    }

    
}

