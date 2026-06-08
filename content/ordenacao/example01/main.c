#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// rand(): gera um número pseudo-aleatório no intervalo [0, RAND_MAX]
#define TAMANHO 15

void SelectionSort(int *V, int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < N; j++)
        {

            if (V[j] < V[minIndex])
                minIndex = j;
        }

        int temp = V[minIndex];
        V[minIndex] = V[i];
        V[i] = temp;
    }
}

int main()
{
    clock_t inicio, inicio2, fim, fim2;

    system("cls");

    srand(time(NULL));

    int V[TAMANHO];
    int n = sizeof(V) / sizeof(int);

    inicio = clock();

    for (int i = 0; i < TAMANHO; i++)
        V[i] = rand() % 100;

    for (int i = 0; i < TAMANHO; i++)
        printf("%d\t", V[i]);

    fim = clock();

    double tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("\ntempo gasto foi de %f\n", tempo_gasto);


    printf("\n==============================================\n");
    inicio2 = clock();
    SelectionSort(V, n);
    for (int i = 0; i < TAMANHO; i++)
        printf("%d\t", V[i]);

    fim2 = clock();

    double tempo_gasto2 = ((double)(fim2 - inicio2)) / CLOCKS_PER_SEC;

    printf("\ntempo gasto foi de %f\n", tempo_gasto);
}