#include "binary_trees.h"

/**
 * binary_tree_sibling - writing a function to find the sibling of a node
 * @node: pointing to node to find the sibling
 *
 * return: a pointer to the node to find the sibling
           If node is NULL or the parent is NULL, return NULL
	   If node has no sibling, return NULL
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
{
	if ((node == NULL) || (node->parent))
	return (NULL);
	{
		if (node == node->parent->left)
		{
		return (node->parent->right);
		}
		return (node->parent->left);
	}
}
