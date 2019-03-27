#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - frees another list which sets head to NULL
 *@head: pointer at top of list
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *nextnode;

	while (head == NULL)
		return;

	while (*head != NULL)
	{
	nextnode = (*head)->next;
	free(*head);
	*head = nextnode;
	}
}
