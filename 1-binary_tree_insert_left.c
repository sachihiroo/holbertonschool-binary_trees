#include "binary_trees.h"
/**
 * binary_tree_insert_left - Create left child
 * @parent: pointer
 * @value: int
 * Return:
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	node = binary_tree_insert_left(parent->left, value);
	if (node == NULL)
		return NULL;

	if (parent->left == NULL)
		parent->left = node;

	node->n = value;
	node->right = parent;
	return (node);
}
