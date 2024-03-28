#include "binary_trees.h"

/**
 * binary_tree_leaves - Writing function counting leaves in BT
 * @tree: pointing to count the number of leaves
 *
 * Return: 0 if tree is NULL, or 1 if node is leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaves, r_leaves;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	l_leaves = binary_tree_leaves(tree->left);
	r_leaves = binary_tree_leaves(tree->right);
	return (l_leaves + r_leaves);
}
