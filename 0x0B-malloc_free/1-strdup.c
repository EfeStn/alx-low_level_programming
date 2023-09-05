#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         Returns NULL if insufficient memory was available or if str is NULL.
 */
char *_strdup(char *str)
{
	char *array;
	int i, r = 0;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;

	array = malloc(sizeof(char) * (i + 1));

	if (array == 0)
		return (0);

	for (r = 0; str[r]; r++)
		array[r] = str[r];

	return (array);
}
