#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets a bit at a given index.
 * @n: Pointer to the number to set the bit in.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
