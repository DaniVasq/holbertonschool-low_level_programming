#include "binary_trees.h"

/**
 * binary_tree_height - height of a binary tree.
 *@tree: pointer to the root node
 * Return: if tree is NULL, your function must return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 1;
		int right = 1;

		if (tree->right)
			right += binary_tree_height(tree->right);
		if (tree->left)
			left += binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance of tree
 *@tree: pointer to the root node of tree
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
