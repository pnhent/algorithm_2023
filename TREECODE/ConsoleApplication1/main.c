#include <stdio.h>
#include "tree.h"

int main() {
    Node* root = makeTree(); // 트리 생성

    printf("Pre-order: ");
    printPreOrder(root);    // 전위 순회로 노드 값을 출력
    printf("\n");

    printf("In-order: ");
    printInOrder(root);     // 중위 순회로 노드 값을 출력
    printf("\n");

    printf("Post-order: ");
    printPostOrder(root);   // 후위 순회로 노드 값을 출력
    printf("\n");

    // Test findNode
    int findValue = 300;
    Node* foundNode = findNode(root, findValue);  // 값이 300인 노드 탐색
    if (foundNode != NULL) {
        printf("Found node with value %d\n", foundNode->value);  // 노드를 찾았을 때 메시지 출력
    }
    else {
        printf("No node found with value %d\n", findValue);      // 노드를 찾지 못했을 때 메시지 출력
    }

    // Test insertLeftNode and insertRightNode
    Node* newNodeLeft = createNode(600);    // 새로운 왼쪽 노드 생성
    Node* newNodeRight = createNode(700);   // 새로운 오른쪽 노드 생성

    insertLeftNode(root, newNodeLeft);      // 왼쪽에 노드 삽입
    insertRightNode(root, newNodeRight);    // 오른쪽에 노드 삽입

    printf("Pre-order after insertion: ");
    printPreOrder(root);    // 삽입 후 전위 순회로 노드 값을 출력
    printf("\n");

    return 0;
}