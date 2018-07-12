#include "holberton.h"
/**
 *_print_rev_recursion - prints strings
 *@s: string
 *Return: s
 */

void _print_rev_recursion(char *s)
{

	{

		if (*s)

		{
			_print_rev_recursion(++s);
			_putchar(*s);
		}

	}

}
