#include "main.h"

/**
 * _memset - set a block of memory to a specific byte value
 * @s: starting address of memory to be filled
 * @b: the byte value
 * @n: number of bytes to be changed
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

