#include <stdio.h>
// somar os digitos de um numero usando recursividade

int somaInterativa(int n){
    int s = 0;
    while(n!= 0){
        s = s + n%10;
        n /= 10;
    }
    return s;
}

int somaRecursiva(int n){
    // caso base n%10 == 0
    int s=0;
    if(n==0){
        return n;    
    } else {
        return n %10 + somaRecursiva(n/10);
    }
}

int main(){
    printf("%d\n" , somaInterativa(1234));
    printf("%d\n" , somaRecursiva(1234));
    return 0;
}