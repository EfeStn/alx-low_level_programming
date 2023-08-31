#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the number, or -1 if it doesn't exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate_sqrt(n, 0));
}

/**
 * calculate_sqrt - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @i: The square root.
 *
 * Return: The natural square root of the number, or -1 if it doesn't exist.
 */
int calculate_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calculate_sqrt(n, i + 1));
}
