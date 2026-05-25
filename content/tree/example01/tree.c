#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

Node *createNode(int key)
{
    Node *n = (Node *)malloc(sizeof(Node));

    if (n == NULL)
    {
        printf("ERROR!!!!!!");
        exit(1);
    }

    n->key = key;

    for (int i = 0; i < 6; i++)
    {
        n->filho[i];
    }

    return n;
}