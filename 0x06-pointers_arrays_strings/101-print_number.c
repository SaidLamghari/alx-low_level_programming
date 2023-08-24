#include "main.h"
/**
 * print_number - start of the program that prints an integer.
 * @n: input
 */
void print_number(int n)
{
	int np;

	np = n;

	if (n < 0)
	{
		_putchar('-');
		np = n * -1;
	}
	if (np / 10 != 0)
		print_number(np / 10);
	_putchar((np % 10) + 48);
}

