#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 *@s: pointer/string
 *Return: 0 if statement is true, else return factorial
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
