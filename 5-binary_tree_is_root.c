#include "binary_trees.h"

/**
 * binary_tree_is_root - Writing function checking if given node is root
 * @node: pointing to node to check in binary tree
 *
 * Return: 1 if node is a root, otherwise 0 if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
