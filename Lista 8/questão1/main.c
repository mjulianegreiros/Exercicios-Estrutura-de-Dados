#include <stdio.h>
#include <stdlib.h>
#define TAM 6

void bubbleSort(int *vet , int tam){
    for(int i=0; i<4; i++){
        for(int j=0;j<tam-1;j++){
            if(vet[j]>vet[j+1]){
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;            
            }
        }
    }
}

int main(){
    int vet[] = {8 , 5 , 2 , 9 , 5 , 6 , 3};
    printf("\nvetor não ordenado: ");
    for(int i=0;i<TAM;i++){
        printf("%d ", vet[i]);
    }
    bubbleSort(vet , TAM);
    printf("\nvetor ordenado: ");
    for(int i=0;i<TAM;i++){
        printf("%d ", vet[i]);
    }
    
    return 0;
}
