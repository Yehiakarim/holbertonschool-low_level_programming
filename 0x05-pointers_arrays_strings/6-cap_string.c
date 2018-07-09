#include "holberton.h"
/**
 **string_toupper - descriptio
 *@p: pointer
 *Return: s
 */
char *string_toupper(char *p)

{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}

	}
	return (p);
}
