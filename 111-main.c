#include "binary_trees.h"

int main(void)
{
    bst_t *root;
    bst_t *node;

    root = NULL;

    node = bst_insert(&root, 5);
    printf("Inserted: %d\n", node->value);

    node = bst_insert(&root, 3);
    printf("Inserted: %d\n", node->value);

    node = bst_insert(&root, 8);
    printf("Inserted: %d\n", node->value);

    node = bst_insert(&root, 2);
    printf("Inserted: %d\n", node->value);

    node = bst_insert(&root, 4);
    printf("Inserted: %d\n", node->value);

    return 0;
}

