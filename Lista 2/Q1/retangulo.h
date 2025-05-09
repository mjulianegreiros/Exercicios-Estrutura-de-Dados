#ifndef RETANGULO_H
#define RETANGULO_H

// Criar retângulo

typedef struct retangulo Retangulo;

Retangulo* criarRetangulo(float largura , float altura);
void liberarRetangulo(Retangulo *r);
float obterLargura(Retangulo *r);
float obterAltura(Retangulo *r);
float calcularArea(Retangulo *r );
float  calcularPerimetro(Retangulo *r);



#endif
