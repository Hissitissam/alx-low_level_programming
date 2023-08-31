#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number in binary
 */

void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> i;

		if (cur & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

