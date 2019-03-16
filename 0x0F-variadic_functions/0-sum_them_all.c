#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *@n: number of arguments
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list laura;
	unsigned int i,
		sum = 0;

	if (n == 0)
		return (0);

	va_start(laura, n);

	for (i = 0; i < n; i++)
		sum += va_arg(laura, int);

	va_end(laura);
	return (sum);
}
