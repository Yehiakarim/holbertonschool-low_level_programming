#include "holberton.h"

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
