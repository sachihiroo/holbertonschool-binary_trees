#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes w bbs in tree
 * @tree: root node to count parents w resp to
 * Return: num of parental nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeCount = 0;

	if (!(tree))
		return (nodeCount);

	if (!(tree->right) && !(tree->left))
		return (nodeCount);
	nodeCount = 1 + binary_tree_nodes(tree->right);
	nodeCount += binary_tree_nodes(tree->left);
	return (nodeCount);
}
