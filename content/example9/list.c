#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

List *criarLista(int c)
{
    List *L = (List *)malloc(sizeof(List));

    if (L == NULL)
    {
        printf("ERROR: null list");
        exit(1);
    }

    printf("A lista foi criada con sucesso no endereco [%X]\n", L);

    L->tamanho = 0;
    L->capacidade = c;

    L->Data = (Task *)malloc(c * sizeof(Task));

    if (L->Data == NULL)
    {
        printf("ERROR: Blablabla\n");
        free(L);
        return NULL;
    }

    return L;
}

Task addTask(char *titulo, char *nome, int *status, float *progresso, int *avaliacao)
{
    Task t;

    strcpy(t.titulo, titulo);
    strcpy(t.nome, nome);
    t.status = status;
    t.progresso = progresso;
    t.avaliacao = avaliacao;

    return t;
}

void criarTask(List *l, Task t)
{
    if (l == NULL)
    {
        printf("ERROR: FAHHHHHHH");
        return NULL;
    }

    if (l->tamanho == l->capacidade)
    {
        printf("ERROR: FAHHHHHHHHHH2");
        return NULL;
    }

    l->Data[l->tamanho] = t;
    l->tamanho++;
}

void destruirLista(List *l)
{
    if (l == NULL)
    {
        return;
    }

    free(l->Data);
    free(l);
}
