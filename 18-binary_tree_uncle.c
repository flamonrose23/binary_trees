#include "binary_trees.h"

/**
 * binary_tree_uncle - writing a function to find the uncle of a node
 * @node: pointing to node to find the uncle 
 *
 * return: If node is NULL, return NULL
           If node has no uncle, return NULL

 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
{
	if (node == NULL)
		return(NULL);

	if (node != NULL && !node->parent)
		return (NULL);
}
