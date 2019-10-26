#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 *@h: pointer to head of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numelem;

	for (numelem = 0; h != NULL; numelem++)
	{
		h = h->next;
	}
	return (numelem);
}
