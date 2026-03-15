#include "fracao.h"

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

Fracao somarFracao(int numerador, int denominado)
{
    Fracao f;
    f.denominador = denominado;
    f.numerador = numerador;
    return f;
}
