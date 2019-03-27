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
	listint_t *next;

	while (head == NULL)
		;

	while (*head != NULL)
		next = (*head)->next;
	free(*head);
	*head = next;
}
