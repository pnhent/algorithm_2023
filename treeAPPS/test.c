#include "tree.h"
#include <assert.h>

void test() {
    Node* root = makeTree();
    assert(root->value == 100);
    assert(root->left->value == 200);
    assert(root->right->value == 300);
    assert(root->right->left->value == 400);
    assert(root->right->right->value == 500);

    Node* found = findNode(root, 300);
    assert(found != NULL);
    assert(found->value == 300);

    Node* new_node = createNode(600);
    Node* where = insertLeftNode(root, new_node);
    assert(where->left->value == 600);

    Node* another_new_node = createNode(700);
    where = insertRightNode(root, another_new_node);
    assert(where->right->value == 700);

    printf("All tests passed.\n");
}