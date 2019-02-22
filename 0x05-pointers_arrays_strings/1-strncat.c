#include "holberton.h"

/**
 * char *_strncat - concatenates two strings until a certain point.
 * @:dest - destination
 * @:src - source
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
		int i = 0;
		int i2 = 0;

		while (dest[i])
		{
			i++;
		}
		while (src[i2])
		{
			dest[i + i2] = src[i2];
			if (n < 3 &&
			{
				src[i2 +n] = '\0';
			}
			i++;
		}
		dest[i + i2] = src[i2];
		return (dest);
}
