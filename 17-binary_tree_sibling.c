#include "binary_trees.h"

/**
 * binary_tree_sibling - finds node sibling (if it has)
 * @node: node to find sibling of
 * Return: point to sibling or NULL on bad magic
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib = NULL;

	if (!(node))
		return (NULL);

	if (!(node->parent))
		return (NULL);

	if (node->parent->right != node)
		sib = node->parent->right;
	else if (node->parent->left != node)
		sib = node->parent->left;
	return (sib);
}
