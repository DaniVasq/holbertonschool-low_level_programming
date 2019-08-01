#include "holberton.h"

/**
 * char *_strncpy - copies a string.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	while(*dest)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}
