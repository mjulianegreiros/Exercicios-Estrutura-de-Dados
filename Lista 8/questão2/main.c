#include <stdio.h>
#include <stdlib.h>
#define TAM 7

void selectionSort(int *vet , int tam){
    int i , j , menor , aux;
 
    for(i=0;i<tam-1;i++){
        menor = i; // declara uma parte(posição) do vetor como ordenada     
        for(j=i+1;j<tam;j++){
            if(vet[j]<vet[menor]){
                menor = j; // pega a posição do menor elemento da parte não ordenada
            }
        }
        
        if(menor!=i){ // se o menor elemento estiver em posição diferente da inicial, faz a troca
            aux = vet[menor];
            vet[menor] = vet[i];
            vet[i] = aux;
        }        
    }
}

int main(){
    int vet[] = {8, 5, 2, 9, 5, 6, 3};
    printf("\nvetor não ordenado: ");
    for(int i=0;i<TAM;i++){
        printf("%d " , vet[i]);
    }
    selectionSort(vet , TAM);
    printf("\nvetor ordenado: ");
    for(int i=0;i<TAM;i++){
        printf("%d " , vet[i]);
    }
    return 0;
}
