#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 * Return: Pointer to the new left child node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        return NULL;  // Cannot insert a left child to a NULL parent
    }

    binary_tree_t *new_left_child = malloc(sizeof(binary_tree_t));

    if (new_left_child == NULL) {
        return NULL;  // Return NULL on failure
    }

    new_left_child->value = value;  // Set the value for the new left child node
    new_left_child->parent = parent;
    new_left_child->left = NULL;
    new_left_child->right = NULL;

    parent->left = new_left_child;  // Set the parent's left child to the new left child node

    return new_left_child;
}
