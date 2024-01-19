#include "binary_trees.h"
/**
 * binary_tree_preorder - a function that goes through a binary
 * tree using pre-order traversal.
 * @tree: pointer
 * @func: pointer to a func
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	int n;

	if (tree == NULL || func == NULL)
		return;
	n = tree->n;
	func(n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
