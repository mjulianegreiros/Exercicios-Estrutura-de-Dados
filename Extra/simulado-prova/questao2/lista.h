#ifndef LISTA_H
#define LISTA_H

typedef struct no No;
typedef struct aluno Aluno;

struct lista{
    No *inicio;
    No *fim;
};

typedef struct lista Lista;

Lista *criarLista();
int inserirMeio(Lista *lista , int parametro , int matricula , char *nome);
void exibirLista(Lista *lista);
int somaMatriculas(No *no);

#endif