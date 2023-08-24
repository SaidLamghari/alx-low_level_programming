#include "main.h"
/**
 * reverse_array - start of the program reverses
 *	the content of an array of integers.
 * @a: string
 * @n: the number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, rev;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		i++;
		j--;
	}
}
