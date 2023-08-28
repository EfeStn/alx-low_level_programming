#include "main.h"

/**
 * _senset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: Constant byte to fill the memory with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_senset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
