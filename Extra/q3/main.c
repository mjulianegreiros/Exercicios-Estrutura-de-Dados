#include <stdio.h>
#include <string.h>
// saber se uma palavra é palíndroma usando recursividade

void inverterPalavra(char p[] , char pReversa[]){
    int i = 0;
    int j = strlen(p)-1;
    while(p[i]!='\0'){
        pReversa[j] = p[i];
        //printf("\ni: %d  j:%d" , i  , j);
        i++;
        j--;
    }
    pReversa[j] = '\0';
    /*i=0;
    printf("%d" , strlen(pReversa));
    while(pReversa[i]!='\0'){
        printf("%c" , pReversa[i]);
        i++;
    }*/
    
}    

int ehPalidromaIterativa(char p[]){
    int i=0 , eh = 0;
    char pRev[strlen(p)-1]; 
    inverterPalavra(p , pRev);
    while(p[i]==pRev[i]){
        eh = 1;
        i++;
    }

    if(!eh){
        return 0;
    } return 1;

}



int ehPalindromaRecursiva(char p[] , int posicao){
    char pRev[strlen(p)];
    int i=posicao;
    inverterPalavra(p , pRev);
    //printf("\np:%s:\npRev: %s" , p , pRev);
    if(i==strlen(p)){
        return 1;
    }else{
        if(p[i]!=pRev[i]){
            return 0;
        }
        i++;
        return ehPalindromaRecursiva(p , i);
        
    }
}

int main(){
    char palavra[] = "barata";
    printf("%d\n" , ehPalindromaRecursiva(palavra , 0));
    
    return 0;
}