#include <stdio.h>
#include <time.h>

void hanoiRecursivo(int n , char pinoO , char pinoA , char pinoC);
// void hanoiInterativo(int n , char pinoO , char pinoA , char pinoC);


int main(){
    
    clock_t inicioRecursivo = clock();
    hanoiRecursivo(3 , 'A' , 'B' , 'C');
    clock_t fimRecursivo = clock();
    double tempoRecursivo = ((double)(fimRecursivo - inicioRecursivo)) / CLOCKS_PER_SEC;

    printf("\n");

    /*clock_t inicioInterativo = clock();
    hanoiInterativo(3 , 'A' , 'B' , 'C');
    clock_t fimInterativo = clock();
    double tempoInterativo = ((double)(fimInterativo - inicioInterativo)) / CLOCKS_PER_SEC;

    printf("R: %f vs. I: %f" , tempoRecursivo , tempoInterativo);*/

}



void hanoiRecursivo(int n , char pinoO , char pinoA , char pinoC){
    if(n==1){
        printf("\ndisco %d de pino %c para pino %c." , n , pinoO , pinoC);
    }else{
        hanoiRecursivo(n-1 , pinoO , pinoC , pinoA);
        printf("\ndisco %d de pino %c para pino %c." , n , pinoO, pinoC);
        hanoiRecursivo(n-1 , pinoA , pinoO , pinoC);
        //hanoiRecursivo(n-1, pinoC , pinoO , pinoA);
        //printf("\ndisco %d de pino %c para pino %c." , n , pinoC, pinoA);

    }
}

/*void hanoiInterativo(int n , char pinoO , char pinoA , char pinoC){
    if(n%2!=0){
        int m=0;
        if(pinoO=='A'){
            while(m!=pow(2 , n)-1){
                printf("\ndisco %d para pino %c." , );
            }
        }
    }
}*/