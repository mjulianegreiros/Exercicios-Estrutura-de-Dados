#ifndef PLAYLIST_H
#define PLAYLIST_H

typedef struct musica{
    char *titulo;
    char *artista;
    int duracao;
}Musica;

typedef struct no{
    Musica musica;
    struct no *prox;
    struct no *ant;
}No;

struct playlist{
    No *inicio;
    No *fim;
    int tamanho;
};
typedef struct playlist Playlist;

Playlist *criarPlaylist();
void inserir(Playlist *playlist , Musica musica);
void exibirInicio(Playlist *playlist);
void exibirFim(Playlist *playlist);
void remover(Playlist *playlist , char *titulo);
int pertence(No *no , char *titulo);
int somaTempo(No *no);
void destruirPlaylist(Playlist *playlist);

#endif