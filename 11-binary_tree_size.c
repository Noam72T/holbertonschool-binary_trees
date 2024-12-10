#include "binary_trees.h"

/**
 * binary_tree_size - Function tree size
 * @tree: Pointer to the root node
 */
size_t binary_tree_size(const binary_tree_t *tree) {
  if (!tree)
    return 0;

  return binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
}