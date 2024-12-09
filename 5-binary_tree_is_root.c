#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if the node is a root
 * @node: Pointer to the node to check
 * Return: 1 if the node is a root, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);

	return (0);
}
