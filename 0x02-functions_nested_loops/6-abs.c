#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 *@n: the computes the absolute value of an integer.
 * Return: 0
 */
int _abs(int n)
{

	if (n < 0)
	{
		return(n * -1);
	}
	else if (n > 0)
	{
		return(n);
	}
	else
	{
		return(0);
	}
	return (0);
}
