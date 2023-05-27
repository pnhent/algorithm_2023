#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value);
Node* makeTree();
void printPreOrder(Node * root);
void printInOrder(Node * root);
void printPostOrder(Node * root);
Node* findNode(Node* root, int value);
Node* insertLeftNode(Node * where, Node * new_node);
Node* insertRightNode(Node *where, Node * new_node);