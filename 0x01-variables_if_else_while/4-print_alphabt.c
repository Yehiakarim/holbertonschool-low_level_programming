#include <stdio.h>
/**
* main - Dercription
*
* Return: 0
*/

int main(void)
{	char le;
	for (le = 'a'; le <= 'z'; le++)
{
	if ((le != 'q') & (le != 'e'))
		putchar(le);
	}
	putchar('\n');
	return (0);
}
