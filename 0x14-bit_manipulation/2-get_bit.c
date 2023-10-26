#include "main.h"
/**
 * get_bit - Start of function that returns
 *		the value of a bit at a given index.
 * @n: Int
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, resultat;

	i = sizeof(n) * 8;

	if (index >= i)
		return (-1);

	resultat = n >> index & 1;

	return (resultat);
}
