#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - deletes head node and returns head node's data
 *@head: pointer at top of list
 * Return: head node's data or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{

	listint_t *node;
	int data = 0;

	if (*head != NULL)
	{
		node = *head;
		data = node->n;
		*head = (*head)->next;
		free(node);
		return (data);
	}
	else
		return (0);
}
