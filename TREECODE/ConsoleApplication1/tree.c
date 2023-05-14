#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

// 노드를 생성하여 반환하는 함수
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // 새로운 노드를 동적 메모리 할당으로 생성
    newNode->value = value;                      // 새로운 노드의 값 설정
    newNode->left = NULL;                        // 왼쪽 자식 노드 포인터 초기화
    newNode->right = NULL;                       // 오른쪽 자식 노드 포인터 초기화
    return newNode;                              // 생성한 노드 포인터 반환
}

// 트리를 생성하여 반환하는 함수
Node* makeTree() {
    Node* root = createNode(100);         // 루트 노드 생성
    root->left = createNode(200);         // 루트의 왼쪽 자식 노드 생성
    root->right = createNode(300);        // 루트의 오른쪽 자식 노드 생성
    root->right->left = createNode(400);  // 루트의 오른쪽 자식의 왼쪽 자식 노드 생성
    root->right->right = createNode(500); // 루트의 오른쪽 자식의 오른쪽 자식 노드 생성
    return root;                          // 생성한 트리의 루트 노드 포인터 반환
}

// 전위 순회로 노드 값을 출력하는 함수
void printPreOrder(Node* node) {
    if (node == NULL) {
        return;                           // 노드가 NULL인 경우 재귀 탈출
    }
    printf("%d ", node->value);           // 노드의 값을 출력
    printPreOrder(node->left);            // 왼쪽 서브트리를 전위 순회로 출력
    printPreOrder(node->right);           // 오른쪽 서브트리를 전위 순회로 출력
}

// 중위 순회로 노드 값을 출력하는 함수
void printInOrder(Node* node) {
    if (node == NULL) {
        return;                           // 노드가 NULL인 경우 재귀 탈출
    }
    printInOrder(node->left);             // 왼쪽 서브트리를 중위 순회로 출력
    printf("%d ", node->value);           // 노드의 값을 출력
    printInOrder(node->right);            // 오른쪽 서브트리를 중위 순회로 출력
}
void printPostOrder(Node* node) {
    if (node == NULL) {
        return;                           // 노드가 NULL인 경우 재귀 탈출
    }
    printPostOrder(node->left);           // 왼쪽 서브트리를 후위 순회로 출력
    printPostOrder(node->right);          // 오른쪽 서브트리를 후위 순회로 출력
    printf("%d ", node->value);           // 노드의 값을 출력
}

Node* findNode(Node* root, int value) {
    if (root == NULL) {
        return NULL;                      // 루트가 NULL인 경우 탐색 실패로 NULL 반환
    }

    if (root->value == value) {
        return root;                      // 현재 노드의 값이 찾는 값과 일치하면 해당 노드의 포인터 반환
    }

    Node* foundNode = findNode(root->left, value);    // 왼쪽 서브트리에서 탐색
    if (foundNode == NULL) {
        foundNode = findNode(root->right, value);     // 오른쪽 서브트리에서 탐색
    }

    return foundNode;                    // 찾는 값이 존재하지 않으면 NULL 반환
}

Node* insertLeftNode(Node* where, Node* new_node) {
    if (where == NULL) {
        return NULL;                      // 삽입할 위치가 NULL인 경우 NULL 반환
    }

    new_node->left = where->left;         // 새로운 노드의 왼쪽 자식으로 where 노드의 왼쪽 자식 설정
    where->left = new_node;               // where 노드의 왼쪽 자식으로 새로운 노드 연결

    return where;                         // where 노드의 포인터 반환
}

// 오른쪽에 노드를 삽입하고 where 노드의 포인터를 반환하는 함수
Node* insertRightNode(Node* where, Node* new_node) {
    if (where == NULL) {
        return NULL;                      // 삽입할 위치가 NULL인 경우 NULL 반환
    }

    new_node->right = where->right;       // 새로운 노드의 오른쪽 자식으로 where 노드의 오른쪽 자식 설정
    where->right = new_node;              // where 노드의 오른쪽 자식으로 새로운 노드 연결

    return where;                         // where 노드의 포인터 반환
}