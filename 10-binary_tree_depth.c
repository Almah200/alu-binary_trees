#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - depth of the tree
 * @tree: node
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t num = 0;
	binary_tree_t *temp;

	if (tree == NULL)
		return (0);
	temp = tree->parent;
	if (temp != NULL)
	{
		num = num + binary_tree_depth(temp);
		num++;
	}
	return (num);
}
