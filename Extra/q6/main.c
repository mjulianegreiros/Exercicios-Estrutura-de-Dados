/*
 Implemente um TAD chamado Fracao, com as seguintes operacoes:- criarFracao(int numerador, int denominador)- simplificar(): reduz a fracao ao formato mais simples usando recursividade (funcao mdc).- imprimir(): exibe a fracao simplificada.
    a) Implemente o TAD com as operacoes descritas.
    b) Escreva um exemplo de uso com duas fracoes
*/

#include <stdio.h>
#include <stdlib.h>
#include "fracao.h"

int main(){
    Fracao *f1 = criarFracao(14 , 2);
    printf("\nrabo de gato");
    simplificar(f1);
    printf("\nrabo de galinha");
    imprimir(f1);
    printf("\nrabo de galinha");
    return 0;
}