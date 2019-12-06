#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left-child of another node
 *@parent: pointer to the node to insert left-child in
 *@value: value stored in the new node
 * Return: returns pointer to the newly create node or NULL if failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = NULL;
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
