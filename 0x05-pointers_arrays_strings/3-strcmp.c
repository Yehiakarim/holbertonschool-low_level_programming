#include "holberton.h"
/**
 * _strcmp - description
 * @s1: - descripton
 * @s2: - description
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
			break;

		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')

		return (0);
	return (-1);
}
