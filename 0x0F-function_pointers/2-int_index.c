#include "function_pointers.h"
/**
 * int_index - Start of function that searches for an integer.
 * @array: Array
 * @size: The number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 * Return: Index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
