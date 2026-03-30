#ifndef LIST_H
#define LIST_H

// CONFIG

#define TAM_TITULO 96
#define TAM_NOME 48

// STATS

#define A_FAZER 0
#define ANDAMENTO 1
#define CONCLUIDA 2

// TASK STRUCT

typedef struct
{
    char titulo[TAM_TITULO];
    char nome[TAM_NOME];
    int status;
    float progresso;
    int avaliacao;

} Task;

// LIST STRUCT

typedef struct
{
    Task *Data;
    int capacidade; // quantidade max de elementos que a lista pode ter
    int tamanho;    // numero max de elementos na lista

} List;

// PROTOTIPOS

List *criarLista(int c);

Task addTask(
    char *titulo,
    char *nome,
    int *status,
    float *progresso,
    int *avaliacao);

void criarTask(List *l, Task t);
void destruirLista(List *l);

#endif