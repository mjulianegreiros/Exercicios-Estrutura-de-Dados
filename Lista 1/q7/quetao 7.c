#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void conta_ocorrencias(int vet1[], int vet2[], int tam);

int main(){

    srand(time(NULL));

    int tam;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d" , &tam);

    int vet1[tam] , vet2[tam];

    for(int i=0;i<tam;i++){
        vet1[i] = rand()%100000 + 1;
        vet2[i] = rand()%100000 + 1;
    }

    printf("\nVetor 1: ");
    for(int i=0;i<tam;i++){
        printf("%d " , vet1[i]);
    }

    printf("\nVetor 2: ");
    for(int i=0;i<tam;i++){
        printf("%d " , vet2[i]);
    }
    clock_t inicio = clock();
    conta_ocorrencias(vet1 , vet2 , tam);
    clock_t fim = clock();

    double tempo = (double)(fim - inicio)/CLOCKS_PER_SEC;

    printf("Tempo: %f" , tempo);

    return 0;
}

void conta_ocorrencias(int vet1[], int vet2[], int tam){
    int i , j , cont=0;
    for ( i = 0; i < tam; i++){
        cont = 0;
        for(j=0;j<tam;j++){
            if(vet1[i] == vet2[j]){
                cont++;
            }
        }
        printf("\nO número %d aparece %d vezes no vetor 2." , vet1[i] , cont);
    }
    
}