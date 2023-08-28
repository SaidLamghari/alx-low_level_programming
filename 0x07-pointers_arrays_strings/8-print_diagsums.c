#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - start of function that prints the sum
 *			of the two diagonals of a square matrix of integers.
 *
 * @a: Matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 = sum1 + a[i + (i * size)];
		sum2 = sum2 + a[(size - i - 1) + (i * size)];
		i++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
