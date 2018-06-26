 #include "holberton.h"
/**
 * print_alphabet_x10 - Prints "b"
 */

void print_alphabet_x10(void)

{
	int b;
	int a;


	for (b = '0'; b <= '9'; b++)
	{
		for (a = 'a'; a <= 'z'; a++)

			_putchar(a);
			_putchar('\n');

	}
}
