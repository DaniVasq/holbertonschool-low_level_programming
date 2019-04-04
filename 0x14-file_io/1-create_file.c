#include "holberton.h"

/**
 * create_file  - creates a file
 *@filename: the name of the file
 *@text_content: the content of the text
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	long int i;
	int filedes;
	long int amount;

	if (filename == NULL)
		return (-1);

	filedes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filedes < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		amount = write(filedes, text_content, i);

		if (amount < 0 || amount != i)
			return (-1);
	}
	if (close(filedes) < 0)
		return (-1);
	return (amount);
}
