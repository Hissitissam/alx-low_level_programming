#include "main.h"
/**
 * _strspn - Calculate the length of the prefix substring
 * @s: to be checked
 * @accept: accepted character
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				count++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}

