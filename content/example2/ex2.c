
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in = fopen("data.csv", "r");
    FILE *out = fopen("data.txt", "w");

    if (in == NULL || out == NULL)
    {
        printf("ERROR!!");
        exit(1);
    }

    char product[80], buffer[100];
    int quanty, t_qanty = 0;
    float price;

    fscanf(in, "%s", buffer);

    while (fscanf(in, "%[^,],%d,%f", product, &quanty, &price) == 3)
    {
        fprintf(out, "Product: %s Quantity: %d \t Price: $%.2f\n", product, quanty, price);
        t_qanty += quanty;
    }

    fprintf(out, "\nTotal quantity = %d", t_qanty);

    fclose(out);
    fclose(in);

    return 0;
}