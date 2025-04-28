#include <stdio.h>
#include <stdlib.h>
#include "compromisso.h"
#include "data.h"

/*LISTA 
1 - adicionar funcoes em data.c/.h para a compromisso.c poder acessar os campos de dia, mes e ano indiretamente.
*/

int main(){
    Data *d = criarData(10 , 07 , 2006);
    Hora *h = criarHora(10 , 30);
    Compromisso *c = criarCompromisso(d , h , "Passear com a bilu");
    char *descricao = obterDescricao(c);
    //obterData(c , dia , mes , ano);
    printf("\nDescricao do compromisso: %s , %d" , descricao);
    

    
    return 0;
}