#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array using malloc
 *@nmemb: address of memory
 *@size: size of memory
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	while (array == 0)
	{
		return (NULL);
	}
	for (c = 0; c < nmemb * size; c++)
	{
		array[c] = 0;
	}

	return (array);
}
