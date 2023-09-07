#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *array_range - Start of function that creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: ptr or Null
 */
int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	i = 0;
	if (max < min)
		return (NULL);
	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
