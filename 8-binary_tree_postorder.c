#include "binary_trees.h"

/**
 * binary_tree_postorder - Function of binary tree using post-order traversal
 * @tree: pointing to rrot node of tree traversed
 * @func: pointing to function to call for each node
 *
 * Return: Nothing if tree or func is NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
