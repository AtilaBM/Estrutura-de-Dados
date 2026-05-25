#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

int main()
{

    Node *raiz = createNode(12);

    // Nivel 2

    raiz->left = createNode(36);
    raiz->right = createNode(39);

    // Nivel 3

    raiz->right->right = createNode(47);

    raiz->left->left = createNode(25);
    raiz->left->right = createNode(28);

    return 0;
}