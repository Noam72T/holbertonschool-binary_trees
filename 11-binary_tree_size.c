#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: size of the binary tree, or 0 (fail)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	s++;
	s += binary_tree_size(tree->left);
	s += binary_tree_size(tree->right);
	return (s);
}
