#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: number of leaves, or 0 (fail)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		l++;
	l += binary_tree_leaves(tree->left);
	l += binary_tree_leaves(tree->right);
	return (l);
}
