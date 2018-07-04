#include "holberton.h"
/**
 * _puts - description
 * @str: string
 * Return: 0
 */
void _puts(char *str)

{
	int string;

	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string++;
	}
	_putchar('\n');
}
