#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int result;
	unsigned long int flip = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		result = flip >> i;
		if (result & 1)
			count++;
	}

	return (count);
}
