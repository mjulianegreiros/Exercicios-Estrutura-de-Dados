#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha *pilha = criarPilha();
    peek(pilha);
    push(pilha , "maria");
    push(pilha , "jose");
    push(pilha , "pedro");
    peek(pilha);
    pop(pilha);
    peek(pilha);


    return 0;
}