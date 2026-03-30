#ifndef TABELA_h
#define TABELA_h

#include <stdlib.h>
#include <stdio.h>

typedef struct {
int Posicao;
char Estado[32];
char Time[32];
int Pontos;
int J; // N° de jogos
int V; // N° de vitórias
int E; // N° de empates
int D; // N° de derrotas
int GP; // Gols marcados
int GC; // Gols sofridos
int SG; // Saldo de gols
float Aproveitamento; // % de pontos conquistados em relação ao total de pontos disputados
} Equipe;

//prototipos

Equipe * lerDados(char * nomeArquivo);
int getPosition(Equipe * t,char * time);

#endif