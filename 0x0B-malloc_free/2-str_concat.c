#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated memory containing the concatenated,
 *         strings or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *dream;
	int i, ct;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	i = ct = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ct] != '\0')
		ct++;
	dream = malloc(sizeof(char) * (i + ct + 1));

	if (dream == 0)
		return (0);
	i = ct = 0;
	while (s1[i] != '\0')
	{
		dream[i] = s1[i];
		i++;
	}

	while (s2[ct] != '\0')
	{
		dream[i] = s2[ct];
		i++, ct++;
	}
	dream[i] = '\0';
	return (dream);
}
