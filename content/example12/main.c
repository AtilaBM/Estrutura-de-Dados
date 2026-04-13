#include <stdio.h>
#include <stdlib.h>

#include "listaDuplamente.h"

int main()
{

    Item *A = CriarItem(10);
    Item *B = CriarItem(20);
    Item *C = CriarItem(30);
    Item *D = CriarItem(40);
    Item *E = CriarItem(50);
    Item *F = CriarItem(60);

    A->Anterior = NULL;
    A->Proximo = B;

    B->Anterior = A;
    B->Proximo = C;

    C->Anterior = B;
    C->Proximo = D;

    D->Anterior = C;
    D->Proximo = E;

    E->Anterior = D;
    E->Proximo = F;

    F->Anterior = E;
    F->Proximo = NULL;

    printf("Chave do D: %d\n", D->Chave);

    Item *atual = D;
    atual = atual->Anterior;
    atual = atual->Anterior;

    printf("Chave do D: %d\n", D->Chave);

    return 0;
}