/*
Você deve implementar um Tipo Abstrato de Dado (TAD) chamado Data, que representa uma data no formato dia/mês/ano.
 a) Defina a estrutura do TAD Data, contendo os atributos e as operacoes:- criarData(int dia, int mes, int ano)- eBissexto()- compararCom(Data outraData)
 b) Escreva um exemplo de uso do TAD criando duas datas e comparando-as.
 c) Justifique o uso de um TAD para representar datas, em vez de variaveis soltas
*/

#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(){
    Data *d1 = criarData(10 , 07 , 2006);
    Data *d2 = criarData(10 , 07 , 2006);
    printf("As duas datas são: %s" , compararCom(d1 , d2) ? "iguais" : "diferentes");

    return 0;
}
