#include <stdio.h>
#include <time.h>

int fatRecursivo(int n);
int fatInterativo(int n);

int main(){
    
    clock_t inicioRecursivo = clock();
    printf("%d ", fatRecursivo(6));
    clock_t fimRecursivo = clock();
    double tempoRecursivo = ((double)(fimRecursivo - inicioRecursivo)) / CLOCKS_PER_SEC;

    clock_t inicioInterativo = clock();
    printf("\n%d\n" , fatInterativo(6));
    clock_t fimInterativo = clock();
    double tempoInterativo = ((double)(fimInterativo - inicioInterativo)) / CLOCKS_PER_SEC;

    printf("R: %f vs. I: %f" , tempoRecursivo , tempoInterativo);

}


int fatRecursivo(int n){
    //caso base 0 ou 1
    if(n==0 || n==1){
        return 1;
    }else{
        return n*fatRecursivo(n-1);
    }
}
int fatInterativo(int n){
    int f=1;

    for(int i=1 ;i<=n;i++){
        f = f *i;
    }
    return f;
}