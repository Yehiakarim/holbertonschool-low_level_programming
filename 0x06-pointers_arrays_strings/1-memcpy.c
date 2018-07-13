#include "holberton.h"

/**
 * _memcpy - description
 * Return: 0
 * @dest: target
 * @src: grabbing memory
 * @n: number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}
