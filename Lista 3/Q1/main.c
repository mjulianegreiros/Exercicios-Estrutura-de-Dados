#include <stdio.h>
#include <time.h>
/*
    clock_t inicio = clock(); // antes da operação de soma
    long int soma = somaVet(vet , tam);
    clock_t fim = clock(); // depois da operação de soma

    double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
*/

int fibonacciRecursivo(int n);
int fibonacciInterativo(int n);

int main(){
    clock_t inicioRecursivo = clock();
    printf("%d ", fibonacciRecursivo(6));
    clock_t fimRecursivo = clock();
    double tempoRecursivo = ((double)(fimRecursivo - inicioRecursivo)) / CLOCKS_PER_SEC;

    clock_t inicioInterativo = clock();
    printf("\n%d\n" , fibonacciInterativo(6));
    clock_t fimInterativo = clock();
    double tempoInterativo = ((double)(fimInterativo - inicioInterativo)) / CLOCKS_PER_SEC;

    printf("R: %f vs. I: %f" , tempoRecursivo , tempoInterativo);
    
}

int fibonacciInterativo(int n){
    int ant , antDoant , atual , a;
    ant = 0;
    antDoant = 1;

    for(int i=0;i<n;i++){
        atual = ant + antDoant;
        a = ant;
        ant = atual;
        antDoant = a;
    }

    return atual;
}

int fibonacciRecursivo(int n){
    // caso base n=0 ou n=1;
    if(n==0){
        return 0;
    } else if(n==1){
        return 1;
    }else{
        return fibonacciRecursivo(n-1)+fibonacciRecursivo(n-2);
    }
}