  #include "holberton.h"
/**
 * rev_string - description
 * @s: string
 * Return: 0
 */
void rev_string(char *s)

{
	int length;
	int temp;
	int count;
	int l;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (count = length - 1, l = 0; count >= length / 2; count--, l++)
	{
		temp = s[count];
		s[count] = s[l];
		s[l] = temp;
	}
}
