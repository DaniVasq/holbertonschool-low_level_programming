#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of 2 numbers
 *@argc: argument count
 *@argv: argument vector
 *
 * Return: 0 or 1 (if success or if error)
 */
int main(int argc, char *argv[])
{
	int one;
	int two;

	if (argc > 2)
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);
		printf("%d\n", one * two);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
