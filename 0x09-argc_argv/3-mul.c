#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: argument
 * @argv: array
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int i, s;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	s = atoi(argv[2]);
	printf("%d\n", i * s);

	return (0);
}
