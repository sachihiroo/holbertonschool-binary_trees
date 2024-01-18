#include "binary_trees.h"
/**
 * binary_tree_is_root - is root
 * @node: pointer
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (1);
	if (node->parent == NULL)
		return (0);
}
