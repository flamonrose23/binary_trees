#include "binary_trees.h"

/**
 * binary_tree_size - Writing function meaduring size of binary tree
 * @tree: pointing to root node of tree to measure the size
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
