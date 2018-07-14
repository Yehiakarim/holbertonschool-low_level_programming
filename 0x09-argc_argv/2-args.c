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
	int i;
	(void) argc;
	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
