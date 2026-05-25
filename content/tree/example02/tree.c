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
    n->left = NULL;
    n->right = NULL;

    return n;
}