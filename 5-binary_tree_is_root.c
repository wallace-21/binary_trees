#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root or not
 * @node: pointer to node to be checked
 * Return: 1 if node is root, 0 otherwise
 * 0 if null
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return 1;
}
