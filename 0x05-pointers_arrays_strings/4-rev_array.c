#include "holberton.h"

void reverse_array(int *a, int n)
{

	int l;
	int i;
	int temp;
	int c;

	for (l = 0; a[l] != '\0' && l < n; l++)
	{
		;
	}



	for (i = n - 1, c = 0; c < i; i--, c++)
	{
		temp = a[i];
		a[i] = a[c];
		a[c] = temp;
	}
}
