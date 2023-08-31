#include "main.h"

/**
 * flip_bits - counts number of bits to flip to get from 1 number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, number = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;
		if (curr & 1)
			number++;
	}

	return (number);
}

