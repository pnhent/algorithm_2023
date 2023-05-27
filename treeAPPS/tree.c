#include "tree.h"

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* makeTree() {
    Node* root = createNode(100);
    root->left = createNode(200);
    root->right = createNode(300);
    root->right->left = createNode(400);
    root->right->right = createNode(500);
    return root;
}

void printPreOrder(Node* node) {
    if(node == NULL) return;
    printf("%d ", node->value);
    printPreOrder(node->left);
    printPreOrder(node->right);
}

void printInOrder(Node* node) {
    if(node == NULL) return;
    printInOrder(node->left);
    printf("%d ", node->value);
    printInOrder(node->right);
}

void printPostOrder(Node* node) {
    if(node == NULL) return;
    printPostOrder(node->left);
    printPostOrder(node->right);
    printf("%d ", node->value);
}

Node* findNode(Node* node, int value) {
    if(node == NULL) return NULL;
    if(node->value == value) return node;

    Node* leftSearch = findNode(node->left, value);
    if(leftSearch != NULL) return leftSearch;

    return findNode(node->right, value);
}

Node* insertLeftNode(Node* where, Node* new_node) {
    if(where == NULL || new_node == NULL) return NULL;
    new_node->left = where->left;
    where->left = new_node;
    return where;
}

Node* insertRightNode(Node* where, Node* new_node) {
    if(where == NULL || new_node == NULL) return NULL;
    new_node->right = where->right;
    where->right = new_node;
    return where;
}