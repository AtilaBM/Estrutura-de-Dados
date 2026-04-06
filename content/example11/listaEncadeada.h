#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int Chave;
    struct Item *Proximo;
} Item;

typedef struct
{
    Item *Inicio;
    Item *Fim;
    int tam;
} Lista;

Item *CriarItem(int chave);

Lista *criaListaVazia();

void inserirItem(Lista *L,Item *I,int posicao);

void printLista(Item *A, int tam);

int countEven(Item *start);

#endif
