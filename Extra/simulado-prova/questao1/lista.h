#ifndef LISTA_H
#define LISTA_H

typedef struct no No;
typedef struct item Item;

struct lista{
    No *inicio;
};

typedef struct lista Lista;

Lista *criarLista();
void inserirFim(Lista *lista , int cod , char *nome , int qtd);
void exbirLista(Lista *lista);
int contaItensEsgotados(No *no , int parametro);

#endif
