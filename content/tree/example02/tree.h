#ifndef TREE_H
#define TREE_H

typedef struct Node
{
    int key;
    struct Node *left;
    struct Node *right;

} Node;

Node *createNode(int key);

#endif