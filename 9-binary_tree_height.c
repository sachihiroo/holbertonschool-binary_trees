#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer
 * Return: 0 or depth
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		l = binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		r = binary_tree_height(tree->right) + 1;
	}
	{
		if (l > r)
			return (l);
		else
			return (r);
	}
}
