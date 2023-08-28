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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

int main(void)
{
	char str[10] = "Hello";

	printf("Before _senset(): %s\n", str);
	_senset(str, 'A', 5);
	printf("After _senset(): %s\n", str);

	return (0);
}
