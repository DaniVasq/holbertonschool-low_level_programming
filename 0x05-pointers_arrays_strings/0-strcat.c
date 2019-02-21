#include "holberton.h"

/**
 * char *_strcat - concatenates two strings.
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return(0);
}
