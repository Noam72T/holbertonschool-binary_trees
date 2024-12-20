#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: number of nodes (success), or 0 (fail)
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
