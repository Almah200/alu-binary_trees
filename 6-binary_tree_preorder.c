#include <stdio.h>
#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)) {
	if (tree == NULL || func == NULL)
		return;
	if ( tree != NULL || func != NULL)
	{
		func(tree->value);
		if (tree->left != NULL)
			binary_tree_preorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_preorder(tree->right,func);
	}
}
