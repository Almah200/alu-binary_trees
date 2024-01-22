#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;
    int ret;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->right = binary_tree_node(root->right, 256);

    ret = binary_tree_is_leaf(root);
    printf("Is %d a leaf: %d\n", root->value, ret);
    ret = binary_tree_is_leaf(root->right);
    printf("Is %d a leaf: %d\n", root->right->value, ret);
    ret = binary_tree_is_leaf(root->right->right);
    printf("Is %d a leaf: %d\n", root->right->right->value, ret);

    binary_tree_print(root);
    binary_tree_delete(root);
    return (0);
}
