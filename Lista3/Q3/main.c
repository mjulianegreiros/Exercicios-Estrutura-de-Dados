#include <stdio.h>
#include <time.h>

int mdcRecursivo(int n1 , int n2);
int mdcInterativo(int n1, int n2);


int main(){
    
    clock_t inicioRecursivo = clock();
    printf("%d ", mdcRecursivo(17 , 10));
    clock_t fimRecursivo = clock();
    double tempoRecursivo = ((double)(fimRecursivo - inicioRecursivo)) / CLOCKS_PER_SEC;

    clock_t inicioInterativo = clock();
    printf("\n%d\n" , mdcInterativo(17 , 10));
    clock_t fimInterativo = clock();
    double tempoInterativo = ((double)(fimInterativo - inicioInterativo)) / CLOCKS_PER_SEC;

    printf("R: %f vs. I: %f" , tempoRecursivo , tempoInterativo);

}



int mdcRecursivo(int n1 , int n2){
    if(n2==0){
        return n1;
    }else{
        return mdcRecursivo(n2 , n1%n2);
    }
}
int mdcInterativo(int n1, int n2){
    if(n1>n2){
        int mdc;
        for(int i=1;i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                mdc = i;
            }
        }
        return mdc;
    }else{
        int mdc;
        for(int i=1;i<=n1;i++){
            if(n1%i==0 && n2%i==0){
                mdc = i;
            }
        }
        return mdc;
    }
}