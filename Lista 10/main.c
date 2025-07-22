/*
    Questão 1: Inserção de Novos Clientes
    A funcionalidade de cadastrar novos clientes é crucial para o sistema. Cada cliente possui um codigoCliente (um número inteiro único). O sistema deve ser capaz de inserir um novo registro na ABB, mantendo as propriedades da árvore. Caso o codigoCliente já exista, a inserção não deve ser realizada.
    * a) Definição da Estrutura: Defina em C a estrutura NoCliente que representaria um nó na Árvore Binária de Busca para este sistema. Esta estrutura deve conter o codigoCliente e ponteiros para os filhos à esquerda e à direita.
    * b) Lógica da Função de Inserção: Descreva a lógica (passo a passo) da função inserirCliente(ArvBin* arvore, int codigoCliente) que será responsável por adicionar um novo cliente à árvore. Sua descrição deve incluir:
        ◦ O tratamento do caso inicial de uma árvore vazia, onde a raiz aponta para NULL.
        ◦ Como um novo nó é alocado e inicializado, apontando seus filhos para NULL.
        ◦ O processo de comparação recursiva (ou iterativa, se preferir) para encontrar a posição correta de inserção do novo nó, movendo-se para a sub-árvore da esquerda se o valor a ser inserido for menor que o nó atual, e para a direita se for maior.
        ◦ Como a função lida com codigoClientes duplicados, retornando um indicador de erro.
        ◦ Como a função assegura que o novo elemento inserido sempre se torna uma folha da árvore.
        ◦ O valor de retorno da função (sucesso ou erro).

--------------------------------------------------------------------------------
    Questão 2: Remoção de Registros de Clientes
    Para manter o banco de dados atualizado, o sistema precisa permitir a remoção de registros de clientes. A remoção de um nó em uma ABB requer tratamento especial para garantir que a estrutura e as propriedades da árvore sejam mantidas.
    * a) Função Principal de Busca e Remoção: Descreva a lógica da função removerCliente(ArvBin* arvore, int codigoCliente) que localiza o codigoCliente a ser removido na árvore. Detalhe como essa função percorre a árvore para encontrar o nó correto, mantendo um controle do nó "anterior" para facilitar as modificações na árvore. A função deve retornar um indicador de sucesso ou falha. Considere também o caso em que a árvore está vazia ou o nó não é encontrado.
    * b) Tratamento dos Três Casos de Remoção: Explique os três tipos de remoção de um nó em uma ABB, conforme os casos discutidos nas fontes:
        1. Remoção de um nó folha: Como o nó é removido sem afetar o restante da árvore.
        2. Remoção de um nó com um único filho: Como o nó é substituído por seu único filho, e como o nó anterior aponta para este filho.
        3. Remoção de um nó com dois filhos: Explique qual elemento da árvore é escolhido para substituir o nó removido para garantir que a propriedade da ABB seja mantida (menores à esquerda, maiores à direita). Detalhe o processo de encontrar esse substituto na sub-árvore da esquerda e como ele é "deslocado" para a posição do nó removido.

--------------------------------------------------------------------------------
    Questão 3: Verificação de Existência e Listagem Ordenada
    Além de inserir e remover, o sistema precisa verificar rapidamente se um cliente específico já está cadastrado e, ocasionalmente, gerar uma lista de todos os clientes em ordem crescente de seus codigoClientes.
    * a) Lógica da Função de Busca: Descreva a lógica da função buscarCliente(ArvBin* arvore, int codigoCliente) que tem como objetivo verificar a existência de um codigoCliente na árvore. Explique como a comparação de valores (codigoCliente com o info do nó atual) direciona a busca para a sub-árvore correta (esquerda ou direita) até que o nó seja encontrado ou a busca chegue a NULL.
    * b) Obtenção da Lista Ordenada: A propriedade fundamental de uma Árvore Binária de Busca é que "menores sempre à esquerda, maiores sempre à direita". Explique como essa característica da ABB pode ser utilizada para obter uma listagem de todos os codigoClientes em ordem crescente, sem a necessidade de implementar um algoritmo de ordenação externo.
*/
#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(){
    
    return 0;
}