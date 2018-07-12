#include "holberton.h"
/**
 *_puts_recursion - prints strings
 *@s: string
 *Return: s
 */

void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);

	}
	else
		_putchar('\n');
}
