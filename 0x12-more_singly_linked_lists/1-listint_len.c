#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 *@h: head pointer to beginning of list.
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
	h = h->next;
	i++;
	}
	return (i);
}
