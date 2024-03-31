#include "binary_trees.h"

/**
 * binary_tree_depth - measures how deep in tree
 * @tree: node to measure depth
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depthC = 0;

	if (!(tree))
		return (depthC);

	while (tree->parent)
	{
		tree = tree->parent;
		depthC++;
	}
	return (depthC);
}
