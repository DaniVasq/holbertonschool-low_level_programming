#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
