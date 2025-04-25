#ifndef RETANGULO_H
#define RETANGULO_H

// Criar retângulo

typedef struct retangulo Retangulo;

Retangulo* criarRetangulo(float largura , float altura);
void liberarRetangulo(Retangulo r);
void obterLargura(Retangulo r);
void obterAltura(Retangulo r);
void calcularArea(Retangulo r , float *area);
void calcularPerimetro(Retangulo r , float *perimetro);



#endif