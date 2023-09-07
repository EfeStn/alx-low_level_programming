#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: The pointer to the newly created array
 *         or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (0);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == 0)
		return (0);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
