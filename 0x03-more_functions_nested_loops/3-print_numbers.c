#include "holberton.h"
/**
 * print_numbers - prints number from 0-9 and new line.
 */
void print_numbers(void)
{
	int d = 48;

		while (d >= 48 && d <= 57)
	{
		_putchar(d);
		(d++);
	}
	_putchar('\n');
}
