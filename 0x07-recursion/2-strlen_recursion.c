#include "holberton.h"
/**
 *_strlen_recursion - return strings
 *@s: string
 *Return: s
 */

int _strlen_recursion(char *s)
{


		int i = 0;

		if (*s == '\0')
		{
			return (0);
		}
		else
		{
			i = (_strlen_recursion(s + 1));
			return (i + 1);
		}
}
