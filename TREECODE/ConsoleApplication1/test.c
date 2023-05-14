#include "tree.h"

// 트리를 테스트하는 함수
void testTree() {
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
}