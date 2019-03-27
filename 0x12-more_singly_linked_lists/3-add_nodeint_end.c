#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - adds new node at end of list.
 *@head: head pointer at top of list
 *@n: const integer
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *endnode;

	endnode = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
	if (endnode->next != NULL)
		endnode = endnode->next;
	endnode->next = newnode;
	}
	return (newnode);
}
