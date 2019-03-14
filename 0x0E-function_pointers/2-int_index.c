#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *@size: number of elements in array
 *@cmp: pointer to the function to compare values
 *@array: array array
 * Return: index of first element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
