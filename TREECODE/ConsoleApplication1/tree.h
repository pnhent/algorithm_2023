#ifndef TREE_H
#define TREE_H

typedef struct Node {
    int value;             // 노드의 값
    struct Node* left;     // 왼쪽 자식 노드의 포인터
    struct Node* right;    // 오른쪽 자식 노드의 포인터
} Node;

Node* createNode(int value); // 노드를 생성하여 반환하는 함수
Node* makeTree();            // 트리를 생성하여 반환하는 함수
void printPreOrder(Node* node);  // 전위 순회로 노드 값을 출력하는 함수
void printInOrder(Node* node);   // 중위 순회로 노드 값을 출력하는 함수
void printPostOrder(Node* node); // 후위 순회로 노드 값을 출력하는 함수
Node* findNode(Node* root, int value);             // 특정 값을 찾아 해당 노드의 포인터를 반환하는 함수
Node* insertLeftNode(Node* where, Node* new_node); // 왼쪽에 노드를 삽입하고 where 노드의 포인터를 반환하는 함수
Node* insertRightNode(Node* where, Node* new_node);// 오른쪽에 노드를 삽입하고 where 노드의 포인터를 반환하는 함수

#endif
