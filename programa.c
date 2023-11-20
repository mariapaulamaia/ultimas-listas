#include <stdio.h>
#include "armazenamento.h"

int main (){
    register int classeregister = 0;
    printf("Classe auto: %d\nClasse register:%d\nClasse extern: %lf\nClasse static: %d\n\n", classeauto, classeregister++, classeextern, classeStatic());
    printf("Classe auto: %d\nClasse register:%d\nClasse extern: %lf\nClasse static: %d\n\n", classeauto, classeregister++, classeextern, classeStatic());
    printf("Classe auto: %d\nClasse register:%d\nClasse extern: %lf\nClasse static: %d\n\n", classeauto, classeregister++, classeextern, classeStatic());

}