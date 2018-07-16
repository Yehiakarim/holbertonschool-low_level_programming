#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - main
 * @argc: argument number
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, x, star, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		star = strlen(argv[i]);

		for (x = 0; x < star; x++)
		{
			if (argv[i][x] < '0' || argv[i][x] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
