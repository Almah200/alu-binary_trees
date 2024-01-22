#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - NUmber of nodes with at least 1 child
 * @tree: node
 * Return: Number of nodes with child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		num = 1;
		if (tree->left != NULL)
		{
			num += binary_tree_nodes(tree->left);
		}
		if (tree->right != NULL)
		{
			num += binary_tree_nodes(tree->right);
		}
	}
	return (num);
}
