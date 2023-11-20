#include "escopo.h"
#include <stdio.h>

int arquivo = 5;
int regraBloco (){
    int bloco = 1;
    bloco *= 2;

    return bloco;
}
void regraFuncao(int a, int b){
    if (a*b > 10){
        goto grande;
    }
    else {
        goto pequeno;
    }
    
    grande:
        printf("Uau você é grande!\n");
        exit(1);


    pequeno:
        printf("Uau você é pequeno!\n");
     

}




