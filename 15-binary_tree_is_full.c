#include "binary_trees.h"

/**
 * binary_tree_is_full - check if all branches (downward) has leaves
 * @tree: root node to check fullness w respect to
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int fullCheckLeft = 0, fullCheckRight = 0, cmp = 0;

	if (!(tree))
		return (0);

	if (!(tree->right) && !(tree->left))
		return (1);
	fullCheckLeft = binary_tree_is_full(tree->left);
	fullCheckRight = binary_tree_is_full(tree->right);
	cmp = fullCheckLeft - fullCheckRight;
	if (cmp)
		return (0);
	return (1);
}
