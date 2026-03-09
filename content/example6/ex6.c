#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numerador;
    int denominador;
} Fracao;

Fracao criarFracao(int numerador, int denominado);
int calcularMDC(int A, int B);
Fracao simplificarFracao(Fracao f);

int main()
{
    Fracao f;

    // int d, n;
    // printf("Numerador:");
    // scanf("%d", &n);

    // printf("Denominador:");
    // scanf("%d", &d);

    // criarFracao(n, d);

    // printf("Fracao: %d/%d", n, d);

    Fracao f1 = criarFracao(77, 17);
    printf("%d / %d\n", f1.numerador, f1.denominador);
    f1 = simplificarFracao(f1);
    printf("%d / %d\n", f1.numerador, f1.denominador);
}

Fracao criarFracao(int numerador, int denominador)
{
    Fracao f;
    f.denominador = denominador;
    f.numerador = numerador;
    return f;
}

int calcularMDC(int A, int B)
{
    int resto = A % B;

    A = B;
    B = resto;
    resto = A % B;

    return B;
}

Fracao simplificarFracao(Fracao f)
{
    int mdc = calcularMDC(f.numerador, f.denominador);

    f.numerador = f.numerador / mdc;
    f.denominador = f.denominador / mdc;

    return f;
}
