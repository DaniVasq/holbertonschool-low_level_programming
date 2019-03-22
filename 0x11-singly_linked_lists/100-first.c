#include <stdio.h>
#include <stdlib.h>
void print_main(void) __attribute__ ((constructor));
/**
 * print_main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
