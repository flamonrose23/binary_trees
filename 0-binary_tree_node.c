#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Writing function creating binary tree node
 * @parent: meaaning parent of the node created
 * @value: pointing to value of new node
 *
 * Return: pointer to new node and NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_ndd;

	nw_ndd = malloc(sizeof(binary_tree_t));
	if (nw_ndd == NULL)
		return (NULL);

	nw_ndd->parent = parent;
	nw_ndd->n = value;
	nw_ndd->left = nw_ndd->right = NULL;
	return (nw_ndd);
}
