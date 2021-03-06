#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * *add_node_end - adds new node at end of list_t list.
 *@head: head pointer to list
 *@str: pointer to string
 * Return: address of new element of NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *endnode = *head;
	unsigned int i = 0;
	unsigned int len;

	while (str[i])
	i++;
	len = i;
	newnode = malloc(sizeof(list_t));
	while (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	while (*head == NULL)
	{
	*head = newnode;
	return (newnode);
	}
	while (endnode->next)
	{
		endnode = endnode->next;
	}
	endnode->next = newnode;
	return (newnode);
}
