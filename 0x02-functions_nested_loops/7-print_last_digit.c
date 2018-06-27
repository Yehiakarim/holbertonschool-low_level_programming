#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: prints the last digit of a number
 * Return: 0
 */
int print_last_digit(int r)
{
	int x;

	if (r > 0)
	{
		x = r % 10;
		_putchar(x + '0');
	}
	else if (r < 0)
	{
		x = (r % 10) * -1;
		_putchar(x + '0');
	}
	else
	{
		_putchar('0');
	}
	return (x);
}
