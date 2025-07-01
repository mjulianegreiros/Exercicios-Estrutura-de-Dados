/*
    Considere um sistema simplificado de gerenciamento de itens de estoque que utiliza uma lista simplesmente encadeada. Cada nó da lista armazena informações sobre um item:
    um código (inteiro), um nome (string) e a quantidade disponível (inteiro).
        a) Definições e Implementação (2,0 pontos) 
        Apresente as definições das struct para o item (struct ItemEstoque), para o nó da lista (struct No) e para a lista em si (struct Lista). Em seguida, implemente em C a função void insere_fim(Lista* l, int codigo, const char* nome, int quantidade);. Esta função deve inserir um novo item no final da lista. Você deve garantir que a lista seja devidamente criada ou inicializada antes do uso.
        b) Função Recursiva (2,0 pontos) 
        Implemente, de forma estritamente recursiva, a função int conta_itens_esgotados_recursivo(No* no_atual, int limiar_quantidade);.
        Esta função deve percorrer a lista a partir do no_atual fornecido e retornar o número total de itens cuja quantidade é menor ou igual ao limiar_quantidade. Sua implementação deve seguir a lógica de um padrão recursivo de contagem:

        Caso base: Se o nó atual for NULL (indicando o fim da lista ou de um subsegmento), retorne 0.

        Passo recursivo: Se a quantidade do item no no_atual for menor ou igual ao limiar_quantidade, adicione 1 à contagem e chame recursivamente a função para o próximo nó. Caso contrário, apenas chame recursivamente para o próximo nó (adicionando 0 à contagem).
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(){

    Lista *l = criarLista();

    inserirFim(l , 1 , "vinho" , 3);
    inserirFim(l , 2 , "ypioca" , 2);
    inserirFim(l , 3 , "wisky" , 5);
    inserirFim(l , 4, "vodka" , 4);

    exbirLista(l);
    
    printf("\nQuantidade de produtos com menos que 10 itens no estoque: %d" , contaItensEsgotados(l->inicio , 10));
    printf("\n\n");

    return 0;
}