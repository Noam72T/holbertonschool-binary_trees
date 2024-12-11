#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert new node as right-child node
 * @parent: Pointer to the parent new_node
 * @value: The value of the new new_node
 * Return: Pointer to the new new_node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
		new_node->right = NULL;
	parent->right = new_node;
	new_node->left = NULL;

	return (new_node);
}
