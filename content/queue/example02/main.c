#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Item
{
    char Nome[50];
    struct Item *next;
} Item;

typedef struct Fila
{
    int tam;
    Item *beggin;
    Item *end;
} Fila;

Item *CriarItem(char *Nome)
{
    Item *I = (Item *)malloc(sizeof(Item));

    if (I == NULL)
    {
        printf("ERROR: no memory\n");
        return NULL;
    }

    strcpy(I->Nome, Nome);
    I->next = NULL;

    return I;
}

Fila *CriarFila()
{
    Fila *F = (Fila *)malloc(sizeof(Fila));

    if (F == NULL)
    {
        printf("ERROR: no memory\n");
        return NULL;
    }

    F->tam = 0;
    F->beggin = NULL;
    F->end = NULL;

    return F;
}

void InserirItem(Fila *F, Item *I)
{
    if (F == NULL || I == NULL)
        return;

    I->next = NULL;

    if (F->tam == 0)
    {
        F->beggin = I;
        F->end = I;
    }
    else
    {
        F->end->next = I;
        F->end = I;
    }
    F->tam++;
}

void ExcluirItem(Fila *F)
{
    if (F == NULL || F->tam == 0)
        return;

    Item *Aux = F->beggin;
    F->beggin = Aux->next;

    if (F->beggin == NULL)
        F->end = NULL;

    free(Aux);
    F->tam--;
}

void ExibirFila(Fila *F) {
    if (F == NULL || F->beggin == NULL){
        printf("Fila vazia.\n");
        return;
    }

    Item *Atual = F->beggin;
    while (Atual != NULL) {
        printf("%s \t", Atual->Nome);
        Atual = Atual->next;
    }
    printf("\n");
}

void DestruirFila(Fila *F) {
    if (F == NULL) return;
    while (F->tam > 0)
        ExcluirItem(F);
    free(F);
}

int main()
{
    Fila *F= CriarFila();

    InserirItem(F,CriarItem("Atila"));
    InserirItem(F,CriarItem("Carlos"));
    InserirItem(F,CriarItem("Manoela"));
    InserirItem(F,CriarItem("Izabelly"));
    InserirItem(F,CriarItem("Luiza"));
    InserirItem(F,CriarItem("Pedro"));

    ExibirFila(F);

    ExcluirItem(F);

    ExibirFila(F);

    return 0;
}