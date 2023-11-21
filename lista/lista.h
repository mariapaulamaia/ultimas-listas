#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No_ {
    //valores
    char nome[31];

    //ponteiro para o proximo no
    struct No_ *prox;
} No;

typedef struct {
    No *inicio, *fim;
} Lista;

//cria_lista: cria e retorna uma lista vazia
Lista lista_cria();

//lista_vazia: testa se a lista esta vazia e retorna 1, caso positivo, e 0, caso contrario
//parametro: lista (referencia)
int lista_vazia(Lista *);

//lista_insere_final: insere um elemento no final da lista e retorna nada
//parametros: lista (referencia), elemento (valor)
void lista_insere_final(Lista *, char []);

//EXERCICIO
//lista_insere_inicio: insere um elemento no inicio da lista e retorna nada
//parametros: lista (referencia), elemento (valor)
void lista_insere_inicio(Lista *, char []);

//EXERCICIO
//lista_insere_apos_i: insere um elemento depois do i-esimo elemento, se acaso existir, ou no final da lista, caso contrário e retorna nada
//parametros: lista (referencia), posicao i, elemento (valor)
void lista_insere_apos_i(Lista *, int, char []);

//lista_pesquisa: pesquisa um elemento da lista, dado uma chave de busca, e retorna o endereco de memoria com a celula que possui o valor, ou NULL, caso contrario
//parametros: lista (referencia), string chave de pesquisa (referencia)
No *lista_pesquisa(Lista *, char []);

//lista_remove: remove um elemento da lista, dado um ponteiro para o no a ser removido e retorna 1 em caso de sucesso e 0, caso contrario
//parametros: lista (referencia), no (referencia)
int lista_remove(Lista *, No *);

//lista_imprime: imprime os valores de todos os nos da lista
//parametros: lista (referencia)
void lista_imprime(Lista *);

#endif