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

	if (node == NULL)
		return NULL;
	node->parent = parent;

	node->left = NULL;
	node->right = NULL;
	node->n = value;

	parent->left = binary_tree_insert_left(parent->left, value);
	return (node);
}
