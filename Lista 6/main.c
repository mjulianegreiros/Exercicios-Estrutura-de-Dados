#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"

int main()
{
    Playlist *p = criarPlaylist();
    
    Musica m1 , m2 , m3;
    m1.titulo = "a";
    m1.artista = "b";
    m1.duracao = 3;
    m2.titulo = "c";
    m2.artista = "d";
    m2.duracao = 2;
    m3.titulo = "e";
    m3.artista = "f";
    m3.duracao = 5;
    
    inserir(p , m1);
    inserir(p , m2);
    inserir(p , m3);
    
    printf("\nSaída: %d" , pertence(p->inicio , m2.titulo));
    printf("\nSaída: %d" , pertence(p->inicio , "u"));
    
    printf("\nSoma: %d" , somaTempo(p->inicio));
    
    
    exibirInicio(p);
    printf("\n\n");
    //destruirPlaylist(p);
    remover(p , m3.titulo);
    exibirInicio(p);

    return 0;
}
