/*
    02. Implemente em C as operações de remoção para a lista duplamente encadeada definida no exercício anterior.
    Utilize as mesmas estruturas Aluno, No e Lista. Implemente as seguintes funções de remoção, seguindo
    os protótipos sugeridos:
    a. Remoção do aluno no início da lista.
        void remove_inicio(Lista* l);
    b. Remoção do aluno no fim da lista.
        void remove_fim(Lista* l);
    c. Remoção de um aluno por sua matrícula: a função deve buscar pelo aluno com a matrícula fornecida
    e removê-lo da lista.
        int remove_por_matricula(Lista* l, int matricula);
    d. Remoção de alunos duplicados: percorra todos os nós da lista para identificar matrículas duplicadas
    e, caso encontre, remova um deles.
*/
# include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    int matricula;
    char *nome;
}Aluno;

typedef struct no{
    Aluno aluno;
    struct no *prox;
    struct no *anterior;
}No;

typedef struct lista{
    No *inicio;
    No *fim;
}Lista;

Lista *criarLista(){
    Lista *lista = (Lista *)malloc(sizeof(Lista));

    if(lista){
        lista->inicio = NULL;
        lista->fim = NULL;
        return lista;
    }
    printf("\nNao foi possivel alocar memoria.");
    return NULL;
}

void inserirInicio(Lista *lista, Aluno aluno){
    No *no = (No *)malloc(sizeof(No));

    if(no){
        if(lista->inicio==NULL && lista->fim==NULL){
            no->aluno = aluno;
            no->anterior = NULL;
            no->prox = NULL;
            lista->inicio = no;
            lista->fim = no;
            return;
        }else{
            no->aluno = aluno;
            no->prox = lista->inicio;
            no->anterior = NULL;
            lista->inicio->anterior = no;
            lista->inicio = no;
            return;
        }
    }
    printf("\nNao foi possivel alocar memoria.");
    return;
}

void inserirFim(Lista *lista , Aluno aluno){
    No *no = (No *)malloc(sizeof(No));
    No *aux = lista->fim;

    if(no){
        if(aux){
            no->aluno = aluno;
            no->prox = NULL;
            no->anterior = aux;
            aux->prox = no;
            lista->fim = no;
            return;
        }
    }
    printf("\nNao foi possivel alocar memoria.");
    return;
}

int inserirMeio(Lista *lista , int matricula , Aluno aluno){
    No *no = (No *)malloc(sizeof(No));
    No *aux = lista->inicio;

    if(no){
        while(aux!=NULL && aux->aluno.matricula!=matricula){
            aux = aux->prox;
        }
        if(aux!=NULL && aux->aluno.matricula == matricula){
            No *aux2 = aux->prox;
            no->aluno = aluno;
            no->prox = aux2;
            no->anterior = aux;
            aux->prox = no;
            if(aux2!=NULL){
                aux2->anterior = no;
            }
            return 1;
        }
        if(aux==NULL){
            printf("\nMatricula nao encontrada.");
            return 0;
        }
    }
}

void removeElemento(Lista *lista , int matricula){
    No *aux = lista->inicio;

    while(aux!=NULL && aux->aluno.matricula != matricula){
        aux = aux->prox;
    }

    if(aux==NULL){
        if(lista->inicio == NULL){
            printf("\nA lista esta vazia.");
            return;
        }
        printf("\nMatricula nao encontrada.");
        return;
    }

    
    if(aux == lista->inicio){
        lista->inicio = aux->prox;
        if(aux->prox!=NULL){
            aux->prox->anterior = NULL;
        }
    } else{
        printf("\nAux->prox: %p" , aux->prox);
        printf("\nFim da lista: %p" , lista->fim);
        aux->anterior->prox = aux->prox;
    }
    if(aux == lista->fim){
        lista->fim = aux->anterior;
<<<<<<< HEAD
    }
    // Removendo fim
    if(aux == lista->fim){
        lista->fim = aux->anterior;
=======
>>>>>>> 8b76aab32cd8901a4f671a365d9c63894d2684ef
        if(aux->anterior!=NULL){
            aux->anterior->prox = NULL;
        }
    } else{
        aux->prox->anterior = aux->anterior;
    }

    free(aux);
<<<<<<< HEAD
    
=======
>>>>>>> 8b76aab32cd8901a4f671a365d9c63894d2684ef
    return;

}

void exibirLista(Lista *lista){
    No *aux = lista->inicio;
    if(!aux){
        printf("\nA lista esta vazia.");
        return;
    }
    while(aux!=NULL){
        printf("\nMatricula: %d  Nome: %s" , aux->aluno.matricula , aux->aluno.nome);
        aux = aux->prox;
    }
}



int main(){
    Lista *l1 = criarLista();
    Aluno a1 , a2 , a3 , a4 , a5;
    a1.matricula = 1;
    a1.nome = "joaozinho";
    a2.matricula = 2;
    a2.nome = "mariazinha";
    a3.matricula = 3;
    a3.nome = "pedrinho";
    a4.matricula = 4;
    a4.nome = "jadiel";
    a5.matricula = 5;
    a5.nome = "tiago";
    //exibirLista(l1);
    inserirInicio(l1 , a1);
    //exibirLista(l1);
    inserirInicio(l1 , a2);
    //exibirLista(l1);
    //printf("\n\n");
    inserirFim(l1 , a3);
    //exibirLista(l1);
    printf("\n%d  " , inserirMeio(l1 , 2 , a4));
    inserirFim(l1 , a5);
    //exibirLista(l1);
    //printf("\n\n");
    exibirLista(l1);
    removeElemento(l1 , 1);
    printf("\n\n");
    exibirLista(l1);
    
    return 0;
}
