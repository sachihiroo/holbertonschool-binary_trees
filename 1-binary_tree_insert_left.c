#include "binary_trees.h"
/**
 * binary_tree_insert_left - Create left child
 * @parent: pointer
 * @value: int
 * Return: node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;
	return (node);
}
