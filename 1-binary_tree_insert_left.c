#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Writing function inserting node as left child
 * @parent: meaning the node inserted in left child
 * @value: pointing to value stored in the new node
 *
 * Return: returning pointer to created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_ndd = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	nw_ndd = malloc(sizeof(binary_tree_t));
	if (nw_ndd == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nw_ndd->left = parent->left;
		nw_ndd->left->parent = nw_ndd;
	}
	parent->left = nw_ndd;
	return (nw_ndd);
}
