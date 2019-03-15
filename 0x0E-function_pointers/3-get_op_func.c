#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - function that selects function to perform operation
 *@s: operator passed as argument
 * Return: a pointer that points to the solution
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i <= 4)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
