#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 *@b: unsigned integer or whole number
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
