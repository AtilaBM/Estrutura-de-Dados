#include "fracao.h"


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