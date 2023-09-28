#include "main.h"
/**
 * print_binary - Start of function that prints
 *			the binary representation of a number.
 * @n: Int
 */
void print_binary(unsigned long int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = sizeof(n) * 8;
	j = 0;
	while (i)
	{
		i--;
		if (n & 1UL << i)
		{
			_putchar('1');
			j = 1;
		}
		else if (j)
		{
			_putchar('0');
		}
	}
}
