#ifndef DATA_H
#define DATA_H


typedef struct data Data;

Data *criarData(int dia , int mes , int ano);
int obterDia(Data *d);
int obterMes(Data *d);
int obterAno(Data *d);
void liberarData(Data *d);


#endif