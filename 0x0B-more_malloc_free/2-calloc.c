#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array using malloc
 *@nmemb: address of memory
 *@size: size of memory
 * Return: depends.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (0);
	array = malloc(nmemb * size);
	while (array == 0)
	{
		return (0);
	}
	c = 0;
	while (c < nmemb * size)
	{
		array[c] = 0;
	}
	c++;

	return (array);
}
