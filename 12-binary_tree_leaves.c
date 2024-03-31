#include "binary_trees.h"

/**
 * binary_tree_leaves - counts terminal nodes in tree
 * @tree: root node to count leaves w resp to
 * Return: num of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nodeCount = 0;

	if (!(tree))
		return (nodeCount);

	if (!(tree->right) && !(tree->left))
		return (1);
	nodeCount += binary_tree_leaves(tree->right);
	nodeCount += binary_tree_leaves(tree->left);
	return (nodeCount);
}
