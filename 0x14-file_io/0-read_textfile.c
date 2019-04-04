#include "holberton.h"

/**
 * read_textfile - reads a txt file and prints it to POSIX standard output
 *@filename: the name of the file
 *@letters: containing the letters or amount
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	long int i;
	int filedes;
	long int  amount;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(size_t) * (letters + 1));
	if (buffer == NULL)
		return (0);
	filedes = open(filename, O_RDONLY);

	if (filedes < 0)
		return (0);

	if (read(filedes, buffer, letters) < 0)
		return (0);

	buffer[letters] = '\0';

	for (i = 0; buffer != '\0'; i++)
		;

	amount = write(STDOUT_FILENO, buffer, i);

	if (amount < 0 || amount != i)
		return (0);

	if (close(filedes) < 0)
		return (0);

	free(buffer);
	return (amount);

}
