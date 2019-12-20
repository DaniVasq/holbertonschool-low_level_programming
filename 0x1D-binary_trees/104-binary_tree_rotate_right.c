#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  performs a rigth-rotation on a binary tree
 * @tree: pointer to binare_tree_t
 * Return: pointer to the new root node of the tree once rotated;
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new, *tmp;

	if (tree == NULL)
		return (NULL);
	if (tree->left)
	{
		tmp = tree->left->right;
		new = tree->left;
		new->parent = tree->parent;
		new->right = tree;
		tree->parent = new;
		tree->left = tmp;
		if (tmp)
			tmp->parent = tree;
		return (new);
	}
	return (NULL);
}
