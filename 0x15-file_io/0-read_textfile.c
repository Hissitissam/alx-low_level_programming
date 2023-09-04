#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and print to STDOUT.
 * @filename: text file being read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f_descr;
	ssize_t n;
	ssize_t i;

	f_descr = open(filename, O_RDONLY);
	if (f_descr == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	i = read(f_descr, buf, letters);
	n = write(STDOUT_FILENO, buffer, i);

	free(buffer);
	close(f_descr);
	return (i);
}

