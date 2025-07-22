#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void insertionSortIterativa(int *vet , int tam){
    int i , j , chave;
    
    for(i=1;i<tam;i++){ // consideramos que a primeira posição do vetor já está ordenada
        chave = vet[i];
        j=i-1; // para começar a percorrer da posição anterior da chave

        while(j>=0 && vet[j]>chave){ // se ainda tem vetor pra percorrer e o elemento é maior que a chave, TROCA
            vet[j+1] = vet[j]; // a proxima posição assume o valor da posição atual, basicamente tá jogando o vetor pra trás
            j = j-1; // vai diminuindo até chegar no começo do vetor
        }

        vet[j+1] = chave; //substitui o numero maior pela chave
    }
}

void insertionSortRecursiva(int *vet , int inicio){
    if(inicio<=0){
        return;
    } else{
        insertionSortRecursiva(vet , inicio - 1);
        int i = inicio - 1;
        int chave = vet[inicio];

        while(i>=0 && vet[i]>chave){
            vet[i+1] = vet[i];
            i--;
        }
        vet[i+1] = chave;
    }
}

int main(){
    int vet[] = {3 , 9 , 1 , 7 , 5};
    printf("\ninicial: ");
    for(int i=0;i<TAM;i++){printf("%d " , vet[i]);}
    insertionSortRecursiva(vet , TAM);
    printf("\nfinal: ");
    for(int i=0;i<TAM;i++){printf("%d " , vet[i]);}
    return 0;
}
