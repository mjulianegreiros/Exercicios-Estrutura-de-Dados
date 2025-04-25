#include <stdio.h>
#include "livro.h"

typedef struct livro{
    char titulo[50];
    char autor[50];
};

Livro *criarLivro(char *ti , char *autor){
    int i;
    Livro *l = (Livro *)malloc(sizeof(Livro));
    
    while(ti[i] != "\n"){
        *l->titulo(ti+i) = ti[i];
    }

}
void consultarTitulo(Livro l);
void consultarAutor(Livro l);
void modificarTitulo(Livro l);
void modificarAutor(Livro l);
void liberarLivro(Livro l);


