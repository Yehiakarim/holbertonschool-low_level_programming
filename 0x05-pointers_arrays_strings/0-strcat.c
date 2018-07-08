#include "holberton.h"
/**
 * *_strcat - description
 * @dest: description
 *@src: descritopn
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int m;

	for (m = 0; dest[m] != '\0'; m++)
	{
		;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + m] = src[i];
	}
	dest[i + m] = '\0';
	return (dest);
}
