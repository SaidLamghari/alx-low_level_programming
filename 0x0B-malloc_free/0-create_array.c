#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *create_array - Start of a function that creates an array of chars
 * @size: Size
 * @c: Char
 * Return:pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
