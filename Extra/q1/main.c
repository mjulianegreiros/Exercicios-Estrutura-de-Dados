#include <stdio.h>
#include <stdlib.h>
#include "compromisso.h"

int main(){
    Data *d = criarData(10 , 07 , 2006);
    Hora *h = criarHora(10 , 30);
    Compromisso *c = criarCompromisso(d , h , "Passear com a bilu");
    return 0;
}