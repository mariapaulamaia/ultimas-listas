#include "armazenamento.h"

int classeauto = 5;
double classeextern = 12.07200605102013;
//register int classeregister = 0; Não pode ser declarado aqui, pois depende do escopo de bloco
int classeStatic (){
    static int exemplo = 0;
    exemplo++;
}


