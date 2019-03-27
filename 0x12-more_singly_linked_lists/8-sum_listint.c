#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all of the data
 *@head: pointer to head at list
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}