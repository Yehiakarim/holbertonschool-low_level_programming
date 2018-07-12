#include "holberton.h"
/**
 *_puts_recursion - prints strings
 *@s: string
 *Return: s
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')

	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}

}
