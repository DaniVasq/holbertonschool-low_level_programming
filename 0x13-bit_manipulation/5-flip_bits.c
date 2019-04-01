#include "holberton.h"

/**
 * flip_bits - returns the number of bits to flip from one num to another.
 *@n: first number
 *@m: second number
 * Return: difference in bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int opp;

	opp = n ^ m;
	i = 0;
	while (opp != 0)
	{
		i = i + (opp & 1);
		opp = opp >> 1;
	}
	return (i);
}
