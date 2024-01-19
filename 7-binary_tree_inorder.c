#include "binary_trees.h"
/**
 * binary_tree_inorder - a function that goes through a binary
 * tree using in-order traversal.
 * @tree: pointer
 * @func: pointer to a func
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	int n;

	if (tree == NULL || func == NULL)
		return;
	n = tree->n;
	binary_tree_inorder(tree->left, func);
	func(n);
	binary_tree_inorder(tree->right, func);
}
