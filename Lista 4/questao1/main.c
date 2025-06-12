/*
    Lógica da lista
    atualizar o ponteiro do proximo nó e o ponteiro do novo nó; 
*/

#include <stdio.h>
#include <stdlib.h>

// definição de um nó
typedef struct  no{
    int dados;
    struct no *prox;
}No;

// definindo a lista
typedef struct lista{
    No *inicio;
    int tamanho;
}Lista;

// criação de uma lista
Lista *criarLista(){
    Lista *l = (Lista *)malloc(sizeof(Lista));

    if(l){
        l->inicio = NULL;
        l->tamanho = 0;
        return l;
    } 
    printf("\nNão eh possivel alocar memoria.");
    return NULL;
}

// inserção de um nó no começo da lista
/*novo no
  se(inicio==NULL), então inicio=no
  se nao novo no->inicio e inicio->null
    */

// percorrer a lista
void percorrerLista(Lista *l){
    No *aux = l->inicio;
    
    printf("\nElementos da lista: ");
    while(aux!=NULL){
        printf("%d " , aux->dados);
        aux = aux->prox;
    }
}

void inserirComeco(Lista *l , int num){
    No *no = (No *)malloc(sizeof(No));
    if(no != NULL){
        no->dados = num;
        no->prox = l->inicio;
        l->inicio = no;
        l->tamanho++;
    } else {
        printf("\nErro ao alocar memoria.");
        return;
    }
}

// inserção de um nó no final da lista
void inserirFinal(Lista *l , int num){
    No *no = (No *)malloc(sizeof(No));
    if(no != NULL){
        if(l->inicio==NULL){
            no->dados = num;
            no->prox = NULL;
            l->inicio = no;
        } else {
            No *aux = l->inicio;
            while(aux!=NULL){
                if(aux->prox==NULL){
                    no->dados = num;
                    no->prox = NULL;
                    aux->prox = no;
                    break;
                } else{
                    aux = aux->prox;
                }
            }
        }
        l->tamanho++;
    } else{
        printf("\nNao foi possivel alocar memoria.");
        return;
    }
}

// inserir no meio da lista
void inserirMeio(Lista *l , int num , int posicao){
    No *no = (No *)malloc(sizeof(No));
    int cont=1;
    if(no!=NULL){
        no->dados = num;
        if(l->inicio == NULL || posicao==0){
            no->dados = num;
            no->prox = NULL;
            l->inicio = no;
            l->tamanho++;
        }
        else if(posicao > 0 && posicao <= l->tamanho){
            No *aux = l->inicio;
            while(cont<posicao-1){
                aux = aux->prox;
                cont++;
            } 
            No *aux2 = aux->prox;
            aux->prox = no;
            no->prox = aux2;
            l->tamanho++;
        } else {
            printf("\nO numero indicado é maior que a lista.");
        }

    }else{
        printf("\nErro ao alocar memoria.");
        return;
    }
    
}

// remover elemento da lista
void removerElemento(Lista *l , int num){
    No *aux = l->inicio;
    if(l->inicio == NULL){
        printf("\nLista vazia.");
        return;
    } else{
        while(aux->dados!=num){
            aux = aux->prox;
        }
        No *aux2 = aux->prox;
        aux2->prox;
        free(aux2);
        return;

    }
    
}

// remover da lista
/*
    lógica para remover da lista
    o nó anterior tem que apontar para o nó que o deletado está apontando
*/
void removerElemento(Lista *l  , int num){
    No *aux = l->inicio;
    if(aux==NULL){
        printf("\nA lista está vazia.");
        return;
    } else{
        while(aux->dados!=num){
            aux = aux->prox;
        }
        No *deletado = aux; // armazena o endereço do nó deletado
        No *aux2 = aux->prox; // armazena o que o deletado está apontando

        if(deletado == l->inicio) {
            l->inicio = aux2;
            free(deletado);
            return;
        }
        aux = l->inicio;
        while(aux!=deletado){
            if(aux->prox==deletado){
                aux->prox = aux2;
                free(deletado);
                break;
            } else {
                aux = aux->prox;
            }
        }


    }
}


int main(){
    Lista *l = criarLista();
    inserirComeco(l , 3);
    percorrerLista(l);
    inserirFinal(l , 9);
    percorrerLista(l);
    inserirMeio(l , 27 , 2);
    percorrerLista(l);
    inserirMeio(l , 81 , 2);
    percorrerLista(l);
    removerElemento(l , 81);
    percorrerLista(l);
    removerElemento(l , 3);
    percorrerLista(l);
    removerElemento(l , 81);
    percorrerLista(l);
    removerElemento(l , 27);
    percorrerLista(l);
    removerElemento(l , 9);
    percorrerLista(l);
    removerElemento(l , 9);
    printf("\n");
    return 0;
}