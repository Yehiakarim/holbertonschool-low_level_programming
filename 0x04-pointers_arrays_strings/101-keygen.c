#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{

	unsigned short int length = 14;

	srand((unsigned int) time(0) + getpid());

	while (length--)
	{
		putchar(rand() % 94 + 33);
		srand(rand());
	}

	printf("\n");
}
