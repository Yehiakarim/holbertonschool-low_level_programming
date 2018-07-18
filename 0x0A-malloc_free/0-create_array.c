#include "holberton.h"
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

	if (size == '\0')
	{
		return (0);
	}
	str = malloc(size * sizeof(char c))
		if (str == '\0')
		{
			return (0);
		}
	i = 0;
	while (i < sizer)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
