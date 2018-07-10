#include "holberton.h"
/**
 * *rot13
 * @s: description
 * Return: description
 */

char *rot13(char *s)

{
	int i;
	int m;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)

		{
			for (m = 0; input[m] != '\0'; m++)
			{

				if (s[i] == input[m])
				{
					s[i] = output[m];
					break;
				}
			}
		}
		return (s);
}
