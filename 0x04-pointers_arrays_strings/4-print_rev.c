#include "holberton.h"
/**
 * print_rev - description
 * @s: string
 * Return: 0
 */
void print_rev(char *s)

{
	int i, l;

		while (s[i] != '\0')
	{
		i++;

	}
	for (l = i - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
