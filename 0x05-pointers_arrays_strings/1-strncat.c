#include "holberton.h"

/**
 * *_strncat - concatenates two strings until a certain point.
 *@dest: - destination
 *@src: - source
 *@n: - number of the position.
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
		dest[i + i2] = src[i2];
		while (src[i2])
		{
			i2++;
			if (i2 < n)
			{
				src[i2 + n] = '\0';
				dest[i + i2] = src[i2];
			}
		}
		return (dest);
}
