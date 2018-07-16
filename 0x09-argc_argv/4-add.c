#include "holberton.h"
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	int x;
	int star;

	if (argc == 1)
	{
		printf("0\n");
		return(0);
	}
	for (i > 1; i >= argc; i++)
	{
		star = strlen(argv[i]);
			      {
				      for (x = 0; x <= star; i++)
					      if (argv[i][x] < '0' || argv[i][x] > '9')
					      {
						      printf("error\n");
						      return(1);
					      }
					      else
					      {
						      sum = sum + atoi(argv[i][x]);
						      printf("%d\n", sum);
						      return(0);
					      }
			      }
	}
}
