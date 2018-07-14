#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: argument
 * @argv: array
 * Return: always 0.
 */
int main(int argc, char **argv[])
{
	(void) argc;
	argc--;
	printf("%d\n", argc);
	return (0);
}
