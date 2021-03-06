#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - returns nth node of linked list
 *@head: pointer pointing to head of list
 *@index: index of the node
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *point;
	unsigned int i = 0;

	point = head;

	while (point != NULL)
	{
		if (i == index)
		return (point);
		point = point->next;
		i++;
	}
	return (NULL);
}
