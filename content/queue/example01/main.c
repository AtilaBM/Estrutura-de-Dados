/*

IMPLEMENTAÇÃO DE FILA USANDO ARRAY

*/

#include <stdio.h>
#include <stdlib.h>

// Difinindo item da fila

typedef struct
{
    int Chave;
} Item;

typedef struct
{
    Item *Dados; // vetor de itens
    int Inicio;  // índice do primeiro item
    int Fim;     // índice onde o próximo item será inserido
    int Capacidade;
    int Tamanho; // quantidade de elementos atualmente na fila
} Fila;

// PROTOTIPOS

Item criarItem(int Chave);
Fila *criarFila(int Capacidade);
void enfileirar(Fila *f, Item i);
Item desenfileirar(Fila *f);
void DestruirFila(Fila *F);

// MAIN

int main()
{
    system("cls");

    /*
        Item A = criarItem(137);
        Item B = criarItem(241);
        Item C = criarItem(339);

        Item V[MAX];

        V[0] = A;
        V[1] = B;
        V[2] = C;

        for (int i = 0; i < 3; i++)
        {
            printf("Posicao: %d // Valor: %d\n", i + 1, V[i].Chave);
        }*/

    Fila *f = criarFila(15);

    enfileirar(f, criarItem(10));
    enfileirar(f, criarItem(20));
    enfileirar(f, criarItem(30));
    enfileirar(f, criarItem(40));
    enfileirar(f, criarItem(50));

    for (int i = f->Inicio; i <= f->Fim; i++)
    {
        printf("Posicao: %d \t Chave: %d\n", i + 1, f->Dados[i].Chave);
    }

    return 0;
}

// Functions

Item criarItem(int Chave)
{
    Item I;
    I.Chave = Chave;
    return I;
}

Fila *criarFila(int Capacidade)
{
    Fila *F = (Fila *)malloc(sizeof(Fila));
    if (F == NULL)
        return NULL;
    F->Capacidade = Capacidade;
    F->Tamanho = 0;
    F->Inicio = -1;
    F->Fim = -1;
    F->Dados = (Item *)malloc(Capacidade * sizeof(Item));
    if (F->Dados == NULL)
    {
        free(F);
        return NULL;
    }
    return F;
}

void enfileirar(Fila *f, Item i)
{

    if (f->Tamanho = f->Capacidade)
    {
        return;
    }
    if (f->Tamanho == 0)
    {
        f->Inicio++;
    }

    f->Fim = f->Fim + 1;
    f->Dados[f->Fim] = i;
    f->Tamanho++;
}

Item desenfileirar(Fila *f)
{
}

void DestruirFila(Fila *F)
{
    if (F == NULL)
        return;
    free(F->Dados);
    free(F);
}
