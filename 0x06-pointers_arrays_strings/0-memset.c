#include "holberton.h"
/**
 **_memset - description
 *@s: description
 *@b: description
 *@n: descripton
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
