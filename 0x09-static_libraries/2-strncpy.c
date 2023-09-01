/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
