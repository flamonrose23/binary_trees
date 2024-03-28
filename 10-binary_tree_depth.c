#include "binary_trees.h"
<<<<<<< HEAD

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
=======
#include <stdlib.h>

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: measure the depth of binary tree
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree);

{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
>>>>>>> 431394735dfeed22ef04698ae0bb65b034035d1f
}
