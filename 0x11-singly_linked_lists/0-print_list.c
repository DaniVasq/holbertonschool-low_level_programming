#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 * Return: .
 */
size_t print_list(const list_t *h)
{
	size_t numofelements = 0;

	while (h != NULL)
	{
		h = h->next;
		numofelements++;
	}
	return (numofelements);
}
