#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

struct livro{
    char *titulo;
    char *autor;
};

Livro *criarLivro(char *titulo , char *autor){
    int i;
    Livro *l = (Livro *)malloc(sizeof(Livro));
    
    if(l!=NULL){
        l->titulo = titulo;
        l->autor = autor;
    }
}
char *consultarTitulo(Livro *l){
    return l->titulo;
}
char *consultarAutor(Livro *l){
    return l->autor;
}
void modificarTitulo(Livro *l , char *novo){
    l->titulo = novo;
}
void modificarAutor(Livro *l , char *novo){
    l->autor = novo;
}
void liberarLivro(Livro *l){
    free(l);
}
