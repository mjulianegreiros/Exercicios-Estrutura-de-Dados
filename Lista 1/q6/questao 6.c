#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long int somaVet(long int *vet , int tam);

int main()
{
    srand(time(NULL));

    long int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%ld" , &tam);

    long int vet[tam];
    for(int i=0;i<tam;i++){
        vet[i] = rand()%50 + 1;
    }
    clock_t inicio = clock(); // antes da operação de soma
    long int soma = somaVet(vet , tam);
    clock_t fim = clock(); // depois da operação de soma

    printf("Vetor: ");
    for(int i=0;i<tam;i++){
        printf("%ld " , vet[i]);
    }

    printf("\nA soma dos elementos do vetor é: %ld" , soma);

    double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("\nTempo: %f" , tempo);


    return 0;
}

long int somaVet(long int *vet , int tam){
    int i;
    long int soma=0;
    for(i=0;i<tam;i++){
        soma += vet[i];
    }
    return soma;
}