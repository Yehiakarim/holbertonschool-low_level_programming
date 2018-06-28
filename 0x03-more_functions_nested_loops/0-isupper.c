#include "holberton.h"
/**
* _isupper - checks for uppercase character
*@c:  is uppercase
* Return: (1)
*/

int _isupper(int c)
{

		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
