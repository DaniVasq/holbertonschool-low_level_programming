#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: - array
 */
void print_chessboard(char (*a)[8])
{
	int w = 0;
	int l = 0;

	for (w = 0; w < 8; w++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(a[w][l]);
		}
		_putchar('\n');
	}
}
