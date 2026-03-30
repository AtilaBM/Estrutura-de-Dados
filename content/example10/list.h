#ifndef LIST_H
#define LIST_H

#define MAX_CLASS 54
#define MAX_NAME 42
#define FAIL 0
#define PASS 1
#define RETAKE 2

typedef struct
{
    char name[MAX_NAME];
    char class[MAX_CLASS];
    int id;
    float grade1;
    float grade2;
    float grade3;
    float grade4;
    int status;
} Student;

typedef struct
{
    Student *Info;
    int capacity;
    int max;
} List;

List *createList(int c);
Student createStudent(char *name, char *class, int *id,
                      float *grade1, float *grade2,
                      float *grade3, float *grade4);

#endif