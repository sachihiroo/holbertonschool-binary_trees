#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer
 * Return: 0 or depth
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

		if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
