#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - copy string
 * @str: pointer
 *Return: ptr
 */

char *_strdup(char *str)
{
	int x;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	ptr = malloc(sizeof(char) * x + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
	{
		ptr[x] = str[x];
	}
	return (ptr);
}
