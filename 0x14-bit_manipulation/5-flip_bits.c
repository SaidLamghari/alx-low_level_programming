#include "main.h"
/**
 * flip_bits - Start of function that returns the number of bits
 *		you would need to flip to get from one number to another.
 * @n: The first
 * @m: The second
 * Return: The number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, comp;

	i = 0;
	comp = n ^ m;

	while (comp != 0)
	{


		if (comp & 1)
		{
			i++;
		}
		comp = comp >> 1;
	}

	return (i);
}
