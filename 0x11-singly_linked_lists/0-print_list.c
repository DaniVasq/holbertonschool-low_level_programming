#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 *@h: head or starting pointer.
 * Return: number of elements (i).
 */
size_t print_list(const list_t *h)
{
	size_t i;

	while (h != NULL)
	{
		i++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
