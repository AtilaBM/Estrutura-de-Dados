#include "tabela.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR "File null"

Equipe* lerDados(char *nomeArquivo)
{
    FILE *file = fopen(nomeArquivo, "r");

    if (file == NULL)
    {
        printf(ERROR);
        exit(1);
    }

    Equipe *E = malloc(20 * sizeof(Equipe));

    int n = 0;
    char cabecalho[60];

    fscanf(file, "%s", cabecalho);
    // Pos;Estado;Equipe;Pts;J;V;E;D;GP;GC;SG
    while (fscanf(file, "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d", &E[n].Posicao, E[n].Estado, E[n].Time, &E[n].Pontos, &E[n].J, &E[n].V, &E[n].E, &E[n].D, &E[n].GP, &E[n].GC, &E[n].SG) == 11)
    {
        E[n].Aproveitamento = 100 * (float) E[n].Pontos / (float) (3 * E[n].J);
        n++;
    }
    fclose(file);
    return E;
}

int getPosition(Equipe * t,char * time){
    for (int i = 0; i < 20; i++)
    {
        if (strcmp(t[i].Time,time)==0)
        {
            return t[i].Posicao;
        }
    }

    return -1;
    
}