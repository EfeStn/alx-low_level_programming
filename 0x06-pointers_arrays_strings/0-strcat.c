#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest

	int i;
	int n;

	i = 0;
	while (*ptr[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (*src[n] != '\0')
	{
		*ptr = *src;
		i++;
		j++;
	}

	*ptr = '\0';
	return (dest);
}
