#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 *
 *@format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;

	va_start(args, format);
	while (format[i] && format != 0)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
			{
				printf("%p", str);
				break;
			}
			printf("%s", str);
			break;
		default:
			i++;
			continue;
	}
		if (format[i + 1] != 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
