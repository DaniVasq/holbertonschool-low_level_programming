#include "holberton.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 *@index: index starting from 0 of the bit you want to set
 *@n: pointer
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= 64)
		return (-1);

			*n &= ~(1 << index);
			return (1);
}
