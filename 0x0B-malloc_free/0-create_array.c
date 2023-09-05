#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and initializes with specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (0);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
