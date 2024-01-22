#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
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

    ret = binary_tree_is_root(root);
    printf("Is %d a root: %d\n", root->value, ret);
    ret = binary_tree_is_root(root->right);
    printf("Is %d a root: %d\n", root->right->value, ret);
    ret = binary_tree_is_root(root->right->right);
    printf("Is %d a root: %d\n", root->right->right->value, ret);

    binary_tree_print(root);
    binary_tree_delete(root);
    return (0);
}
