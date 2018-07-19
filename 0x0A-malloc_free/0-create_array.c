#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **create_array -  create array
 *@c: char
 *@size: int
 *Return: create_array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == '\0')
	{
		return (0);
	}
	if (str == '\0')
	{
		return (0);
	}

	for (i = 0; i< size; i++)
	{
		str[i] = c;
	}
	return (str);
}
