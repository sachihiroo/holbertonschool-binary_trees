#include "binary_trees.h"

/**
 * binary_tree_height_2 - measures height / levels of tree
 * @tree: root of tree to measure
 * Return: height of tree
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t bRight = 0;
	size_t bLeft = 0;

	if (!tree)
		return (0);

	bRight = binary_tree_height_2(tree->right);
	bLeft = binary_tree_height_2(tree->left);
	if (bRight > bLeft)
		return (bRight + 1);
	else
		return (bLeft + 1);
}

/**
 * binary_tree_balance - comps balance (left v right bbs)
 * @tree: root node to count balance w resp to
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftTot = 0, rightTot = 0, cmp = 0;

	if (!(tree))
		return (0);

	rightTot = binary_tree_height_2(tree->right);
	leftTot = binary_tree_height_2(tree->left);
	cmp = leftTot - rightTot;
	return (cmp);
}
