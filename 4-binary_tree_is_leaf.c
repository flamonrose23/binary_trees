#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Writing function checking if node is leaf
 * @node: pointing to node to check in binary tree
 *
 * Return: 0 if node is NULL and 1 if node is leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->right && !node->left)
		return (1);
	return (0);
}
