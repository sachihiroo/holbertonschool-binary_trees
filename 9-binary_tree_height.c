#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer
 * Return: 0 or depth
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	{
		l = binary_tree_height(tree->left);
		r = binary_tree_height(tree->right);

		if (l > r)
			l = binary_tree_height(tree->left) + 1;
		return (l);
		if (r < l)
			r = binary_tree_height(tree->right) + 1;
		return (r);
	}
}
