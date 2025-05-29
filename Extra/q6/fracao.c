#include <stdio.h>
#include <stdlib.h>
#include "fracao.h"

struct fracao{
    int num;
    int den;
};

Fracao *criarFracao(int num , int den){
    Fracao *f = (Fracao *)malloc(sizeof(Fracao));

    if(f && den!=0){
        f->num = num;
        f->den = den;
        return f;
    } else{
        printf("\nNao foi possivel alocar memoria.");
        return NULL;
    }
}
Fracao *simplificar(Fracao *f){
    printf("\nmdc: %d" , mdc(f->num , f->den));
    f->num = f->num/mdc(f->num , f->den);
    printf("\nnum: %d" , f->num );
    f->den = f->den/mdc(f->num , f->den);
    printf("\nnum: %d" , f->den );
    return f;
}
void imprimir(Fracao *f){

    printf("\nFracao simplificada: %d/%d" , f->num , f->den);
}
void liberarFracao(Fracao *f){
    f = NULL;
    free(f);
}

// funcao auxiliar
int mdc(int n , int d){
    if(d==0){
        return n;
    } else{
        return mdc(d , n%d);
    }
}

