#include "lists.h"

/**
 * *reverse_listint - reverses a linked list
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous = NULL;

	while ((*head) != NULL)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		(*head) = current;
	}
	return (previous);
}
