#include "lists.h"
/**
 * print_dlistint - that prints all the elements of list.
 *@h: pointer to head of doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numnodes;

	for (numnodes = 0; h != NULL; numnodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (numnodes);
}
