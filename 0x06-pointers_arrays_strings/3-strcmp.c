#include "main.h"
/**
 * _stremp - Compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: 0 if strings are equal,
 * positive if s1 is greater, negative if s2 is greater
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
