#include "holberton.h"
/**
 * factorial - return strings
 *@n: string
 *Return: s
 */

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
