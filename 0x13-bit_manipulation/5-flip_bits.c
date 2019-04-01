#include "holberton.h"

/**
 * flip_bits - returns the number of bits to flip from one num to another.
 *@n: first number
 *@m: second number
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int opposite;

	opposite = n ^ m;
	i = 0;
	while (opposite != 0)
	{
		i = opposite + (opposite & 1);
		opposite = opposite >> 1;
	}
	return (i);
}
