#ifndef FRACAO_H
#define FRACAO_H

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

#endif