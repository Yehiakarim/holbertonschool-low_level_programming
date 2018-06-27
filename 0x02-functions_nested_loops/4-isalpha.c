#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: the number to be checked
 * Return: 1 if c is lowercase or uppercase && otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{

			return (0);
	}
	return (0);
}
