#include "binary_trees.h"

/**
 * binary_tree_depth - Function tree depth
 * @tree: Pointer to the root node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;
    while (tree && tree->parent)
    {
        depth++;
        tree = tree->parent;
    }

    return depth;
}