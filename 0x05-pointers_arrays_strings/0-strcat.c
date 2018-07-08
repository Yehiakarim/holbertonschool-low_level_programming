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

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (m = 0; dest[m] != '\0'; m++, i++)
	{
		src[i] = dest[m];
	}
	return (dest);
}
