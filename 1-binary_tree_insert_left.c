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
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node || !parent)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
		new_node->left = NULL;
	parent->left = new_node;
	new_node->right = NULL;
	return (new_node);
}
