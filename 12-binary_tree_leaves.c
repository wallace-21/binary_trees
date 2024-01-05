#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: binary tree
 * Return: number of leaves in the binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left;
	size_t leaves_right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		leaves_left = binary_tree_leaves(tree->left);
		leaves_right = binary_tree_leaves(tree->right);

	return (leaves_left + leaves_right);
	}
}
