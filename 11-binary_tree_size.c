#include "binary_trees.h"

/**
 * binary_tree_size - counts nodes in tree
 * @tree: root node to measure size w resp to
 * Return: num of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t nodeCount = 0;

	if (!(tree))
		return (nodeCount);

	nodeCount = 1 + binary_tree_size(tree->right);
	nodeCount += binary_tree_size(tree->left);
	return (nodeCount);
}
