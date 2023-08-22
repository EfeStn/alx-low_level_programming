#include "main.h"

/**
* rev_string - Reverses a string
* @s: Pointer to the string
* Return: String in reverse
*/

void rev_string(char *s)
{
	char rev = s[0];
	int start = 0;
	int end;

	while (s[start] != '\0')
		start++;
	for (end = 0; end < start; end++)
	{
		start--;
		rev = s[end];
		s[end] = s[start];
		s[start] = rev;
	}
}
