#include "main.h"

/**
 * create_file - Function creates a file.
 * @filename: the name of the file to create.
 * @text_content: A string to write to the file.
 *
 * Return: 1 on succes.
 *         Otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, num_bytes, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	num_bytes = write(file_d, text_content, length);

	if (file_d == -1 || num_bytes == -1)
		return (-1);

	close(file_d);

	return (1);
}

