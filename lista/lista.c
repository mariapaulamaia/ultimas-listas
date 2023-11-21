#include "lista.h"

Lista lista_cria() {
    Lista l;

    //aloca um novo no
    l.inicio = (No *) malloc(sizeof(No));
    if(l.inicio == NULL) {
        printf("Criacao: Erro ao alocar memoria! Programa finalizado.\n");
        exit(EXIT_FAILURE);
    }

    //faz o prox apontar para NULL e o fim para o inicio
    l.inicio->prox = NULL;
    l.fim = l.inicio;

    return l;
}

int lista_vazia(Lista *l) {
    //se o ponteiro fim aponta para inicio
    return l->fim == l->inicio;
}

void lista_insere_final(Lista *l, char nome[]) {
    //aloca novo no
    No *aux = (No *) malloc(sizeof(No));
    if(aux == NULL) {
        printf("Insere final: Erro ao alocar memoria! Programa finalizado.\n");
        exit(EXIT_FAILURE);
    }

    //copia dados para o novo no
    strcpy(aux->nome, nome);

    //faz prox do fim apontar para aux, prox do aux apontar para NULL e fim apontar para aux
    l->fim->prox = aux;
    aux->prox = NULL;
    l->fim = aux;
}

No *lista_pesquisa(Lista *l, char nome[]) {
    //aux aponta para o prox do inicio
    No *aux = l->inicio->prox;

    //enquanto nao atingir o final da lista e nao encontrar o elemento pesquisado
    while(aux != NULL && strcmp(aux->nome, nome) != 0) {
        //aux aponta para o prox dele
        aux = aux->prox;
    }

    //retorna endereco da celula com o elemento pesquisado, ou NULL caso contrario
    return aux;
}

int lista_remove(Lista *l, No *atual) {
    int removeu = 0;
    No *aux = l->inicio->prox;

    //pesquisa ate que o prox do aux aponte para o atual
    while(aux->prox != atual && aux->prox != NULL)
        aux = aux->prox;

    if(aux->prox == atual) {
        //prox do aux aponta para o prox do aux, isolando o atual da lista
        aux->prox = atual->prox;

        //desaloca o atual
        free(atual);
        atual = NULL;

        removeu = 1;
    }

    return removeu;
}

void lista_imprime(Lista *l) {
    No *aux = l->inicio->prox;

    while(aux != NULL) {
        printf("%s\n", aux->nome);

        aux = aux->prox;
    }
    printf("\n");
}