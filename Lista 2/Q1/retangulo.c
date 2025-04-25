#include <stdio.h>
#include "retangulo.h"

typedef struct retangulo{
    float altura , largura;
};

Retangulo* criarRetangulo(float largura , float altura){
    Retangulo *r = (Retangulo *)malloc(sizeof(Retangulo));
    if(largura>0 && altura>0 && r!=NULL){
        r->altura = altura;
        r->largura = largura;
        return r;
    } else{
        printf("Nao foi possivel alocar memoria! :(");
        return NULL;
    }
    
}

void liberarRetangulo(Retangulo r){
    free(r);
}

void obterLargura(Retangulo r){
    printf("A largura do retangulo eh: %.2f" , r.largura);
}
void obterAltura(Retangulo r){
    printf("A altura do retangulo eh: %.2f" , r.altura);
}
void calcularArea(Retangulo r , float *area){
    printf("A area do retangulo eh: %.2f" , r.altura*r.largura);
}
void calcularPerimetro(Retangulo r , float *perimetro){
    printf("O perimetro do retangulo eh: %.2f" , (r.altura*2) + (r.largura*2));
}