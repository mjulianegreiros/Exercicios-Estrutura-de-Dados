// implementação do merge sort
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void juntar(int *vet , int inicio , int meio , int fim){
    int i , j , k , aux; 
    int tam1 = meio-inicio+1;
    int tam2 = fim - meio;

    int aux1[tam1] , aux2[tam2]; // vetores auxiliares


    // copiando os dados do vetor original para os vetores auxiliares
    for(i=0;i<tam1;i++){
        aux1[i] = vet[inicio + i];
    }
    //k++; // incrementa pra acessar o próximo
    for(j=0;j<tam2;j++){
        aux2[j] = vet[meio + 1 + j];
    }

    // zera tudoo
    i=0; k=inicio; j=0;

    // momento de trocar, vei
    while(i<tam1 && i<tam2){ // enquanto ainda houver coisas para percorrer nos dois vetores
        if(aux1[i]<aux2[j]){
            vet[k] = aux1[i];
            i++;
        } else{
            vet[k] = aux2[j];
            j++;
        }
        k++;
    }
    // quando acabar um vetor, basta terminar de copiar os dados dele para o vetor original. fazemos isso através dos passos abaixo

    while(i<tam1){ // se sobrar algo pra copiar na cópia do ínicio até o meio. aqui eu tenho a garantia de que o vetor já está ordenado
        vet[k] = aux1[i];
        i++; k++;
    }
    while(j<tam2){  // se sobrar algo pra copiar na cópia do meio+1 até o fim. aqui eu tenho a garantia de que o vetor já está ordenado
        vet[k] = aux2[j];
        j++; k++;
    }
}

void mergeSort(int *vet, int inicio , int fim){
    // inicio e fim são indices
    if(inicio<fim){ // ainda tem coisa para percorrer no vetor(nosso caso base)
        // definindo onde o vetor vai ser dividido
        int meio = (fim+inicio)/2;


        mergeSort(vet , inicio , meio); // passando o lado esquerdo do vetor
        // printf("\ni: %d , m : %d , f: %d" , inicio , meio , fim);
        mergeSort(vet , meio+1 , fim); // passando o lado direito do vetor
        
        juntar(vet , inicio , meio , fim);
    }
}

int main(){
    int vet[] = {3 , 9 , 1 , 7 , 5};
    printf("Antes da ordenacao: ");
    for(int i=0;i<TAM;i++){
        printf("%d " , vet[i]);
    }
    mergeSort(vet , 0 , TAM-1);
    printf("Depois da ordenacao: ");
    for(int i=0;i<TAM;i++){
        printf("%d " , vet[i]);
    }
    return 0;
}