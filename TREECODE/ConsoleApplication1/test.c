#include "tree.h"

// Ʈ���� �׽�Ʈ�ϴ� �Լ�
void testTree() {
    Node* root = makeTree(); // Ʈ�� ����

    printf("Pre-order: ");
    printPreOrder(root);    // ���� ��ȸ�� ��� ���� ���
    printf("\n");

    printf("In-order: ");
    printInOrder(root);     // ���� ��ȸ�� ��� ���� ���
    printf("\n");

    printf("Post-order: ");
    printPostOrder(root);   // ���� ��ȸ�� ��� ���� ���
    printf("\n");
}