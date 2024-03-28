#include "binary_trees.h"

/**
 * binary_tree_height - Writing function measuring height of binary tree
 * @tree: pointing to root node of tree measured her height
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	else
		return (right);
}
