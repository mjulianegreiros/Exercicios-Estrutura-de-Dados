#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"

struct retangulo{
    float altura , largura;
};

Retangulo* criarRetangulo(float largura , float altura){
    Retangulo *r = (Retangulo*) malloc(sizeof(Retangulo));
    if(largura>0 && altura>0 && r!=NULL){
        r->altura = altura;
        r->largura = largura;
        return r;
    } else{
        printf("Nao foi possivel alocar memoria! :(");
        return NULL;
    }
    
}

void liberarRetangulo(Retangulo *r){
    free(r);
}

float obterLargura(Retangulo *r){
    return r->largura;
}
float obterAltura(Retangulo *r){
    return r->altura;
}
float calcularArea(Retangulo *r){
    return r->altura*r->largura;
}
float calcularPerimetro(Retangulo *r){
    return (2*r->altura)+(2*r->largura);
}
