#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - Function tree nodes
 * @tree: Pointer to the root node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		n++;
	n += binary_tree_nodes(tree->left);
	n += binary_tree_nodes(tree->right);
	return (n);
}