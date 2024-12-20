#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure
 *
 * Return: depth of the node (success), or 0 (fail)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
