#ifndef ARVORE_H
#define ARVORE_H

typedef struct no NoCliente;
typedef struct arvore Arvore;

NoCliente *inserir(NoCliente *raiz , int codigo);
int buscar(NoCliente *raiz , int codigo);


#endif
