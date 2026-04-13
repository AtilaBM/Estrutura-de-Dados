#ifndef LISTADUPLAMENTE_H
#define LISTADUPLAMENTE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int Chave;
    struct Item *Proximo;
    struct Item *Anterior;
} Item;

typedef struct
{
    Item *Inicio;
    Item *Fim;
    int tam;
} Lista;

Item *CriarItem(int chave);

Lista *criaListaVazia();

#endif