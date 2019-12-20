#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node
* @tree: pointer to node to measure depth
* Return: returns 0 when tree is null
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->parent)
			return (1 + binary_tree_depth(tree->parent));
		else
			return (0);
	}
}
