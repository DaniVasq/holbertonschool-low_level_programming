#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int l = 0;

	do {
		if (l < 10)
			putchar('0' + l);
		else
		{
			putchar(a);
			a++;
		}
		l++;
	} while (l <= 15);

	putchar('\n');
	return (0);
}
