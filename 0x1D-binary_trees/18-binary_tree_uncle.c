#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: if no uncle, return null, if node is null, return null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if ((node->parent->parent->right != NULL &&
	     node->parent->parent->left != NULL))
	{
		if (node->parent->parent->right->n != node->parent->n)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
