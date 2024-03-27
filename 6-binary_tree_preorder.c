#include "binary_trees.h"

/**
 * binary_tree_preorder - function of binary tree using pre-order traversal
 * @tree: pointing to root of tree traversed
 * @func: pointing to function to call for each node
 * Return: Nothing if tree or func is NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
