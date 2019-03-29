#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - returns value of a bit at a given index
 *@n: integer
 *@index: the index
 * Return: value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return (n >> index & 1);
	return (-1);
}
