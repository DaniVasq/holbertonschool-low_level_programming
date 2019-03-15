#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: variable to add
 * @b: variable to add
 * Return: sum
 */
int op_add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}
/**
 * op_sub - returns the product of a and b
 *@a: variable to subtract
 *@b: variable to substract
 * Return: difference
 */
int op_sub(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}
/**
 * op_mul - returns product of a and b
 *@a: variable to multiply
 *@b: variable to multiply
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}
/**
 * op_div - divides two numbers
 * returns result of division of a and b
 *@a: variable to divide
 *@b: variable to divide
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	int c;

	c = a / b;
	return (c);
}
/**
 * op_mod - remainder of two variables
 *@a: variable
 *@b: variable
 * Return: remainder
 */
int op_mod(int a, int b)
{
	int c;

	c = a % b;
	return (c);
}
