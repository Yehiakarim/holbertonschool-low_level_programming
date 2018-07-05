#include "holberton.h"
/**
 * puts_half - description
 * @str: string
 * Return: 0
 */
void puts_half(char *str)

{
	int l;
	int i;

	for (l = 0; str[l] != '\0'; l++)
	{
	}

		if (l % 2 != 0)
		{
			i = (l + 1) / 2;
		}
		else
		{
			i = l / 2;
		}
		for (l = i; str[l] > '\0'; l++)
		{
			_putchar(str[l]);
		}

	_putchar('\n');

}
