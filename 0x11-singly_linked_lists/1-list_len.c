#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len  - returns the number of elements in linked list.
 *@h: pointer in the node
 * Return: counter or i in this case.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
