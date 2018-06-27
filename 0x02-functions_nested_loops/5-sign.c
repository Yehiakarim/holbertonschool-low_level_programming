#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 * Return: 1 if n is greater than zero && otherwise 0
 */
int print_sign(int n)
{
	if (n >= '1' && n <= '9')
	{
		_putchar('+');
		return (1);
	}
	if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
