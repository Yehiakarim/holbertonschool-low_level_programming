#include "holberton.h"

/**
 * helper_2 - description
 * @str: a pointer
 * @check:  pointer
 * @save:  pointer
 *
 * Return: 1
 */
int helper_2(char *str, char *check, char *save)
{
	if (*str == '\0' && *check == '\0')
	{
		return (1);
	}
	if (*str == '\0' && *check != '\0')
	{
		return (0);
	}
	if (*(check) == '*')
	{
		if (*(str + 1) == '\0')
			return (1);
		save = check + 1;
		return (helper_2(str, check + 1, save));
	}
	if (*str == *check)
	{
		return (helper_2(str + 1, check + 1, save));
	}
	if (*str != *check)
	{
		if (*(str - 1) == *(check - 1))
		{
			return (helper_2(str, save, save));
		}
		return (helper_2(str + 1, check, save));
	}
	return (0);
}
/**
 * wildcmp - description
 * @s1:  pointer
 * @s2:
 *
 * Return: 1 if the stings ==, and 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	int check;

	if (*s2 == '*' && *s1 == '\0')
		return (1);
	check = helper_2(s1, s2, s2);
	return (check);
}
