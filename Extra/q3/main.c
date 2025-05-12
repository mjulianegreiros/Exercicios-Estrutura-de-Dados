#include <stdio.h>
#include <string.h>
// saber se uma palavra é palíndroma usando recursividade

int ehPalidromaIterativa(char p[]){
    int i=0;
    char *pRev; 
    *pRev = inverterPalavra(p);
    if(*p==*pRev){
        return 1;
    }

    return 0;

}

char inverterPalavra(char p[]){
    char pRev[strlen(p)];
    int i = 0;
    int j = strlen(p) - 1;
    while(p[i]!='\0'){
        pRev[j] = p[i];
        //printf("\ni: %d  j:%d" , i  , j);
        i++;
        j--;
    }

    return pRev;
}    

/*int ehPalindromaRecursiva(char p[]){
    
}*/

int main(){
    printf("%d\n" , ehPalidromaIterativa("ana"));
    //printf("%d\n" , ehPalidromaRecursiva("ana"));
    
    return 0;
}