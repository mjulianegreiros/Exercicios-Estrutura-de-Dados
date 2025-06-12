#include <stdio.h>
#include <stdlib.h>

/*01. Implemente em C as operações de criação e inserção para um sistema de gerenciamento de alunos usando
uma lista duplamente encadeada. A lista deverá armazenar a matrícula (inteiro) e o nome de cada aluno.
Implemente as seguintes funções, seguindo os protótipos sugeridos:
a. Criação de uma lista vazia. 
Lista* cria_lista();
b. Inserção de um novo aluno no início da lista.
void insere_inicio(Lista* l, int matricula, const char* nome);
c. Inserção de um novo aluno no fim da lista.
void insere_fim(Lista* l, int matricula, const char* nome);
d. Inserção de um novo aluno após uma matrícula específica: a função deve buscar por um aluno com
a matricula e, se encontrar, inserir o novo aluno logo após ele.
int insere_apos_matricula(Lista* l, int matricula, int nova_matricula, const char*
novo_nome);
A função deve retornar 1 em caso de sucesso e 0 se a matricula não for encontrada.
e. Impressão da lista de alunos: para cada aluno, imprima a matrícula e o nome. A impressão pode ser
feita do início para o fim.
void imprime_lista(Lista* l);*/

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
        while(aux->aluno.matricula!=matricula && aux!=NULL){
            aux = aux->prox;
        }
        if(aux->aluno.matricula == matricula){
            No *aux2 = aux->prox;
            no->aluno = aluno;
            no->prox = aux2;
            no->anterior = aux;
            aux->prox = no;
            return 1;
        }
        return 0;
    }
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
    Aluno a1 , a2 , a3 , a4;
    a1.matricula = 1;
    a1.nome = "joaozinho";
    a2.matricula = 2;
    a2.nome = "mariazinha";
    a3.matricula = 3;
    a3.nome = "pedrinho";
    a4.matricula = 4;
    a4.nome = "jadiel";
    exibirLista(l1);
    inserirInicio(l1 , a1);
    //exibirLista(l1);
    inserirInicio(l1 , a2);
    exibirLista(l1);
    printf("\n\n");
    inserirFim(l1 , a3);
    inserirInicio(l1 , a3);
    exibirLista(l1);
    printf("\n %d  " , inserirMeio(l1 , 5 , a4));
    exibirLista(l1);
    
    return 0;
}