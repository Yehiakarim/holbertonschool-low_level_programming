#include "holberton.h"
/**
 *_puts_recursion - prints strings
 *@s: string
 *Return: s
 */

void _puts_recursion(char *s)
{
	int v;

	for (v = 0; s[v] != '\0'; v++)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}
