/*Q05 Escreva um programa que leia um arquivo texto contendo uma lista de compras em que cada linha
possui o nome do produto, a quantidade e o valor unitário de cada item para, em seguida, informar
o valor total da compra. Caso o arquivo texto tenha:
Arroz 2 5.50
Feijão 3 3.00
Carne 1 15.75
Leite 4 2.50
A saída (na tela) deverá ser:
1) Arroz: 2 * 5.50 = 11.00
2) Feijão: 3 * 3.00 = 9.00
3) Carne: 1 * 15.75 = 15.75
4) Leite: 4 * 2.50 = 10.00
O valor total da compra é R$ 45.75*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *out = fopen("items_total.txt", "w");
    FILE *in = fopen("items.txt", "r");

    if (in == NULL || out == NULL)
    {
        printf("ERROR!!");
        exit(1);
    }

    char product[50];
    int quant;
    float price, resul = 0.0, total = 0.0;
    int count = 1;

    while (fscanf(in, "%s %d %f", product, &quant, &price) == 3)
    {
        resul = quant * price;
        fprintf(out, "%d) %s: %d * $%.2f = %.2f\n", count, product, quant, price, resul);
        count++;
        total += resul;
    }

    fprintf(out, "\nTotal: $%.2f", total);

    fclose(out);
    fclose(in);

    return 0;
}