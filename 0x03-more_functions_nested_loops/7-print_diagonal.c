
#include "holberton.h"
/**
*print_diagonal - decription
* @n: - is good
* Return: 0
*/
void print_diagonal(int n)
{
	int x, z;
	{
		for (x = 0; x < n; x++)
		{
			for (z = 0; z < n; z++)
				if (z < x)
				{
					_putchar(' ');
				}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n < 0)
	_putchar('\n');

}
