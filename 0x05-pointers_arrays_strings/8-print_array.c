#include "main.h"
#include <stdio.h>
/**
 * print_array - start of the program that prints
 * n elements of an array of integers
 * @a: input
 * @n: input
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}


	printf("\n");
}

