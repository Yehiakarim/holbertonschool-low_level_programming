#include "holberton.h"
/**
*print_triangle - decription
* @size: - is good
* Return: 0
*/
void print_triangle(int size)
{
	int x, z;
	{

		for (x = 0; x < size; x++)
		{
			for (z = size; z > 0; z--)
				if (z > size)
				{
					_putchar('#');
				}
			else
			{
				_putchar('#');
			}
			{

			}
			_putchar(' ');

		}
	}
	if (size < 0)
	_putchar('\n');
}
