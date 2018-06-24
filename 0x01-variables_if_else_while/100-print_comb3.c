#include <stdio.h>
/**
* main - description
*
* Return: 0
*/
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '8'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x >= y)
				continue;
			putchar(x);
			putchar(y);
			if (x == '8' && y == '9')
				break;
			putchar(',');
			putchar(' ');
				}
	}
	putchar('\n');
	return (0);
}
