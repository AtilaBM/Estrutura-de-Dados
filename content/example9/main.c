#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main()
{

    Task T1 = {"Entrega do relatório de BD", "Rafael Souza", CONCLUIDA, 1.00, 4};
    Task T2 = {"Revisão do código do sistema", "Carlos Henrique", CONCLUIDA, 1.00, 5};
    Task T3 = {"Criação de mockups para o app", "Juliana Ribeiro", ANDAMENTO, 0.40, 3};
    Task T4 = {"Levantamento de requisitos", "Rafael Souza", A_FAZER, 0.00, 2};
    Task T5 = {"Treinamento da equipe", "Fernanda Lima", ANDAMENTO, 0.60, 4};
    Task T6 = {"Testes automatizados", "Lucas Martins", A_FAZER, 0.00, 5};
    Task T7 = {"Atualização da documentação técnica", "Mariana Alves", A_FAZER, 0.00, 3};
    Task T8 = {"Integração com API externa", "Pedro Rocha", ANDAMENTO, 0.50, 4};
    Task T9 = {"Apresentação para o cliente", "Bianca Torres", CONCLUIDA, 1.00, 5};
    Task T10 = {"Correção de bugs críticos", "João Victor", ANDAMENTO, 0.30, 5};

    List *Planner = criarLista(15);

    criarTask(Planner, T1);
    criarTask(Planner, T2);
    criarTask(Planner, T3);
    criarTask(Planner, T4);
    criarTask(Planner, T5);
    criarTask(Planner, T6);
    criarTask(Planner, T7);
    criarTask(Planner, T8);
    criarTask(Planner, T9);
    criarTask(Planner, T10);

    printf("Tamanho [%d]\n",Planner->tamanho);

    return 0;
}