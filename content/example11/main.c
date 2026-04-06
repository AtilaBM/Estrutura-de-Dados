#include <stdio.h>
#include <stdlib.h>

#include "listaEncadeada.h"


int main()
{

    system("cls");

    /*
    while (NULL)
    {
        Item *A = (Item *)malloc(sizeof(Item));

        // DECLARACAO DO A

        if (A == NULL)
        {
            printf("ERROR: ");
            exit(1);
        }

        A->Chave = 15;
        A->Proximo = NULL;
        printf("Endereco de memoria do A: %X\n", A); // %X (em hexadecimal)
        printf("Chave: %d\n", A->Chave);
        printf("Proximo: %X\n", A->Proximo);

        Item *B = (Item *)malloc(sizeof(Item));

        if (B == NULL)
        {
            printf("ERROR: ");
            exit(1);
        }

        B->Chave = 36;
        B->Proximo = NULL;
        printf("Endereco de memoria do B: %X\n", B); // %X mostra o hexadecimal correspondente
        printf("Chave: %d\n\n", B->Chave);

        Item *C = (Item *)malloc(sizeof(Item));

        if (C == NULL)
        {
            printf("ERROR: ");
            exit(1);
        }

        C->Chave = 40;
        C->Proximo = NULL;
        printf("Endereco de memoria do C: %X\n", C); // %X mostra o hexadecimal correspondente
        printf("Chave: %d \n\n", C->Chave);

        Item *D = (Item *)malloc(sizeof(Item));

        if (D == NULL)
        {
            printf("ERROR: ");
            exit(1);
        }

        D->Chave = 10;
        D->Proximo = NULL;
        printf("Endereco de memoria do D: %X\n", D); // %X mostra o hexadecimal correspondente
        printf("Chave: %d\n", D->Chave);
        printf("\n");
    }
    */

    Item *A = CriarItem(15);
    Item *B = CriarItem(37);
    Item *C = CriarItem(73);
    Item *D = CriarItem(51);

    A->Proximo = B;
    B->Proximo = C;
    C->Proximo = D;

    printLista(A, 4);

    return 0;
}
