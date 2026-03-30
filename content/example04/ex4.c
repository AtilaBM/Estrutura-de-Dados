/*Escreva uma função que leia o arquivo cujo nome fora passado como parâmetro e retorne um
vetor com os nomes dos alunos que obtiveram nota média maior ou igual a 7. A título de exemplo,
para o arquivo alunos.cvs a seguir, a função deverá retornar {“Carlos”, “Fernanda”}.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char buffer[50000], temp[100];
    int count = 0;

    FILE *read = fopen("STJ.csv", "r");
    FILE *out = fopen("resulSTJ.txt", "w");

    if (read == NULL || out == NULL)
    {
        printf("ERROR!");
        exit(1);
    }

    fgets(buffer, sizeof(buffer), read);

    while (fgets(buffer, sizeof(buffer), read) != NULL)
    {
        count++;
    }

    fprintf(out, "Quantidade de linhas: %d", count);

    fclose(read);
    fclose(out);

    return 0;
}
