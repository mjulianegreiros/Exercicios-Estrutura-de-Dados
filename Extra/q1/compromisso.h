#ifndef COMPROMISSO_H
#define COMPROMISSO_H


typedef struct data Data;
typedef struct horario Hora;
typedef struct compromisso Compromisso;
/*typedef struct{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct{
    int hora;
    int minuto;
}Hora;
typedef struct{
    Data data;
    Hora horario;
    char *descricao;
}Compromisso;*/

// Config Data
Data *criarData(int dia , int mes , int ano);
void liberarData(Data *d);
// Config Hora
Hora *criarHora(int hora , int minuto);
void liberarHora(Hora *h);
// Config Compromisso
Compromisso *criarCompromisso(Data *data , Hora *horario , char *descricao);
void desmarcarCompromisso(Compromisso *compromisso);
Compromisso *adiarCompromisso(Compromisso *compromisso , Data *data , Hora *horario);
void liberarCompromisso(Compromisso *compromisso);



#endif