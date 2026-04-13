#include <stdio.h>
#include <stdlib.h>

#include "listaDuplamente.h"

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
    I->Anterior = NULL;

    printf("%X \t %d \t %X\n", I, I->Chave, I->Proximo);

    return I;
}
