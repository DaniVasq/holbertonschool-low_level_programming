#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: if no uncle, return null, if node is null, return null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node)
	{
		if (node->parent)
		{
			node = node->parent;
			if (node->parent)
			{
				if (node->parent->right && node->parent->left)
					if (node->parent->right->n == node->n)
						return (node->parent->left);
					else
						return (node->parent->right);
			}
		}
	}
	return (NULL);
}
