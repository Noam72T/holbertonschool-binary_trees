#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Function insert right
 * @parent: Pointer of the parent new_node
 * @value: The value of the new new_node
 * Return: Pointer of the new new_node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value) {

  binary_tree_t *new_node;

      if (parent == NULL) return (NULL);

  new_node = malloc(sizeof(binary_tree_t));
  if (new_node == NULL)
    return (NULL);

  new_node->n = value;
  new_node->left = NULL;
  new_node->right = NULL;

  if (parent->right != NULL) {

    new_node->right = parent->right;
  }

  parent->right = new_node;

  return (new_node);
}