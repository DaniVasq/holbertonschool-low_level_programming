#include "function_pointers.h"

/**
 * print_name - prints a name as is
 *@name: person's  name
 *@f: printer
 * Return: nothing (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
