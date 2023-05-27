#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Node* root;

static Node * createNode(int val)
{
    //sizeof(Node) malloc
    Node * pNode = (Node*)malloc(sizeof(Node));

    //초기화 : p->value = val, left, right (NULL)
    pNode->Value = val;
    pNode->Left = NULL;
    pNode->Right = NULL;

    //만든 Node 객체(변수) 포인터 반환
    return pNode;
}

Node * connectChild(Node* parent, Node* left, Node* right)
{
    if (parent == NULL) return NULL;
    parent->Left = left;
    parent->Right = right;

    return parent;
}

Node* makeTree()
{
    Node* pRoot = NULL;
    Node* tLeft = NULL;
    Node* tRight = NULL;

    pRoot = createNode(100);
    tLeft = createNode(200);
    tRight = createNode(300);

    connectChild(pRoot, tLeft, tRight);

    connectChild(tRight, createNode(400), createNode(500));

    return pRoot;
}

void printTree(Node * root)
{
    if (root == NULL) return;

    printf("Node: %d, ", root->Value);
    printTree(root->Left);
    printTree(root->Right);
}

