#include "holberton.h"
/**
 * swap_int - description
 * @a: a
 * @b: b
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
