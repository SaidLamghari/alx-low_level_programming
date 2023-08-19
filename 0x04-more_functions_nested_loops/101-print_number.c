#include "main.h"

/**
 * print_number - start of the program
 * @n: input numbre
 *
 */
void print_number(int n)
{
	double i;
	
	i = n;
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ( i / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
