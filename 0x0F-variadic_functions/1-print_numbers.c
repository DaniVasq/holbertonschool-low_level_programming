#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by a new line.
 *@n: number of int to be passed to function
 *@separator: string to be printed between numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		printf("%d\n", va_arg(args, unsigned int));

	if (separator != NULL)
	{
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
