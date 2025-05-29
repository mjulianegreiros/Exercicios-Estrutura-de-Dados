/*
 Implemente uma funcao recursiva que conte quantos digitos pares existem em um numero inteiro positivo.
 a) Implemente a funcao.
 b) Mostre o funcionamento da pilha de chamadas para a entrada 204
*/

#include <stdio.h>
#include <stdlib.h>
int qtdParIterativa(int n){
    int cont = 0;
    int aux;
    while(n!=0){
        aux = n%10;
        if(aux%2==0){
            cont++;
        }
        n/=10;
    }
    return cont;
}

int qtdParRecursiva(int n){
    if(n==0){
        return 0;
    } else{
        if((n%10)%2 == 0){
            return 1 + qtdParRecursiva(n/10);
        } return(qtdParRecursiva(n/10));
    }
}

int main(){
    printf("\nCont = %d" , qtdParIterativa(1204));
    printf("\nCont = %d" , qtdParRecursiva(1204));
    return 0;
}