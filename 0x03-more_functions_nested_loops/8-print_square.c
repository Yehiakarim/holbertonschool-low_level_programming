#include "holberton.h"
/**
*print_square - decription
* @size: - is good
* Return: 0
*/
void print_square(int size)
{
	int x, z;
	{

		for (x = 0; x < size; x++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	_putchar('\n');
}
