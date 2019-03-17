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

	if (i < n - 1 && separator)
	{
		printf("%s", separator);
	}
	printf("\n");
		va_end(args);
}
