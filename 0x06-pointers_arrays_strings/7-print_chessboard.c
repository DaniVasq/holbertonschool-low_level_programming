#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int w = 0;
	int l = 0;

	for (w = 0; a[w][l] != '\0'; w++)
	{
		for (l = 0; a[w][l] != '\0'; l++)
		{
			_putchar(a[w][l]);
		}
		_putchar('\n');
	}
}
