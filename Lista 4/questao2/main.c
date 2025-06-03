/*
    1. Implemente as estruturas struct Livro, struct No e struct Lista necessárias para representar um livro (contendo os campos título e autor como strings), um nó da lista (contendo um livro e um ponteiro para o próximo nó) e a lista em si(contendo, no mínimo, um ponteiro para o primeiro nó). Inclua um campo para armazenar o tamanho da lista na estrutura Lista.
    2. Implemente uma função main que demonstre o funcionamento das funções implementadas. A função main deve:
        • Criar uma lista vazia.
        • Inserir pelo menos três livros distintos no início da lista.
        • Percorrer e imprimir a lista após as inserções (mostrando título e autor de cada livro).
        • Realizar a busca por um livro(pelo título)que foi inserido e imprimir uma mensagem indicando se foi encontrado (pode imprimir o endereço retornado pela função de busca).
        • Realizar a busca por um livro (pelo título) que não foi inserido e imprimir uma mensagem indicando que não foi encontrado.
        • Remover um livro do meio da lista(pelo título).
        • Percorrer e imprimir a lista após a remoção.
        • Remover o primeiro livro da lista.
        • Percorrer e imprimir a lista.
        • Remover o último livro d alista até que a lista esteja vazia.
        • Percorrer e imprimir a lista (deve estar vazia).
        • Tentar remover um livro de uma lista vazia.
        • Tentar remover um livro que não existe em uma lista não vazia(após as remoções).
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct livro{
    char *titulo;
    char *autor;
}Livro;

typedef struct no{
    Livro livro; 
    struct no *prox;
}No;

typedef struct lista{
    No *inicio;
    int tamanho;
}Lista;

Lista *criarLista(){
    Lista *l = (Lista *)malloc(sizeof(Lista));

    if(l){
        l->inicio = NULL;
        l->tamanho = 0;
        return l;
    } 
    printf("\nErro ao alocar memoria.");
    return NULL;
}

void inserirInicio(Lista *l , Livro livro){
    No *no = (No *)malloc(sizeof(No));

    if(no){
        l->inicio = no;
        no->livro = livro;
        no->prox = NULL;
        l->tamanho++;
        return; // testeee
    }
    printf("\nNao foi possivel alocar memoria.");
    return;
}

void exibirLista(Lista *l){
    No *aux = l->inicio;
    
    if(aux!=NULL){
        while(aux!=NULL){
            Livro l = aux->livro;
            printf("\nTitulo: %s  Autor: %s" , l.titulo , l.autor);
            aux = aux->prox;
        } return;
    }
    
    printf("\nA lista esta vazia.");
    return;
}

void encontrarLivro(Lista *l , char *titulo){
    No *aux = l->inicio;

    if(aux!=NULL){
        Livro l = aux->livro;
        while(aux!=NULL && titulo!=l.titulo){
            aux = aux->prox;
            l = aux->livro;
        }
        if(aux==NULL){
            printf("\nLivro não encontrado.");
            return;
        } else{
            printf("\nLivro encontrado na lista no endereco: %p." , &aux);
            return;
        }
    }
    printf("\nA lista esta vazia.");
    return;
}



int main(){
    Lista *l1 = criarLista();
    Livro l;
    l.autor = "cururu";
    l.titulo = "assado";
    Livro b2 , b3;
    b2.autor = "bosta";
    b2.titulo = "seca";
    b3.autor = "jadiel";
    b3.titulo = "amore";
    inserirInicio(l1 , l);
    inserirInicio(l1 , b2);
    inserirInicio(l1 , b3);
    exibirLista(l1);
    encontrarLivro(l1 , b2.titulo);
    return 0;
}