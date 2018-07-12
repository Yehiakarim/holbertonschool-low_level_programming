#include "holberton.h"
/**
 *_puts_recursion - prints strings
 *@s: string
 *Return: s
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar(0);
		_putchar('\n');

	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
	_putchar('\n');
}
