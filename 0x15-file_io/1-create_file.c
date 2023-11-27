#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: On success 1 and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f_descr, n, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	f_descr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(f_descr, text_content, length);

	if (f_descr == -1 || n == -1)
		return (-1);

	close(f_descr);

	return (1);
}

