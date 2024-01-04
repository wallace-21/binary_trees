#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - must return a pointer to the created node
 * @parent: parent node
 * @value: value to store in the node
 *
 * Return:  pointer to the created node
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *copy;

	if (parent == NULL)
		return (NULL);

	copy = binary_tree_node(parent, value);
	if (copy == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		copy->left = parent->left;
		parent->left->parent = copy;
	}
	parent->left = copy;

	return (copy);
}
