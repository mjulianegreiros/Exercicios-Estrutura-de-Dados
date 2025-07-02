/*
    Um tipo abstrato de dado(TAD) para uma pilha de cadeia de caracteres em linguagem C deve ser implementado, utilizando uma lista encadeada dinâmica como estrutura de armazanamento subjacente.
    a) definições e operações fundamentais(1,5 pontos)
    Apresente as definições de struct para o nó e para a pilha, que atuarão como controlador para a pilha. Lembre-se de que o arquivo interface ocultaria todos os detalhes de implemnetação através dde typedef struct pilha Pilha. O nó da lsita deve conter o dado do tipo string e um ponteiro para o próximo nó. Em seguida, implemente em C as funções push, pop, peek e destruir.
    b) verificação recursiva do elemento(1,5 pontos)
    Implemente em C a função de destruir a pilha de forma recursiva.
*/

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha *p = criarPilha();

    pop(p);

    printf("\n");

    push(p , "maria");
    push(p , "joao");
    push(p , "carlos");
    push(p , "pedro");
    
    printf("\nTopo: %s" , peek(p));

    printf("\nDeletada: %s" , pop(p));

    printf("\nTopo: %s" , peek(p));

    printf("\nDestruiu? %d" , destruirPilha(p));

    printf("\n\n");



    return 0;
}