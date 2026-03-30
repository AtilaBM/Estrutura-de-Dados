/*Escreva uma função que leia o arquivo cujo nome fora passado como parâmetro e retorne um
vetor com os nomes dos alunos que obtiveram nota média maior ou igual a 7. A título de exemplo,
para o arquivo alunos.cvs a seguir, a função deverá retornar {“Carlos”, “Fernanda”}.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nameArchive[100], buffer[100];
    int count = 0;

    float n1, n2;

    FILE *read = fopen("dadosAlunos.csv", "r");
    FILE *out = fopen("alunosNota7.txt", "w");

    if (read == NULL || out == NULL)
    {
        printf("ERROR!");
        exit(1);
    }

    fgets(buffer, sizeof(buffer), read); 

    char alunos[100][50];
    while (fscanf(read, "%49[^,],%f,%f", alunos[count], &n1, &n2) == 3)
    {
        // fprintf(out, "aluno: %s %.2f %.2f\n", alunos[count], n1, n2);
        if ((n1 + n2) / 2 >= 7)
        {
            fprintf(out, "%s", alunos[count]);
        }

        count++;
    }

    fclose(read);
    fclose(out);

    return 0;
}
