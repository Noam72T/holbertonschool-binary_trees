#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as a left-child of another node
 * @parent: pointer to the parent node
 * @value: value to add to the new node
 *
 * Return: pointer to the new node (success), or NULL (fail)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);
	new->n = value;
	new->parent = parent;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
		new->left = NULL;
	parent->left = new;
	new->right = NULL;
	return (new);
}
