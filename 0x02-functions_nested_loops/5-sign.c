#include "main.h"
/**
 * print_sign - start of program
 * @n: the int
 * Return: 1 for  greater than zero 0 for  zero and -1 for is less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
