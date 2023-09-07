#include <stdlib.h>
#include "main.h"
/**
 * _memset - Fills a block of memory with a specified value
 * @s: Pointer to the memory block
 * @c: Value to be set
 * @n: Number of bytes to be set
 *
 * Return: Pointer to the memory block
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(size * nmemb);

	if (ptr == 0)
		return (0);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
