#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"



Playlist *criarPlaylist(){
    Playlist *playlist = (Playlist *)malloc(sizeof(Playlist));
    
    playlist->inicio = NULL;
    playlist->fim = NULL;
    playlist->tamanho = 0;
    
    return playlist;
}


void inserir(Playlist *playlist , Musica musica){
    No *no = (No *)malloc(sizeof(No));
    
    no->musica = musica;
    
    if(playlist->inicio == NULL){ // nada na lista
        no->prox = NULL;
        no->ant = NULL;
        playlist->inicio = no;
        playlist->fim = no;
        playlist->tamanho++;
        return;
    }else{
        no->prox = NULL;
        no->ant = playlist->fim;
        playlist->fim->prox = no;
        playlist->fim = no;
        playlist->tamanho++;
        return;
    }
}


void exibirInicio(Playlist *playlist){
    No *aux = playlist->inicio;
    
    if(aux==NULL){
        printf("\nA lista esta vazia");
        return;
    }
    
    while(aux!=NULL){
        printf("\nTitulo: %s  Artista: %s" , aux->musica.titulo , aux->musica.artista);
        aux = aux->prox;
    }
}

void exibirFim(Playlist *playlist){
    No *aux = playlist->fim;
    
    if(aux==NULL){
        printf("\nA lista esta vazia");
        return;
    }
    
    while(aux!=NULL){
        printf("\nTitulo: %s  Artista: %s" , aux->musica.titulo , aux->musica.artista);
        aux = aux->ant;
    }
}

void remover(Playlist *playlist , char *titulo){
   No *aux = playlist->inicio;
   
   if(aux==NULL){
       printf("\nA lista esta vazia.");
       return;
   }
   
   
   while(strcmp(titulo , aux->musica.titulo)!=0){
       aux = aux->prox;
   }
   
   if(aux==NULL){
       printf("\nMusica nao encontrada.");
   }else{
       if(playlist->inicio==aux){
           playlist->inicio = aux->prox;
           playlist->inicio->ant = NULL;
       } else{
           No *aux2 = aux->ant;
           aux2->prox = aux->prox;
       }
       
       if(playlist->fim==aux){
           playlist->fim = aux->ant;
           playlist->fim->prox = NULL;
       } else{
           No *aux2 = aux->prox;
           aux2->ant = aux->ant;
       }
       
       free(aux);
   }
}

int pertence(No *no , char *titulo){
    if(no==NULL){
        return 0;
    } else if(strcmp(titulo , no->musica.titulo)==0){
        return 1;
    } else{
        return pertence(no->prox , titulo);
    }
    
    /*if(copia->inicio == NULL && copia->fim == NULL){
        printf("\nA playlist esta vazia.");
        return 0;
    } else if(strcmp(titulo , aux->musica.titulo)==0){
        return 1;
    } else{
        copia->inicio = copia->inicio->prox;
        return pertence(copia , titulo);
    }*/
}
int somaTempo(No *no){
    if(no==NULL){
        return 0;
    } else{
        return no->musica.duracao + somaTempo(no->prox);
    }
}
void destruirPlaylist(Playlist *playlist){
    No *aux1 = playlist->fim;
    No *aux2;
    
    while(aux1!=NULL){
        aux2 = aux1;
        free(aux1);
        aux2 = aux2->ant;
        aux1 = aux2;
        playlist->tamanho--;
    }
    
    playlist->inicio = NULL;
    playlist->fim = NULL;
    
    free(playlist);
    
}