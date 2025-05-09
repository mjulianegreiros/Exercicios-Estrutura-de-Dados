#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

int main(){
    Livro *l = criarLivro("Amarelo" , "Joao");
    printf("\nTitulo: %s" , consultarTitulo(l));
    printf("\nAutor: %s" , consultarAutor(l));
    modificarAutor(l , "Pedro");
    modificarTitulo(l , "Azul");
    printf("\nTitulo: %s" , consultarTitulo(l));
    printf("\nAutor: %s" , consultarAutor(l));
    

}
