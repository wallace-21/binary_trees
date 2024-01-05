#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes 1 or more
 * @tree: pointer to root node of the tree to count no of nodes.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += (tree->left || tree->right) ? 1 : 0;

		size += binary_tree_nodes(tree->left);
		size += binary_tree_nodes(tree->right);
	}

	return (size);
}
