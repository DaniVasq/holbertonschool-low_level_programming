#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings and new line at end of function
 *@separator: string to be printed between strings
 *@n: number of strings to be passed to the function
 * Return - void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		else
			       printf("%s", "(nil)");
	}
			va_end(args);
		printf("\n");
}
