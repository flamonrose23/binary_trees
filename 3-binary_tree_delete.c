#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Writing function deleting entire binary tree
 * @tree: pointing to the binary tree
 *
 * Return: Nothing if tree is NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
