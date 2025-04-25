#ifndef LIVRO_H
#define LIVRO_H

typedef struct livro Livro;

Livro *criarLivro(char *titulo , char *autor);
void consultarTitulo(Livro l);
void consultarAutor(livro l);
void modificarTitulo(livro l);
void modificarAutor(livro l);
void liberarLivro(Livro l);


#endif
