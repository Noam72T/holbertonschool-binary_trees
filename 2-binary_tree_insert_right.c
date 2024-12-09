#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right child of another node
 * @parent: pointer to the parent node of the new node
 * @value: value to add to the new node
 *
 * Return: pointer to the new node (success), or NULL (fail)
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);
	new->n = value;
	new->parent = parent;
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;
	parent->right = new;
	new->left = NULL;
	return (new);
}
