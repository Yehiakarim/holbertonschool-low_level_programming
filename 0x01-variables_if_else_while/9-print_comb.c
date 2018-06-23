#include <stdio.h>

/**
* main - description
*
* Return: 0
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
