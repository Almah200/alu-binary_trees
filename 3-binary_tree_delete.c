#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_delete -Deletes a binary tree is exists.
 * @tree: A pointer to the root note of the binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree != NULL)
    {
        if (tree->parent != NULL)
        {
            if (tree->parent->left == tree)
                tree->parent->left = NULL;
            else if (tree->parent->right == tree)
                tree->parent->right = NULL;
        }

        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
    }
}
