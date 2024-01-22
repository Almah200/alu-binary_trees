#include "binary_trees.h"
#include <stdio.h>

void binary_tree_print(const binary_tree_t *tree) {
    if (tree != NULL) {
        printf("%d\n", tree->value);
        binary_tree_print(tree->left);
        binary_tree_print(tree->right);
    }
}
