#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_perfect - Checks if the binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if the tree id perfect, or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_balance(tree) != 0 ||
	(binary_tree_is_perfect(tree->left) == 0 && (tree->left && tree->right)) ||
	(binary_tree_is_perfect(tree->right) == 0 && (tree->left && tree->right)))
		return (0);
	return (1);
}
