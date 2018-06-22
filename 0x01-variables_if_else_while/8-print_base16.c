#include <stdio.h>
/**
* main - description
*
* Return: 0
*/

int main(void)
{	char le;

	for (le = '0'; le <= '9'; le++)
	{
		putchar(le);
	}
	for (le = 'a'; le <= 'f'; le++)
{
	putchar(le);
}
	putchar('\n');
	return (0);
}
