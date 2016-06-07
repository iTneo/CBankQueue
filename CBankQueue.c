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
