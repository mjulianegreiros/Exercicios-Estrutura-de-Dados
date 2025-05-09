#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include "horario.h"
#include "compromisso.h"


int main(){
    Data *d = criarData(10 , 07 , 2006);
    Hora *h = criarHora(10 , 30);
    Compromisso *c = criarCompromisso(d , h , "Passear com a bilu");
    char *descricao = obterDescricao(c);
    int hora = 0;
    int minuto = 0;
    obterHora(c , &hora , &minuto);
    printf("\nDescricao do compromisso: %s , Hora: %d:%d" , descricao , hora , minuto);
    

    
    return 0;
}