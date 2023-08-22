#include "main.h"
/**
 * puts2 - prints every character of a string, starting with the first
 * @str: pointer to the string
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	i = length - 1;
	for (o = 0 ; o <= i ; o++)
	{
	if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
