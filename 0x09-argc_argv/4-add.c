#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - multiplies 2 ints followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc, i++)
	{
		for (j = 0; argv[i][j] > '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				}
		return (1);
	}
	else

	return (0);
}
