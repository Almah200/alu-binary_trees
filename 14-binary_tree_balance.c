#include "binary_trees.h"

/**
 * max - returns the maximum of two integers
 * @a: first integer
 * @b: second integer
 * Return: the maximum of a and b
 */
int max(int a, int b) {
    return (a > b ? a : b);
}

/**
 * height - calculates the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of the tree
 */
size_t height(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;

    return (1 + max(height(tree->left), height(tree->right)));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;

    int size_left = height(tree->left);
    int size_right = height(tree->right);

    return (size_left - size_right);
}

