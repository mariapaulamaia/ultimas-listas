#include <stdio.h>
#include "escopo.h"

int main (){
    int regrabloco = 5701;
    printf("Regra de arquivo: %d (variável global)\nRegra de Bloco: %d (acessível apenas no bloco)\nRegra de Função: ", arquivo, regrabloco);
    regraFuncao(1,6);
    printf("Regra de arquivo: %d (variável global)\nRegra de Bloco: %d (acessível apenas no bloco)\nRegra de Função: ", arquivo, regraBloco());
    regraFuncao(5,6);
    // printf("Tenta imprimir valor dentro da função 'RegraBloco': %d\n", bloco); Não é possível



    return 0;
}