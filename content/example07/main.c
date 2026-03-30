#include <stdio.h>
#include <stdlib.h>

#define ERROR -1

int pesquisaSequencial(int *numeros, int tamanho, int chave);

int main()
{

    int numeros[] = {14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
                     40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
                     30, 41, 15, 27, 33, 18, 26, 39, 12, 21};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int chave = 0;

    printf("Digite o numero que deseja encontrar: ");
    scanf("%d", &chave);

    int resultado = pesquisaSequencial(numeros, tamanho, chave);

    printf("A posicao do %d eh %d", chave, resultado);
    return 0;
}

int pesquisaSequencial(int *numeros, int tamanho, int chave)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (numeros[i] == chave)
        {
            return i;
        }
    }

    return ERROR;
}
