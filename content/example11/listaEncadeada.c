#include <stdio.h>
#include <stdlib.h>

#include "listaEncadeada.h"

Item *CriarItem(int chave)
{
    Item *I = (Item *)malloc(sizeof(Item));

    if (I == NULL)
    {
        printf("ERROR: ");
        NULL;
    }

    I->Chave = chave;
    I->Proximo = NULL;

    printf("%X \t %d \t %X\n", I, I->Chave, I->Proximo);

    return I;
}

Lista *criaListaVazia()
{
    Lista *L = (Lista *)malloc(sizeof(Lista));

    if (L == NULL)
    {
        printf("ERRO");
        return NULL;
    }

    L->Inicio = NULL;
    L->Fim = NULL;
    L->tam = 0;

    return L;
}

void inserirItem(Lista *L, Item *I, int posicao)
{
    if (posicao < 0 || posicao > L->tam)
    {
        printf("ERROR:404");
        return;
    }

    if (posicao == 0)
    {
        I->Proximo = L->Inicio;
        L->Inicio = I;
    }
    else
    {
        Item *temp = L->Inicio;
        for (int i = 0; i < posicao - 1; i++)
        {
            temp = temp->Proximo;
        }
        I->Proximo = temp->Proximo;
        temp->Proximo = I;
    }

    L->tam++;
}

void printLista(Item *A, int tam)
{

    for (int i = 0; i < tam; i++)
    {
        printf("%X \t %d \t %X\n", A, A->Chave, A->Proximo);
        A = A->Proximo;
    }
}

int countEven(Item *start)
{
    int count = 0;

    Item *current = start;

    while (current != NULL)
    {
        if (current->Chave % 2 == 0)
        {
            count++;
        }
        current = current->Proximo;
    }

    return count;
}
