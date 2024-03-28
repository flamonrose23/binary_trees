#include "binary_trees.h"

/**
 * binary_tree_nodes - counting nodes  with at least 1 child in BT
 * @tree: pointing to tree to count the number of nodes
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		number += 1;
	number += binary_tree_nodes(tree->left);
	number += binary_tree_nodes(tree->right);
	return (number);
}
