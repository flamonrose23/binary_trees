#include "binary_trees.h"

/**
 * binary_tree_depth - Writing function measuring depht of BT's node
 * @tree: pointing to node to measure the depth
 *
 * Return: Nothing if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		number = 1 + binary_tree_depth(tree->parent);
	return (number);
}
