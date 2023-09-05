#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * **alloc_grid - Start of function that returns a pointer
 *				to a 2 dimensional array of integers.
 * @width: Colum
 * @height: Row
 * Return: Null
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == 0)
		{
			while (i > 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}

