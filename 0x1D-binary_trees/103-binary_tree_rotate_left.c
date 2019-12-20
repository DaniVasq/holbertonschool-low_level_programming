#include "binary_tree.h"

/**
 * binary_tree_rotate_left -  left-rotation on a binary tree
 * @tree: pointer to binary_tree_t
 * Return: pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new, *tmp;

	if (tree == NULL)
		return (NULL);
	if (tree->right)
	{
		tmp = tree->right->left;
		new = tree->right;
		new->parent = tree->parent;
		new->left = tree;
		tree->parent = new;
		tree->right = tmp;
		if (tmp)
			tmp->parent = tree;
		return (new);
	}
	return (NULL);
}
