#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - height of a binary tree.
 * @tree: pointer to root node
 *
 * Return: if NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	return (lheight > rheight ? lheight + 1 : rheight + 1);
}
