#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: prints the last digit of a number
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		return ((n + 0) % 10);
	}
	else if (n < 0)
	{
		return ((n + 0) * -1 % 10);
	}
	else
	{
		return (0);
	}
	return (0);
}
