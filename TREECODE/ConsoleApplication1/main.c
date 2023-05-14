#include <stdio.h>
#include "tree.h"

int main() {
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

    // Test findNode
    int findValue = 300;
    Node* foundNode = findNode(root, findValue);  // ���� 300�� ��� Ž��
    if (foundNode != NULL) {
        printf("Found node with value %d\n", foundNode->value);  // ��带 ã���� �� �޽��� ���
    }
    else {
        printf("No node found with value %d\n", findValue);      // ��带 ã�� ������ �� �޽��� ���
    }

    // Test insertLeftNode and insertRightNode
    Node* newNodeLeft = createNode(600);    // ���ο� ���� ��� ����
    Node* newNodeRight = createNode(700);   // ���ο� ������ ��� ����

    insertLeftNode(root, newNodeLeft);      // ���ʿ� ��� ����
    insertRightNode(root, newNodeRight);    // �����ʿ� ��� ����

    printf("Pre-order after insertion: ");
    printPreOrder(root);    // ���� �� ���� ��ȸ�� ��� ���� ���
    printf("\n");

    return 0;
}