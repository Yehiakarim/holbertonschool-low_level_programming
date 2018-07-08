#include "holberton.h"
/**
 * *_strncat - description
 * @dest: description
 *@src: descriton
 *@n: description
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;


	for (m = 0; dest[m] != '\0'; m++)
	{
		;
	}
	for (i = 0; i < n && src[i]; i++)
	{
		dest[m] = src[i];
	}
	return (dest);
}
