#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint  - converts a binary number to an unsigned int
 *@b: string
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int save = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		save = save << 1;
		save |= b[i] - '0';
		i++;
	}
	return (save);
}
