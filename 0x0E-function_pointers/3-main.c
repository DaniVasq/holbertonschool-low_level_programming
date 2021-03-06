#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point/the brain
 *atoi: used to convert arguments to int
 *@argv: argument array
 *@argc: counter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int res;
	int (*x)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = get_op_func(argv[2]);
	if (x == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (*argv[2] == '/' ||  *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = (*x)(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
