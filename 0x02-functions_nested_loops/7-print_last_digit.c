#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 *@n: the number to be checked
 * Return: 1 if c is lowercase or uppercase && otherwise 0
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		return((n + 0) % 10);
	}
	else if (n < 0)
	{
		return((n + 0) * -1 % 10);
	}
	else
	{
		return(0);
	}
	return (0);
}
