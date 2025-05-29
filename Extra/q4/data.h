#ifndef DATA_H
#define DATA_H

typedef struct data Data;

Data *criarData(int dia , int mes , int ano);
int ehBissexto(Data *data);
int compararCom(Data *d1 , Data *d2);
void liberarData(Data *data);



#endif