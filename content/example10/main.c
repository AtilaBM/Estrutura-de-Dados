#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    List *l = createList(30);
    if (l == NULL)
    {
        printf("Falha ao criar lista\n");
        return 1;
    }

    char name[MAX_NAME];
    char class[MAX_CLASS];
    int id = 0;
    float grade1, grade2, grade3, grade4;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter class name: ");
    scanf("%s", class);

    printf("Enter grade 1: ");
    scanf("%f", &grade1);

    printf("Enter grade 2: ");
    scanf("%f", &grade2);

    printf("Enter grade 3: ");
    scanf("%f", &grade3);

    printf("Enter grade 4: ");
    scanf("%f", &grade4);

    id++;

    Student s1 = createStudent(name, class, &id,
                               &grade1, &grade2, &grade3, &grade4);

    printf("Aluno: %s | Media: %.2f\n", s1.name,
           (s1.grade1 + s1.grade2 + s1.grade3 + s1.grade4) / 4.0);

    free(l->Info);
    free(l);
    return 0;
}