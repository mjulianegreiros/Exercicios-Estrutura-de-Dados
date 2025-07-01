/*
    Considere um sistema de gerenciamento de alunos que utiliza uma lista duplamente encadeada. Cada nó da lista armazena a matrícula (inteiro) e o nome do aluno. As estruturas para Aluno, No e Lista são as mesmas que você definiu para listas duplamente encadeadas em sala, onde No possui ponteiros prox e ant.
        a) Operação de Inserção (1,5 pontos) 
        Implemente em C a função int insere_apos_matricula(Lista* l, int matricula_existente, int nova_matricula, const char* novo_nome);. 
        Esta função deve buscar por um aluno com a matricula_existente e, se encontrado, inserir um novo aluno (com nova_matricula e novo_nome) logo após ele. A função deve retornar 1 em caso de sucesso e 0 se a matrícula existente não for encontrada na lista.
        
        b) Função Recursiva (1,5 pontos) 
        Implemente, de forma estritamente recursiva, a função int soma_matriculas_recursiva(No* no_atual);. 
        Esta função deve calcular a soma de todas as matrículas dos alunos a partir do no_atual fornecido. A estratégia deve seguir o padrão "soma-de-lista", adaptado do cálculo de tempo total em playlists:
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    Lista *l = criarLista();

    inserirMeio(l , 0 , 1 , "maria");
    inserirMeio(l , 1 , 2 , "pedro");

    exibirLista(l);
    printf("\n\n");

    return 0;
}