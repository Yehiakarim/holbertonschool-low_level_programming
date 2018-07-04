# include "holberton.h"
/**
 * _strlen - description
 *@s: length
 * Return: length
 */
int _strlen(char *s)

{
	int length;

	length = 0;

	while (s[length] != '\0')

		length++;

return (length);
}
