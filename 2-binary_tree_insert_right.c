# include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Writing function inserting node as right child
 * @parent: meaning the node inserted in right child
 * @value: pointing to value stored in the new node
 *
 * Return: returning pointer to created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_ndd = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	nw_ndd = malloc(sizeof(binary_tree_t));
	if (nw_ndd == NULL)
		return (NULL);

	nw_ndd->n = value;
	nw_ndd->parent = parent;
	nw_ndd->left = NULL;
	nw_ndd->right = NULL;

	if (parent->right != NULL)
	{
		nw_ndd->right = parent->right;
		nw_ndd->right->parent = nw_ndd;
	}
	parent->right = nw_ndd;
	return (nw_ndd);
}
