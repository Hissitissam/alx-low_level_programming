#include "main.h"

/**
 * append_text_to_file - Appends a text at the end of a file.
 * @filename: the name of the file.
 * @text_content: The string to add at the end of the file.
 *
 * Return: On failure -1.
 *         If the file is NULL -1.
 *         on success 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, num_bytes, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_d = open(filename, O_WRONLY | O_APPEND);
	num_bytes = write(file_d, text_content, length);

	if (file_d == -1 || num_bytes == -1)
		return (-1);

	close(file_d);

	return (1);
}

