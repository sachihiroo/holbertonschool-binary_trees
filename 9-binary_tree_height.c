#include "binary_trees.h"
/**
 * binary_tree_height -
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
