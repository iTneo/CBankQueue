#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct no {
    char categoria;
    int sequencia;
    struct no *proximo;
};

typedef no *ponteiro_de_no;
ponteiro_de_no fila;
int operacao;

void fila_inserir(ponteiro_de_no fila){
    char categoria;
    int contador_de_categoria = 0;

    mostra_categorias();
    scanf("%c", &categoria);

    while(fila->proximo != NULL){
        if(fila->categoria == categoria){
            contador_de_categoria++;
        }
        fila = fila->proximo;
    }
    fila->proximo = (ponteiro_de_no) malloc(sizeof(no));
    fila = fila->proximo;
    fila->sequencia = ++contador_de_categoria;
    fila->proximo = NULL;
}
