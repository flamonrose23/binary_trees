#include "binary_trees.h"

/**
 * binary_tree_inorder - Function of binary tree using in-order traversal
 * @tree: pointing to root of tree traversed
 * @func: pointing to function to call for each node
 *
 * Return: Nothing if tree or func is NULL
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
