#ifndef LIVRO_H
#define LIVRO_H

typedef struct livro Livro;

Livro *criarLivro(char *titulo , char *autor);
char *consultarTitulo(Livro *l);
char *consultarAutor(Livro *l);
void modificarTitulo(Livro *l , char *novo);
void modificarAutor(Livro *l , char *novo);
void liberarLivro(Livro *l);


#endif
