#include "holberton.h"

/**
 * times_table -  This program prints the 9 times multiplcation table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j;
	int r;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			_putchar(',');
			_putchar(' ');

			if (r <= 9)
			{
				_putchar(' ');
				_putchar(r + 48);
			}
				else
				{
					_putchar((r / 10) + 48);
					_putchar((r % 10) + 48);
				}
		}
				_putchar('\n');
		}
}
