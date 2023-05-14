#ifndef TREE_H
#define TREE_H

typedef struct Node {
    int value;             // ����� ��
    struct Node* left;     // ���� �ڽ� ����� ������
    struct Node* right;    // ������ �ڽ� ����� ������
} Node;

Node* createNode(int value); // ��带 �����Ͽ� ��ȯ�ϴ� �Լ�
Node* makeTree();            // Ʈ���� �����Ͽ� ��ȯ�ϴ� �Լ�
void printPreOrder(Node* node);  // ���� ��ȸ�� ��� ���� ����ϴ� �Լ�
void printInOrder(Node* node);   // ���� ��ȸ�� ��� ���� ����ϴ� �Լ�
void printPostOrder(Node* node); // ���� ��ȸ�� ��� ���� ����ϴ� �Լ�
Node* findNode(Node* root, int value);             // Ư�� ���� ã�� �ش� ����� �����͸� ��ȯ�ϴ� �Լ�
Node* insertLeftNode(Node* where, Node* new_node); // ���ʿ� ��带 �����ϰ� where ����� �����͸� ��ȯ�ϴ� �Լ�
Node* insertRightNode(Node* where, Node* new_node);// �����ʿ� ��带 �����ϰ� where ����� �����͸� ��ȯ�ϴ� �Լ�

#endif
