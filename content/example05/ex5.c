#include <stdio.h>
#include <stdlib.h>

ehPrimo(int n);

int main()
{
    system("cls");

    int n, resul;

    printf("Digite um numero:");
    scanf("%d", &n);

    resul = ehPrimo(n);

    if (resul == 0)
    {
        printf("O numero %d nao eh primo", n);
    }
    else
    {
        printf("O numero %d eh primo", n);
    }

    return 0;
}

int ehPrimo(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            return 0;
        }
    }
    return 1;
}
