#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"

int main(){
    float largura = 5.0;
    float altura = 2.0;
    Retangulo *r1 = criarRetangulo(largura , altura);
    printf("Area: %f" , calcularArea(r1));
    printf("Perimetro: %f" , calcularPerimetro(r1));
    printf("Largura: %f" , obterLargura(r1));
    printf("Altura: %f" , obterAltura(r1));
    liberarRetangulo(r1);
    


}
