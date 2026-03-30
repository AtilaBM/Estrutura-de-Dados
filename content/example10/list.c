#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

List *createList(int c)
{
    List *L = (List *)malloc(sizeof(List));
    if (L == NULL)
    {
        printf("ERROR: null list\n");
        exit(1);
    }
    L->max = 0;
    L->capacity = c;
    L->Info = (Student *)malloc(c * sizeof(Student));
    if (L->Info == NULL)
    {
        printf("ERROR: sem memoria\n");
        free(L);
        return NULL;
    }
    return L;
}

Student createStudent(char *name, char *class, int *id,
                      float *grade1, float *grade2,
                      float *grade3, float *grade4)
{
    Student s;

    float media = (*grade1 + *grade2 + *grade3 + *grade4) / 4.0;

    if (media <= 6.49)
        s.status = FAIL;
    else if (media < 7.0)
        s.status = RETAKE;
    else
        s.status = PASS;

    strcpy(s.name, name);
    strcpy(s.class, class);
    s.id     = *id;
    s.grade1 = *grade1;
    s.grade2 = *grade2;
    s.grade3 = *grade3;
    s.grade4 = *grade4;

    return s;
}