#include "tabela.h"
#include <stdio.h>

int main()
{
    Equipe *tabela = lerDados("tabela2024.csv");

    system("cls");

    for (int i = 0; i < 20; i++)
    {
        printf("%d -- %s | %d pontos\n", tabela[i].Posicao, tabela[i].Time, tabela[i].Pontos);
    }

    char time[20];
    printf("\nQue time quer procurar: ");
    scanf("%s", time);

    int resultado = getPosition(tabela, time);

    printf("A posicao do %s eh %d\n", time, resultado);

    return 0;
}