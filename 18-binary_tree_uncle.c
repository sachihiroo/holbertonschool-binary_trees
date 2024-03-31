#include "binary_trees.h"

/**
 * binary_tree_uncle - finds node uncle (if it has)
 * @node: node to find uncle
 * Return: point to uncle or NULL on bad magic
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (!(node))
		return (NULL);

	if (!(node->parent))
		return (NULL);

	if (!(node->parent->parent))
		return (NULL);

	if (node->parent->parent->right != node->parent)
		uncle = node->parent->parent->right;
	else if (node->parent->parent->left != node->parent)
		uncle = node->parent->parent->left;
	return (uncle);
}
