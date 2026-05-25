#ifndef TREE_H
#define TREE_H

typedef struct Node
{
    int key;
    struct Node * filho[6]; 
     
}Node;

Node * createNode(int key);



#endif