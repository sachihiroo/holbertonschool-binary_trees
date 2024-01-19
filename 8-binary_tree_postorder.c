#include "binary_trees.h"
/**
 * binary_tree_postorder - a function that goes through a binary
 * tree using post-order traversal.
 * @tree: pointer
 * @func: pointer to a func
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	int n;

	if (tree == NULL || func == NULL)
		return;
	n = tree->n;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(n);
}
