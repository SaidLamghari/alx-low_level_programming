#include "main.h"
/**
 * set_bit - Start of function that sets
 *		the value of a bit to 1 at a given index.
 * @n: Pointer
 * @index: The index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = sizeof(n) * 8;

	if (index >= i)
		return (-1);

	*n |= 1UL << index;

	return (1);
}
