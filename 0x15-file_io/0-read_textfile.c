#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints it.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when it  fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t count;
	ssize_t t;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(file_d, buffer, letters);
	count = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(file_d);
	return (count);
}


