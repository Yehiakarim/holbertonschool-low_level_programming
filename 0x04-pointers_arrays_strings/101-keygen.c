#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main - description
 *
 * Return: 0
 */

int main(void)
{

	unsigned short int length = 14;

	srand((unsigned int) time(0) + getpid());

	while (length--)
	{
		putchar(rand() % 94 + 33);
		srand(rand());
	}

	putchar('\n');
}
