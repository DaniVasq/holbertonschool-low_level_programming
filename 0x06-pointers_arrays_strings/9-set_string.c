#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char.
 *@to: the character we are assigning value to.
 *@s: the letter of the pointer.
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
