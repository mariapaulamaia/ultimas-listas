#include "lista.h"
#include <stdio.h>

int main() {
    Lista lista;
    No *aux;
    char nome[31];
    int n, i;

    lista = lista_cria();

    printf("Lista vazia? %d\n", lista_vazia(&lista));

    //quantidade de nomes a inserir na lista
    scanf("%d", &n);

    char c = getchar();

    //insere nomes na lista
    for(i=0; i<n; i++) {
        scanf("%30[^,\"#\n]s", nome);
        c = getchar();

        lista_insere_final(&lista, nome);
    }

    printf("Lista vazia? %d\n\n", lista_vazia(&lista));

    //imprime conteudo
    lista_imprime(&lista);

    //pesquisa por Joselito
    aux = lista_pesquisa(&lista, "Joselito");

    if(lista_remove(&lista, aux))
        printf("Joselito está fora! :-(\n\n");
    
    //imprime conteudo
    lista_imprime(&lista);

    return 0;
}