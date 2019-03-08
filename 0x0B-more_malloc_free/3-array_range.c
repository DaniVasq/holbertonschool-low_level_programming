#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *@min: minimum
 *@max: maximum
 * Return: depends. If min > max, return NULL. If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int sum;
	int counter;

	sum = (max - min + 1);
	if (min > max)
		return (NULL);
	ptr = malloc(sum * sizeof(int));
	while (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (counter = 0; counter < sum; counter++)
	{
		ptr[counter] = min;
		min++;
	}
	return (ptr);
}
