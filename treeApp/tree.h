#pragma once

typedef struct _Node
{
    Node* Left;
    Node* Right;
    int Value;
} Node;

extern Node* makeTree();
extern void printTree(Node * root);