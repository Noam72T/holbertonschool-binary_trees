#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using postorder traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to the function to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
