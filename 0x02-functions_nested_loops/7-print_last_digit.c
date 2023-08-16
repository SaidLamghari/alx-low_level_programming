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

	r = num % 10;
	return (r + '0');
}
