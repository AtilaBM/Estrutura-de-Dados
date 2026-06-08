#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int binarySearch(int *V, int N, int key);

int main()
{
    system("cls");

    int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(n) / sizeof(int);
    int key = 14;

    int position = binarySearch(n, size, key);

    if (position != ERRO)
    {
        printf("O elemento %d esta na posicao %d\n", key, position);
    }
    else
    {
        printf("O elemento %d nao esta no conjunto\n", key);
    }

    return 0;
}

int binarySearch(int *V, int N, int key)
{
    int left = 0;
    int right =N - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        if (V[middle] == key)
        {
            return middle;
        }
        else if (V[middle] < key)
        {
            left = middle + 1;
        }
        else
        {
            right = middle + 1;
        }
    }
}
