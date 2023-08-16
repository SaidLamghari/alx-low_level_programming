#include "main.h"
/**
 * print_last_digit - start of program
 * @num: the int
 * Return: Always 0
 *
 */
int print_last_digit(int num)
{
	int r;

	if (num < 0)
		num = num * (-1);
	r = num % 10;
	_putchar('0' + r);
	return (r + '0');
}
