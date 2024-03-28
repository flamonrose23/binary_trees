#include "binary_trees.h"

/**
 * binary_tree_sibling - writing function to find the sibling of a node
 * @node: pointing to node to find the sibling
 *
 * Return: pointer to sibling mode or NULL on failure
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
